// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ecdmcore.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// attribute_bijection
arma::vec attribute_bijection(unsigned int K);
RcppExport SEXP _ecdmcore_attribute_bijection(SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(attribute_bijection(K));
    return rcpp_result_gen;
END_RCPP
}
// attribute_inv_bijection
arma::vec attribute_inv_bijection(unsigned int K, double CL);
RcppExport SEXP _ecdmcore_attribute_inv_bijection(SEXP KSEXP, SEXP CLSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type CL(CLSEXP);
    rcpp_result_gen = Rcpp::wrap(attribute_inv_bijection(K, CL));
    return rcpp_result_gen;
END_RCPP
}
// attribute_classes
arma::mat attribute_classes(int K);
RcppExport SEXP _ecdmcore_attribute_classes(SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(attribute_classes(K));
    return rcpp_result_gen;
END_RCPP
}
// check_identifiability
bool check_identifiability(const arma::mat Q);
RcppExport SEXP _ecdmcore_check_identifiability(SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(check_identifiability(Q));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ecdmcore_attribute_bijection", (DL_FUNC) &_ecdmcore_attribute_bijection, 1},
    {"_ecdmcore_attribute_inv_bijection", (DL_FUNC) &_ecdmcore_attribute_inv_bijection, 2},
    {"_ecdmcore_attribute_classes", (DL_FUNC) &_ecdmcore_attribute_classes, 1},
    {"_ecdmcore_check_identifiability", (DL_FUNC) &_ecdmcore_check_identifiability, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ecdmcore(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
