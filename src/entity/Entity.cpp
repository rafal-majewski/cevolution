#include "./Entity.hpp"

template <typename Position, typename Kind, typename Power>
Entity<Position, Kind, Power>::Entity(const Position position, const Kind kind, const Power power) : position(position), kind(kind), power(power) {	
};

template <typename Position, typename Kind, typename Power>
bool Entity<Position, Kind, Power>::operator==(const Entity<Position, Kind, Power> otherEntity) const {
	return position == otherEntity.position && kind == otherEntity.kind && power == otherEntity.power;
};
