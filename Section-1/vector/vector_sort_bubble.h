#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> void Vector<T>::bubbleSort(Rank lo, Rank hi){
	// the result of bubble function is sorted
	// if vector is not sorted, try bubble again.
	// scale'll decrease by hi every time ( <-- )
	while (!bubble(lo, hi--));
}

template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi) {
	bool sorted = true;
	// scale'll decrease by lo every time ( --> )
	while (++lo < hi) {
		if (_elem[lo - 1] > _elem[lo]) {
			// if reversed pair is existing, take tag to false
			sorted = false;
			swap(_elem[lo - 1], _elem[lo]);
		}
	}
	return sorted;
}


template <typename T> void Vector<T>::bubbleSort(){
	return bubbleSort(0, _size);
}