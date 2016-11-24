#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> Rank Vector<T>::search(T const & e, Rank lo, Rank hi) {
	//return (rand()% 2) ? binarySearch(e, lo, hi) : fibonacciSearch(e, lo, hi);
	//return binarySearch(e, lo, hi);
	return fibonacciSearch(e, lo, hi);
}

template <typename T> Rank Vector<T>::search(T const & e) {
	return search(e, 0, _size);
}
