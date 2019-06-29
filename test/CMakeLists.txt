# Copyright 2019 Mike Dev
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at https://www.boost.org/LICENSE_1_0.txt
#
# NOTE: CMake support for Boost.chrono is currently experimental at best
#       and this file runs only a subset of the unit tests
#       (in particular none of the fail tests)


## unit tests

set( test_files
#	run_timer_test
	test_10631
#	test_10778
	test_11006
	test_11012
	test_12176
	test_7868
)

foreach( core_name IN LISTS test_files )

    set( test_name test_boost_chrono_${core_name} )

    add_executable( ${test_name} ${core_name}.cpp )
    add_test( NAME ${test_name} COMMAND ${test_name} )

    target_link_libraries( ${test_name} PUBLIC
        Boost::chrono
    )

endforeach()
