#pragma once

template <typename Coordinate>
class TwoDimensionalPoint {
public:
	const Coordinate x;
	const Coordinate y;
	TwoDimensionalPoint(const Coordinate x, const Coordinate y);
};

#include "./TwoDimensionalPoint.cpp"
