#include "./UpdateEntityResolverAction.hpp"
#include "../entity/Entity.hpp"

template <typename EntityPosition, typename EntityKind, typename EntityPower>
UpdateEntityResolverAction<EntityPosition, EntityKind, EntityPower>::UpdateEntityResolverAction(const Entity<EntityPosition, EntityKind, EntityPower> newEntity) : newEntity(newEntity) {
};
