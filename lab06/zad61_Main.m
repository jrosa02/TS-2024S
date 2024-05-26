close all, clear all, clc

Kp_set = [0.1 0.2 0.3 0.4 0.5 1 2 5 10 50];
for i = 1:length(Kp_set)
    Kp = Kp_set(i);
    assignin("base","Kp",Kp);
    out = sim("zad61.slx");
    ISET(i) = out.ISET(end);
    ISE(i) = out.ISE(end);
    overshoot(i) = max(out.y) - out.y(end);
    eabs = abs(out.y - out.y(end));
    absyinf = abs(out.y(end));
    regtime(i) = out.tout(max(find(eabs > 0.05*absyinf)));
end

KPIs = [Kp_set' (ISET/max(ISET))' (ISE/max(ISE))' (overshoot/max(overshoot))' (regtime/max(regtime))'];

figure;
plot(log10(Kp_set),log(KPIs(:,2)),'-x','LineWidth',2), hold all
plot(log10(Kp_set),log(KPIs(:,3)),'-x','LineWidth',2), hold all
plot(log10(Kp_set),log(KPIs(:,4)),'-x','LineWidth',2), hold all
plot(log10(Kp_set),log(KPIs(:,5)),'-x','LineWidth',2), hold all
grid on
legend('ISET', 'ISE', 'overshoot','regtime')

figure;
semilogx(Kp_set,(KPIs(:,2)),'-x','LineWidth',2), hold all
semilogx(Kp_set,(KPIs(:,3)),'-x','LineWidth',2), hold all
semilogx(Kp_set,(KPIs(:,4)),'-x','LineWidth',2), hold all
semilogx(Kp_set,(KPIs(:,5)),'-x','LineWidth',2), hold all
grid on
legend('ISET', 'ISE', 'overshoot','regtime')

figure;
plot(KPIs(:,4),KPIs(:,5),'-x','LineWidth',2),
xlabel('overshoot'), ylabel('regtime')
