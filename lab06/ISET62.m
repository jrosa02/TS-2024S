function[kpi] = ISET62(in)

assignin("base","Kp",in(1));
assignin("base","Ki",in(2));
out = sim("zad62_22a.slx");
ISET = out.ISET(end);

kpi = ISET;