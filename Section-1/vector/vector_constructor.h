#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Vector<T>::Vector(int c, int s, T v) {
	_elem = new T[_capacity = c];
	for (_size = 0; _size < s; _size++) {
		_elem[_size] = v;
	}
}

template <typename T> void Vector<T>::copyFrom(T const* a, Rank lo, Rank hi) {
	_elem = new T[_capacity = (hi - lo) * 2];
	_size = 0;
	while (lo < hi) {
		_elem[_size++] = a[lo++];
	}
}

template <typename T> Vector<T>::Vector(T const* a, Rank n) {
	copyFrom(a, 0, n);
}

template <typename T> Vector<T>::Vector(T const*a, Rank lo, Rank hi) {
	copyFrom(a, lo, hi);
}

template <typename T> Vector<T>::Vector(Vector<T> const & v) {
	copyFrom(v._elem, 0, v._size);
}

template <typename T> Vector<T>::Vector(Vector<T> const & v, Rank lo, Rank hi) {
	copytFrom(v._elem, lo, hi);
}

