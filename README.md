
<!-- README.md is generated from README.Rmd. Please edit that file -->

# edmcore

<!-- badges: start -->

[![R build
status](https://github.com/tmsalab/edmcore/workflows/R-CMD-check/badge.svg)](https://github.com/tmsalab/edmcore/actions)
[![Package-License](http://img.shields.io/badge/license-GPL%20\(%3E=2\)-brightgreen.svg?style=flat)](http://www.gnu.org/licenses/gpl-2.0.html)
[![Codecov test
coverage](https://codecov.io/gh/tmsalab/edmcore/branch/master/graph/badge.svg)](https://codecov.io/gh/tmsalab/edmcore?branch=master)
<!-- badges: end -->

The goal of `edmcore` is to house a set of functions shared by many
packages within the exploratory cognitive diagnostic modeling framework.

## Installation

You can install the released version of edmcore from
[CRAN](https://CRAN.R-project.org) with:

``` r
install.packages("edmcore")
```

And the development version from [GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("tmsalab/edmcore")
```

## Usage

To use `edmcore`, load the package using:

``` r
library("edmcore")
```

## Overview

The package contains class structure shared between different estimation
units.

In particular, we have:

  - EDM Classes
      - `new_edm_model()`, `new_edm_summary()`, and
        `new_edm_default_property_list()`.
  - Attributes
      - `attribute_classes()`, `attribute_bijection()`,
        `attribute_inv_bijection()`, `attribute_gen_bijection()`, and
        `attribute_inv_gen_bijection()`.
  - Q Matrix
      - `q_matrix()`/`as_q_matrix()`, `read_q_matrix()`,
        `is_q_matrix()`, `is_q_strict()`, and `is_q_generic()`.
  - Item Matrix
      - `item_matrix()`/`as_item_matrix()`, `read_item_matrix()`, and
        `is_item_matrix()`.
  - Metrics
      - `metric_mode()`, `metric_bias()`, `metric_frobenius_norm()`,
        `metric_element_wise()`, and `metric_matrix_wise()`.
  - Permutations
  - Link Functions
      - `link_probit()`, `link_probit_inv()`, `link_logit()`,
        `link_logit_inv()`, `theta_to_beta()`, `theta_probit_to_beta()`,
        and `theta_logit_to_beta()`.

## Authors

James Joseph Balamuta, Steven Andrew Culpepper, and Jeffrey Douglas

## Citing the `edmcore` package

To ensure future development of the package, please cite `edmcore`
package if used during the analysis or simulations. Citation information
for the package may be acquired by using in *R*:

``` r
citation("edmcore")
```

## License

GPL (\>= 2)
