function[kpi] = custom62p(in)

assignin("base","Kp",in(1));
assignin("base","Ki",in(2));
out = sim("zad62pendulum_22a.slx");



kpi = ((out.LQRy - out.y).^2)'*out.tout;