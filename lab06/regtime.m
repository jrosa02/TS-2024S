function[kpi] = regtime(in)

assignin("base","Kp",in(1));
assignin("base","Ki",in(2));
out = sim("zad62.slx");
y = out.y(end);
eabs = abs(out.y - out.y(end));
absyinf = abs(out.y(end));
regtime = out.tout(max(find(eabs > 0.05*absyinf)));
kpi = regtime;