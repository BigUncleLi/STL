#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> int Vector<T>::deduplicate() {
	int oldSize = _size;

	// start from second element
	Rank i = 1;

	while (i < _size) {
		// find in [0, i) ?
		(find(_elem[i], 0, i) < 0 ) ? i++ : remove(i);
	}
	return oldSize - _size;
}