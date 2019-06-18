/**
 * @file test_state.cpp
 * @author Maximilien Naveau (maximilien.naveau@gmail.com)
 * @license License BSD-2-Clause
 * @copyright Copyright (c) 2019, New York University, Max Planck Gesellshaft and LAAS.
 * @date 2019-06-18
 */


#include <boost/test/unit_test.hpp>
#include "crocoddyl/core/states/state-euclidean.hpp"

BOOST_AUTO_TEST_SUITE ( BOOST_TEST_MODULE )

BOOST_AUTO_TEST_CASE(test_boost_check)
{
 BOOST_CHECK( 0 == 0);
 BOOST_CHECK( 0 != 1);
}

BOOST_AUTO_TEST_SUITE_END()
