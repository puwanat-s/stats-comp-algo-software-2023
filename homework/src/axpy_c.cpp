#include <Rcpp.h>
using Rcpp::NumericVector;
using Rcpp::stop;

// [[Rcpp::export]]
NumericVector axpy_c(double a, NumericVector& x, NumericVector& y) {
  int n = x.size();
  int m = y.size();
  
  if (n != m) {
    stop("Error: x and y must be of the same length");
  }
  
  NumericVector result(n);
  
  for (int i = 0; i < n; ++i) {
    result[i] = y[i] + a * x[i];
  }
  
  return result;
}
