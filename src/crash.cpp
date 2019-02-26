#include <Rcpp.h>
using namespace Rcpp;

//' @export
// [[Rcpp::export]]
int b1(int a, int b){
  return a + b;
}