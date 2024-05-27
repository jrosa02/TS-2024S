close all, clear all, clc

g = 9.81;
c = 2.5;
l = 5;
m = 5;

x0 = [1; 5]

%linearized obj
A = [0 1;g/l -c/(l*m)];
B = [0; 1/m];
C = [1 0];
D = 0;

%LQR regulator setup
Q = eye(2);
R = 1;
K = lqr(A,B,Q,R);
N_xu = pinv([A B; C 0])*[0; 0; 1];
N_bar = N_xu(end)+K*N_xu(1:(end-1));

%PID0 regulator setup
Kp = 200;
Ki_max = c/(m*l)*(Kp-g/l);
Ki = 5;

%Find best PID by ISET
[zeta,fval]=fmincon(@ISE62p,[150 10],[],[],[],[],[100 0],[200 20]);
regtime(zeta)
Kp = zeta(1);
Ki = zeta(2);

% [zeta2,fval]=fmincon(@ISET62,[150 10],[],[],[],[],[100 0],[200 20]);
% regtime(zeta2)

