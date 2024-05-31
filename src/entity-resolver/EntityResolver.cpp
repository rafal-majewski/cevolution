#include "./EntityResolver.hpp"
#include "../entity/Entity.hpp"

template <typename EntityPosition, typename EntityKind, typename EntityPower>
const EntityAction* const EntityResolver<EntityPosition, EntityKind, EntityPower>::resolve(const Entity<EntityPosition, EntityKind, EntityPower> entity) const {
	return new DropEntityAction();
}

template <typename EntityPosition, typename EntityKind, typename EntityPower>
EntityResolver<EntityPosition, EntityKind, EntityPower>::EntityResolver() {
}