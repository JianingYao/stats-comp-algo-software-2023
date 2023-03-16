#include <Rcpp.h>
using Rcpp::NumericVector;

// [[Rcpp::export]]
NumericVector axpy_c(double a, NumericVector& x, NumericVector& y) {
  if (x.size() != y.size()) {
    if (x.size() < y.size()) {
      Rcpp::warning("length of x is smaller than length of y. Only first %d elements of y are meaningful.\n", x.size());
    } else {
      Rcpp::stop("Incompatible vector lengths.");
    }
  }
  int n = x.size();
  for (int i = 0; i < n; ++i) {
    y[i] += a * x[i];
  }
  return y;
}