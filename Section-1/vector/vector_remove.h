#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> int Vector<T>::remove(Rank lo, Rank hi) {
	// handle error input
	if (lo == hi) return -1;

	//move forward (hi - lo)
	while (hi < _size) _elem[lo++] = _elem[hi++];
	_size = lo;
	return hi - lo;
}

template <typename T> T Vector<T>::remove(Rank r) {
	T e = _elem[r];
	remove(r, r + 1);
	return e;
}