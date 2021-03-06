% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utilities.R
\name{listmatrix_to_array}
\alias{listmatrix_to_array}
\title{Extract and Format List to 4D Array}
\usage{
listmatrix_to_array(x)
}
\arguments{
\item{x}{An \code{list} object with each element an \code{array}}
}
\value{
An \code{array} with dimensions \eqn{J x K x S x R}.
}
\description{
Converts from the \code{list} with length of \eqn{R} and entry dimensions
\eqn{J x K x S} to an \code{array} with dimensions \eqn{J x K x S x R}.
}
\examples{
# Create a matrix
x = matrix(1:6, nrow = 2)

# Add matrices to a list
x_list = list(x, x + 1)

# Convert to array
x_array = listmatrix_to_array(x_list)
}
