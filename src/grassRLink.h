// [[file:~/Documents/Projects/grassRLink/grassRLink.org::*grassRLink.h][grassRLink\.h:1]]
#ifndef _grassRLink_grassRLink_H
#define _grassRLink_grassRLink_H

#include <Rcpp.h>

#include <stdio.h>
#include <stdlib.h>

#include <grass/gis.h>
#include <grass/raster.h>
#include <grass/glocale.h>

/*
 * note : RcppExport is an alias to `extern "C"` defined by Rcpp.
 *
 * It gives C calling convention to the rcpp_hello_world function so that 
 * it can be called from .Call in R. Otherwise, the C++ compiler mangles the 
 * name of the function and .Call can't find it.
 *
 * It is only useful to use RcppExport when the function is intended to be called
 * by .Call. See the thread http://thread.gmane.org/gmane.comp.lang.r.rcpp/649/focus=672
 * on Rcpp-devel for a misuse of RcppExport
 */

using namespace Rcpp;

RcppExport NumericVector readRast(String name, String mapset, int row, int col) ;
#endif
// grassRLink\.h:1 ends here
