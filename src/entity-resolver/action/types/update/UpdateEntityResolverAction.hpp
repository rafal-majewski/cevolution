#pragma once
#include "../../EntityResolverAction.hpp"

template <typename EntityPosition, typename EntityKind, typename EntityPower>
class UpdateEntityResolverAction : public EntityResolverAction {
public:
	const Entity<EntityPosition, EntityKind, EntityPower> newEntity;
	UpdateEntityResolverAction(const Entity<EntityPosition, EntityKind, EntityPower> newEntity);
};

#include "./UpdateEntityResolverAction.cpp"
