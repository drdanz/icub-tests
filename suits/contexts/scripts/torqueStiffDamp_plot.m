#define function to plot one file
function torqueStiffDamp_plot(filename, linearfact)
data = load(filename);
m=min(data(:,1));
mx=max(data(:,1));

x=m:1:mx;
y=x*(-linearfact);
plot(data(:,1), data(:,2), "ro;torque;", data(:,1), data(:,3), "go;refTrq;",x, y, "-;y=x*linearfactor;");
endfunction
