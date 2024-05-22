#include <gtest/gtest.h>
#include "./TwoDimensionalDimensions.hpp"

TEST(TwoDimensionalDimensions, ConstructorWorks) {
	const TwoDimensionalDimensions<char> dimensions(4, 5);
};

TEST(TwoDimensionalDimensions, WidthPropertyWorks) {
	const TwoDimensionalDimensions<char> dimensions(4, 5);
	ASSERT_EQ(4, dimensions.width);
};

TEST(TwoDimensionalDimensions, HeightPropertyWorks) {
	const TwoDimensionalDimensions<char> dimensions(4, 5);
	ASSERT_EQ(5, dimensions.height);
};
