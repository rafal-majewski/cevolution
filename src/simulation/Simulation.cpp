#include "./Simulation.hpp"
#include "../entity/Entity.hpp"
#include <vector>

template <typename EntityPosition, typename EntityKind, typename EntityPower>
Simulation<EntityPosition, EntityKind, EntityPower>::Simulation(const std::vector<Entity<EntityPosition, EntityKind, EntityPower>> entities) : entities(entities) {}