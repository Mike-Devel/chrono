//  Copyright 2019 Mike Dev <mike.dev@gmx.de>
//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

#include <boost/chrono/duration.hpp>
#include <boost/chrono/time_point.hpp>

#include <boost/core/lightweight_test.hpp>
#include <chrono>

int main()
{
	BOOST_TEST( std::chrono::milliseconds(10) == boost::chrono::to_std_duration(boost::chrono::milliseconds(10))  );
	BOOST_TEST( std::chrono::nanoseconds(10)  == boost::chrono::to_std_duration(boost::chrono::nanoseconds(10))   );
	BOOST_TEST( std::chrono::seconds(0)       == boost::chrono::to_std_duration(boost::chrono::seconds(0))        );

	BOOST_TEST( boost::chrono::milliseconds(10) == boost::chrono::to_boost_duration(std::chrono::milliseconds(10))  );
	BOOST_TEST( boost::chrono::nanoseconds(10)  == boost::chrono::to_boost_duration(std::chrono::nanoseconds(10))   );
	BOOST_TEST( boost::chrono::seconds(0)       == boost::chrono::to_boost_duration(std::chrono::seconds(0))        );

	using Clock_t = std::chrono::high_resolution_clock;
	using BoostTp_t = boost::chrono::time_point<Clock_t, boost::chrono::milliseconds>;
	using StdTp_t = std::chrono::time_point<Clock_t, boost::chrono::milliseconds>;

	BoostTp_t boost_tp(boost::chrono::milliseconds(100));
	StdTp_t std_tp(boost::chrono::milliseconds(100));

	BOOST_TEST(std_tp == boost::chrono::to_std_time_point(boost_tp));


	return boost::report_errors();
}