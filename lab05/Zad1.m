close all, clear  all, clc

%% Przebieg zadania:
% podać macierz A
% zasymulować w Simulinku blok State-Space z macierzą A
% sprawdzić widmo układu korzystając z wykresu Bode'go
% podać sinusoidę na wejście z częstością około na granicy paśma
% podać ZOH na wejście - zobaczyć artefakty dla różnych okresów próbkowania
% obliczyć ręcznie macierze A+, B+, C+, D+
% sprawdzić z MATLABem c2d
% zasymulować dla różnych h, sprawdzić Bode'go, sprawdzić położenie
% biegunów i zer układu dyskretnego

A = [0 1; -6 -5];
B = [0; 6];
C = [1 0];
D = 0;

sysc = ss(A,B,C,D);

figure(1);
opts1=bodeoptions('cstprefs');
opts1.PhaseVisible = 'off';
opts1.YLim={[-10 2]};
bode(sysc,opts1), grid on, hold all


%% Wybór okresu próbkowania
omega_g = 1.5; %rad/s
f_g = omega_g/(2*pi); %rad/s --> Hz 
f_p_min = 2*f_g; % Shannon
h_max = 1/f_p_min; % f-->Ts
h = h_max/20;

%% Macierze układu dyskretnego policzone ręcznie
e_2h = exp(-2*h);
e_3h = exp(-3*h);
A_my = [3*e_2h-2*e_3h e_2h-e_3h; -6*e_2h+6*e_3h -2*e_2h+3*e_3h]
B_my = [-3*e_2h+2*e_3h; 6*e_2h-6*e_3h] - [-1; 0]
C_my = [1 0]
D_my = [0]

%% Sprawdzenie macierzy z MATLABem
sysd = c2d(sysc,h);
A_plus = sysd.A
B_plus = sysd.B
C_plus = sysd.C
D_plus = sysd.D

%1zad kryterium kola gdzie nieliniowa funckaj w zwrotnym jest saturacja
%2zad schematy rożnicowe (skrypt w matlabie niby w ramach cwiczenia)

figure(1)
bode(sysd,opts1)
figure(2);
pzplot(sysd) 
xlim([-2 2]); ylim([-2 2])
