function[kpi] = ISE62p(in)

assignin("base","Kp",in(1));
assignin("base","Ki",in(2));
out = sim("zad62pendulum.slx");
ISE = out.ISE(end);

kpi = ISE;