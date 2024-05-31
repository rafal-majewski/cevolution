#pragma once

class EntityAction {
};

class DropEntityAction : public EntityAction {
};

class UpdateEntityAction : public EntityAction {
};

template <typename EntityPosition, typename EntityKind, typename EntityPower>
class EntityResolver {
public:
	const EntityAction* const resolve(const Entity<EntityPosition, EntityKind, EntityPower> entity) const;
	EntityResolver();
};

#include "./EntityResolver.cpp"
