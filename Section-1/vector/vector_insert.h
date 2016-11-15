#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Rank Vector<T>::insert(Rank r, T const & e) {
	// if r > _size, cannot insert
	if (r > _size) {
		cout << "error r input : " << r << "is bigger than size " << _size << endl;
		return r;
	}

	// if need , expand
	expand();
	for (int i = _size; i > r; i--) {
		_elem[i] = _elem[i - 1];
	}
	_elem[r] = e;
	_size++;
	return r;
}