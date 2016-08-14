#include "ncephes/cprob.h"

double ncephes_bdtrc(int k, int n, double p) { return bdtrc(k, n, p); }
double ncephes_bdtr(int k, int n, double p) { return bdtr(k, n, p); }
double ncephes_bdtri(int k, int n, double y) { return bdtri(k, n, y); }
double ncephes_btdtr(double a, double b, double x) { return btdtr(a, b, x); }
double ncephes_chdtrc(double df, double x) { return chdtrc(df, x); }
double ncephes_chdtr(double df, double x) { return chdtr(df, x); }
double ncephes_chdtri(double df, double y) { return chdtri(df, y); }
double ncephes_expx2(double x, int sign) { return expx2(x, sign); }
double ncephes_fdtrc(int ia, int ib, double x) { return fdtrc(ia, ib, x); }
double ncephes_fdtr(int ia, int ib, double x) { return fdtr(ia, ib, x); }
double ncephes_fdtri(int ia, int ib, double y) { return fdtri(ia, ib, y); }
double ncephes_gamma(double x) { return cephes_gamma(x); }
double ncephes_lgam(double x) { return lgam(x); }
double ncephes_gdtr(double a, double b, double x) { return gdtr(a, b, x); }
double ncephes_gdtrc(double a, double b, double x) { return gdtrc(a, b, x); }
double ncephes_igamc(double a, double x) { return igamc(a, x); }
double ncephes_igam(double a, double x) { return igam(a, x); }
double ncephes_igami(double a, double y0) { return igami(a, y0); }
double ncephes_incbet(double aa, double bb, double xx) { return incbet(aa, bb, xx); }
double ncephes_incbi(double aa, double bb, double yy0) { return incbi(aa, bb, yy0); }
double ncephes_smirnov(int n, double e) { return smirnov(n, e); }
double ncephes_kolmogorov(double y) { return kolmogorov(y); }
double ncephes_smirnovi(int n, double p) { return smirnovi(n, p); }
double ncephes_kolmogi(double p) { return kolmogi(p); }
double ncephes_nbdtrc(int k, int n, double p) { return nbdtrc(k, n, p); }
double ncephes_nbdtr(int k, int n, double p) { return nbdtr(k, n, p); }
double ncephes_nbdtri(int k, int n, double p) { return nbdtri(k, n, p); }
double ncephes_ndtr(double a) { return ndtr(a); }
double ncephes_erfc(double a) { return erfc(a); }
double ncephes_erf(double x) { return erf(x); }
double ncephes_ndtri(double y0) { return ndtri(y0); }
double ncephes_pdtrc(int k, double m) { return pdtrc(k, m); }
double ncephes_pdtr(int k, double m) { return pdtr(k, m); }
double ncephes_pdtri(int k, double y) { return pdtri(k, y); }
double ncephes_stdtr(int k, double t) { return stdtr(k, t); }
double ncephes_stdtri(int k, double p) { return stdtri(k, p); }
double ncephes_log1p(double x) { return log1p(x); }
double ncephes_expm1(double x) { return expm1(x); }
double ncephes_cosm1(double x) { return cosm1(x); }
