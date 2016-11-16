#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Rank Vector<T>::binarySearch(T const & e, Rank lo, Rank hi) {
	while (lo < hi) {
		Rank mid = (lo + hi) >> 1;
		// if e < _elem[mid] -> find in [lo, mid)
		if (e < _elem[mid]) {
			hi = mid;
		}
		// if _elem[mid] < e -> find in [mid + 1, hi)
		else if (_elem[mid] < e) {
			lo = mid + 1;
		}
		// if _elem[mid] == e -> return mid
		else {
			return mid;
		}
	}

	return -1;
}

template <typename T> Rank Vector<T>::max(Rank r1, Rank r2) {
	return (r1 > r2) ? r1 : r2;
}

