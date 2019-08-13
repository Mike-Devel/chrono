//  duration.hpp  --------------------------------------------------------------//

//  Copyright 2008 Howard Hinnant
//  Copyright 2008 Beman Dawes
//  Copyright 2009-2011 Vicente J. Botet Escriba

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

/*

This code was derived by Beman Dawes from Howard Hinnant's time2_demo prototype.
Many thanks to Howard for making his code available under the Boost license.
The original code was modified to conform to Boost conventions and to section
20.9 Time utilities [time] of the C++ committee's working paper N2798.
See http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2798.pdf.

time2_demo contained this comment:

    Much thanks to Andrei Alexandrescu,
                   Walter Brown,
                   Peter Dimov,
                   Jeff Garland,
                   Terry Golubiewski,
                   Daniel Krugler,
                   Anthony Williams.
*/


#ifndef BOOST_CHRONO_DURATION_HPP
#define BOOST_CHRONO_DURATION_HPP

#include <boost/chrono/config.hpp>

#include <chrono>
#include <boost/ratio/ratio.hpp>
#include <boost/chrono/detail/static_assert.hpp>

#ifndef BOOST_CHRONO_HEADER_ONLY
// this must occur after all of the includes and before any code appears:
#include <boost/config/abi_prefix.hpp> // must be the last #include
#endif

//----------------------------------------------------------------------------//
//                                                                            //
//                        20.9 Time utilities [time]                          //
//                                 synopsis                                   //
//                                                                            //
//----------------------------------------------------------------------------//

namespace boost {
namespace chrono {

	using std::chrono::duration;


	using std::chrono::treat_as_floating_point;
	using std::chrono::duration_values;

	using std::chrono::nanoseconds;
	using std::chrono::microseconds;
	using std::chrono::milliseconds;
	using std::chrono::seconds;
	using std::chrono::minutes;
	using std::chrono::hours;

	using std::chrono::duration_cast;

} // namespace chrono
} // namespace boost

#ifndef BOOST_CHRONO_HEADER_ONLY
// the suffix header occurs after all of our code:
#include <boost/config/abi_suffix.hpp> // pops abi_prefix.hpp pragmas
#endif

#endif // BOOST_CHRONO_DURATION_HPP
