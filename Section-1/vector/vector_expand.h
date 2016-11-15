#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> void Vector<T>::expand() {
	// if capacity is bigger than size, there's no need to expand
	if (_capacity > _size) return;
	// capacity is equal to size, should expand
	else if (_capacity == _size) {
		T* oldElem = _elem;
		_elem = new T[_capacity <<= 1];

		for (int i = 0; i < _size; i++) {
			_elem[i] = oldElem[i];
		};
		delete [] oldElem;
	}
}