#include <gtest/gtest.h>
#include "./EntityResolver.hpp"

TEST(EntityResolver, KeepsTheEntity) {
	const Entity<char, char, char> entity(0, 'e', 0);
	const EntityResolver<char, char, char> entityResolver();
	const EntityAction* const entityAction = entityResolver.resolve(entity);
	const UpdateEntityAction expectedUpdateEntityAction;