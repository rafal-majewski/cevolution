#pragma once
#include <vector>

template <typename EntityPosition, typename EntityKind, typename EntityPower>
class Simulation {
public:
	const std::vector<Entity<EntityPosition, EntityKind, EntityPower>> entities;
	Simulation(const std::vector<Entity<EntityPosition, EntityKind, EntityPower>> entities);
};

#include "./Simulation.cpp"
