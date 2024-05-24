#pragma once

template <typename Position, typename Kind, typename Power>
class Entity {
public:
	const Position position;
	const Kind kind;
	const Power power;
	Entity(const Position position, const Kind kind, const Power power);
	bool operator==(const Entity<Position, Kind, Power> otherEntity) const;
};

#include "./Entity.cpp"
