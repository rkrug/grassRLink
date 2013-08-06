// [[file:~/Documents/Projects/grassRLink/grassRLink.org::*grassRLink.cpp][grassRLink\.cpp:1]]
#include "grassRLink.h"

using namespace Rcpp;

// [[Rcpp::export]]
NumericVector readRast(String name, String mapset, int row, int col) {
  int map_fd;			/* file descriptor */
  RASTER_MAP_TYPE data_type;	/* type of the map (CELL/DCELL/...) */
  void *rowbuffer;                 /* input buffer */
  int nrows, ncols;             /* number of rows and columns of raster*/
  int nrow, ncol;               /* row and column iterators*/

  /* initialize GIS environment */
  /* reads grass env, stores program name to G_program_name() */
  G_gisinit("directReadFromR");  

  /* Rast_open_old - returns file destriptor (>0) */
  // map_fd = Rast_open_old(name, mapset);
  map_fd = Rast_open_old("test1", "test2");
 
  /* determine the map type (CELL/FCELL/DCELL) */
  // data_type = Rast_map_type(name, mapset);
  data_type = Rast_map_type("test1", "test2");

  /* Allocate input buffer */
  rowbuffer = Rast_allocate_buf(data_type);

  /* Allocate output buffer, use input map data_type */
  nrows = Rast_window_rows();
  ncols = Rast_window_cols();

  /* for each row */
  for (row = 0; row < nrows; row++) {
    /* read input map */
    Rast_get_row(map_fd, rowbuffer, row, data_type);

    /* process the data */
    for (col = 0; col < ncols; col++) {
      /* use different function for each data type */
      switch (data_type) {
      case CELL_TYPE:
	break;
      case FCELL_TYPE:
	break;
      case DCELL_TYPE:
	break;
      }
    }
  }
}

/*** R
     # x <- 1:5
     # f(x)
     # x[1]
*/
// grassRLink\.cpp:1 ends here
