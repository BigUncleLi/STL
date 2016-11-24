#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> void Vector<T>::bubbleSort(Rank lo, Rank hi){
	while (!bubble(lo, hi--));
}

template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi) {
	bool sorted = true;
	while (++lo < hi) {
		if (_elem[lo - 1] > _elem[lo]) {
			sorted = false;
			swap(_elem[lo - 1], _elem[lo]);
		}
	}
	return sorted;
}


template <typename T> void Vector<T>::bubbleSort(){
	return bubbleSort(0, _size);
}