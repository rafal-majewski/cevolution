#include <gtest/gtest.h>
#include "./Simulation.hpp"
#include "../entity/Entity.hpp"
#include <vector>

TEST(Simulation, ConstructorWorksForNoEntities) {
	const std::vector<Entity<char, char, char>> entities = {};
	const Simulation<char, char, char> simulation(entities);
};

TEST(Simulation, ConstructorWorksForOneEntity) {
	const Entity<char, char, char> entity(1, 'a', 1);

	const std::vector<Entity<char, char, char>> entities = {
		entity
	};

	const Simulation<char, char, char> simulation(entities);
};

TEST(Simulation, StoresEntityVectorCorrectly) {
	const Entity<char, char, char> entity(1, 'a', 1);

	const std::vector<Entity<char, char, char>> entities = {
		entity
	};

	const Simulation<char, char, char> simulation(entities);
	ASSERT_EQ(simulation.entities, entities);
};
