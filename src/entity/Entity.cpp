#include "./Entity.hpp"

template <typename Position, typename Kind, typename Power>
Entity<Position, Kind, Power>::Entity(const Position position, const Kind kind, const Power power) : position(position), kind(kind), power(power) {}
