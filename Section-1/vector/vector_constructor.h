#pragma once
template <typename T> Vector::Vector(int c, int s, T v) {
	_elem = new T[c];
	s = 0;
	for (_size = 0; _size < s; _size++) {
		_elem[size] = v;
	}
}

template <typename T> Vector::Vector(T * const a, ) {}