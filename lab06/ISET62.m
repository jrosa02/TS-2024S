function[kpi] = ISET62(in)

assignin("base","Kp",in(1));
assignin("base","Ki",in(2));
out = sim("zad62.slx");
ISET = out.ISET(end);

kpi = ISET;