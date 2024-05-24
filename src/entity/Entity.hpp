#pragma once

template <typename Position, typename Kind>
class Entity {
public:
	const Position position;
	const Kind kind;
	Entity(const Position position, const Kind kind);
};

#include "./Entity.cpp"
