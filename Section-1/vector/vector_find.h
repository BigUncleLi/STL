#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Rank Vector<T>::find(T const & e, Rank lo, Rank hi) {
	//assert 0 <= lo < hi <= _size
	if (0 <= lo && lo < hi && hi <= _size) {
		while ((lo < hi--) && (e != _elem[hi]));
		// if element e is exist, hi is equal to current index
		// if element e is not exist, hi is equal to (lo - 1)
		return hi;
	}
	// input params error
	else {
		cout << "find(T const & e, Rank lo, Rank hi) input params error " << endl;
	}
}