// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// readRast
NumericVector readRast(String name, String mapset, int row, int col);
RcppExport SEXP grassRLink_readRast(SEXP nameSEXP, SEXP mapsetSEXP, SEXP rowSEXP, SEXP colSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        String name = Rcpp::as<String >(nameSEXP);
        String mapset = Rcpp::as<String >(mapsetSEXP);
        int row = Rcpp::as<int >(rowSEXP);
        int col = Rcpp::as<int >(colSEXP);
        NumericVector __result = readRast(name, mapset, row, col);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
