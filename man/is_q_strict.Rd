% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/q-matrix.R
\name{is_q_strict}
\alias{is_q_strict}
\title{Is the \eqn{Q} Matrix Strictly Identifiable?}
\usage{
is_q_strict(x)
}
\arguments{
\item{x}{A \code{\link[=q_matrix]{q_matrix()}} or \code{\link[base:matrix]{base::matrix()}} to test.}
}
\value{
A logical value.
}
\description{
Checks if the \eqn{Q} matrix is strictly identified.
}
\details{
If \eqn{\mathbf{Q}} is in the strictly identifiable set \eqn{\mathcal{Q}_s},
then it must satisfy the following conditions:
\itemize{
\item \strong{(S1)} The rows of \eqn{\boldsymbol{Q}} can be permuted to the form,
\eqn{\boldsymbol{Q}^\top=\left[{\boldsymbol{I_K},\boldsymbol{I_K}, (\boldsymbol{Q}^\ast)^\top}\right]^\top}
where \eqn{\boldsymbol{I_K}} is a \eqn{K}-dimensional identity matrix and
\eqn{\boldsymbol{Q}^\ast} is a \eqn{(J-2K)\times K} matrix.
\item \strong{(S2)} For any two latent classes \eqn{c} and \eqn{c'}, there exists at least one
item in \eqn{\boldsymbol{Q}^\ast}, in which
\eqn{\boldsymbol{\theta}_{jc}\neq \boldsymbol{\theta}_{jc'}}.
}

In a more practical light, this means \strong{(S1)} requires \eqn{\boldsymbol{Q}}
to include two simple structure items for each attribute and \strong{(S2)}
states there must be at least one item not specified for \strong{(S1)}
that distinguishes between all pairs of classes.
}
\examples{
## Check if Q Matrix is Strictly Identified ---
# Create a strict Q matrix
q2_strict = matrix(
  c(0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0),
  ncol = 2
)

# Check if Q matrix is strict
is_q_strict(q2_strict)

# (Extra) Check if Q matrix is generic
is_q_generic(q2_strict)

}
\seealso{
\code{\link[=is_q_generic]{is_q_generic()}}
}
\author{
James Joseph Balamuta and Steven Andrew Culpepper
}
