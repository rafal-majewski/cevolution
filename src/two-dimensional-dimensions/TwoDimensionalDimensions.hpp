#pragma once

template <typename Dimension>
class TwoDimensionalDimensions {
public:
	const Dimension width;
	const Dimension height;
	TwoDimensionalDimensions(const Dimension width, const Dimension height);
};

#include "./TwoDimensionalDimensions.cpp"
