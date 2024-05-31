close all, clear all, clc

g = 9.81;
c = 2.5;
l = 5;
m = 5;

x0 = [0.1; 0]

A = [0 1;g/l -c/(l*m)];
B = [0; 1/m];
C = [1 0];
D = 0;

Q = eye(2);
R = 1;
K = lqr(A,B,Q,R);
N_xu = pinv([A B; C 0])*[0; 0; 1];
N_bar = N_xu(end)+K*N_xu(1:(end-1));

Kp = 5;
Ki_max = c/(m*l)*(Kp-g/l);
Ki = 5;
out = sim("zad62pendulum_22a.slx");

figure
plot(out.tout, out.LQRy)
title('Odpowiedź układu sterowanego przez LQR');
xlabel('t_{out}(s)');
ylabel('y');
grid on;

figure
plot(out.tout, out.y)
title('Odpowiedź układu z regulatorem z nastawami początkowymi');
xlabel('t_{out}(s)');
ylabel('y');
grid on;

options = optimoptions('fmincon', 'OutputFcn', @outfun, 'Display', 'iter');
[zeta,fval]=fmincon(@custom62p,[Kp Ki],[],[],[],[],[0, 0],[200 20], [], options);
regtime(zeta)
Kp = zeta(1)
Ki = zeta(2)

out = sim("zad62pendulum_22a.slx");

figure
plot(out.tout, out.y)
title('Odpowiedź układu z regulatorem z wybranymi nastawami');
xlabel('t_{out}(s)');
ylabel('y');
grid on;

% [zeta2,fval]=fmincon(@ISET62,[150 10],[],[],[],[],[100 0],[200 20]);
% regtime(zeta2)


function stop = outfun(x, optimValues, state)
    stop = false;
    persistent history;
    
    switch state
        case 'init'
            history = [];
            figure;
            hold on;
            title('Postęp Optymalizacji');
            xlabel('Iteracja Algorytmu');
            ylabel('log_{10}(Funkcji Kosztu)');
            grid on;
        case 'iter'
            history = [history; optimValues.iteration, optimValues.fval];
            plot(history(:,1), log10(history(:,2)), 'b-o');
            text(optimValues.iteration, log10(optimValues.fval), sprintf('(K_p=%0.2f, K_I=%0.2f)', x(1), x(2)), ...
                'VerticalAlignment', 'bottom', 'HorizontalAlignment', 'right', 'Rotation', 270);
            drawnow;
        case 'done'
            hold off
    end
end
