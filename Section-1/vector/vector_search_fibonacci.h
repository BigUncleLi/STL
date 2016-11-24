#pragma once
#include "stdafx.h"
#include "vector.h"
#include "Fib.h"

template <typename T> Rank Vector<T>::fibonacciSearch(T const & e, Rank lo, Rank hi) {
	// calculate fibnacci number
	Fib fib(hi - lo);

	while (lo < hi) {
		// make ture fib.get() is in position of [lo, hi)
		while ((hi - lo) < fib.get()) {
			// if fib.get() is not in the section, find prev fib number
			fib.prev();
		}

		// assginin mid
		// [ fib(n - 1)| mid | fib(n - 2)] the length is fib(n) - 1
		Rank mid = lo + fib.get() - 1;

		// the same as binary search
		if (e < _elem[mid]) {
			hi = mid;
		} else if (_elem[mid] < e) {
			lo = mid + 1;
		} else {
			return mid;
		}
	}
	// search fail, return -1
	return -1;
}