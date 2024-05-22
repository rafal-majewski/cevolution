#include <gtest/gtest.h>
#include "./TwoDimensionalPoint.hpp"

TEST(TwoDimensionalPoint, ConstructorWorks) {
	const TwoDimensionalPoint<char> point(4, 5);
};

TEST(TwoDimensionalPoint, XPropertyWorks) {
	const TwoDimensionalPoint<char> point(4, 5);
	ASSERT_EQ(4, point.x);
};

TEST(TwoDimensionalPoint, YPropertyWorks) {
	const TwoDimensionalPoint<char> point(4, 5);
	ASSERT_EQ(5, point.y);
};
