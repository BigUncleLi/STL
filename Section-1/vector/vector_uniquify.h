#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> bool Vector<T>::isSorted() {
	bool isSorted = true;
	for (int i = 0; i < (_size - 1); i++) {
		if (_elem[i] > _elem[i + 1]) {
			isSorted = false;
		}
	}
	return isSorted;
}

template <typename T> int Vector<T>::uniquify() {
	// check
	if (!isSorted()) {
		cout << "vector is disordered, can't invoke uniquify function !" << endl;
		return 0;
	}
	
	int i = 0, j = 0;
	while (++j < _size) {
		// skip the equal situation, only copy different element
		if (_elem[i] != _elem[j]) {
			_elem[++i] = _elem[j];
		}
	}
	// i is the last index of _elem, so size is equal to ++i
	_size = ++i;

	// j is equal to old size, i is equal to new size
	return j - i;
}