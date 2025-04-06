/**
* @license Apache-2.0
*
* Copyright (c) 2025 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/stats/base/dists/uniform/cdf.h"
#include "stdlib/math/base/assert/is_nan.h"

/**
* Evaluates the cumulative distribution function (CDF) for a uniform distribution with minimum support `a` and maximum support `b` at a value `x`.
*
* @param x   input value
* @param a   minimum support
* @param b   maximum support
* @return    evaluated CDF
*
* @example
* double y = stdlib_base_dists_uniform_cdf( 9.0, 0.0, 10.0 );
* // returns 0.9
*/
double stdlib_base_dists_uniform_cdf( const double x, const double a, const double b ) {
	if (
		stdlib_base_is_nan( x ) ||
		stdlib_base_is_nan( a ) ||
		stdlib_base_is_nan( b ) ||
		a >= b
	) {
		return 0.0/0.0; // NaN
	}
	if ( x < a ) {
		return 0.0;
	}
	if ( x >= b ) {
		return 1.0;
	}
	return ( x - a ) / ( b - a );
}
