#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Rank Vector<T>::interpolationSearch(T const & e, Rank lo, Rank hi) {
	while (lo < hi) {
		int mid = lo + (hi - lo) * (e - _elem[lo]) / (_elem[hi] - _elem[lo]);

		if (e < _elem[mid]) {
			hi = mid;
		}
		else if (_elem[mid] < e) {
			lo = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}