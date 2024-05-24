#include <gtest/gtest.h>
#include "../src/two-dimensional-point/TwoDimensionalPoint.test.cpp"
#include "../src/two-dimensional-dimensions/TwoDimensionalDimensions.test.cpp"
#include "../src/entity/Entity.test.cpp"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
};
