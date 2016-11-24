#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Rank Vector<T>::binaryImproveSearch(T const & e, Rank lo, Rank hi) {
	// search in section [lo, hi)
	while (1 < hi - lo) {
		// binary search
		int mid = (lo + hi) >> 1;

		// delete one judgment [if < elif < else -->> (xx)? a : b;]
		// if e < _elem[mid] -> search in [lo, mid)
		// if _elem[mid] <= e -> search in [mid, hi). There is one situation - equal, so lo = mid but not mid + 1.
		(e < _elem[mid]) ? hi = mid : lo = mid;
	}

	// if e is exsit in the vector, section'll be [lo, lo + 1) at last
	// if _elem[lo] is equal to e, return lo
	return (e == _elem[lo]) ? lo : -1;
}