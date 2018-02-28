#define BOOST_TEST_MODULE test_version

#include <boost/test/unit_test.hpp>

#include "lib.h"

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_version_valid)
{
	BOOST_CHECK(otus::version::major() >= 0);
	BOOST_CHECK(otus::version::minor() >= 0);
	BOOST_CHECK(otus::version::patch() > 0);
}

BOOST_AUTO_TEST_SUITE_END()


