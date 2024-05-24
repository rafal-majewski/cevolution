#include "./Entity.hpp"

template <typename Position, typename Kind>
Entity<Position, Kind>::Entity(const Position position, const Kind kind) : position(position), kind(kind) {
};
