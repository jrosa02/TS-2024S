function dxdt = system41(t,x)

dxdt = [-x(1)+2*x(1)^2*x(2);...
        -x(2)];