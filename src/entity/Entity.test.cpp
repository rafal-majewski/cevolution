#include <gtest/gtest.h>
#include "./Entity.hpp"

TEST(Entity, ConstructorWorks) {
	const Entity<int, char, char> entity(1, 'a', 1);
};
