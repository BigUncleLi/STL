#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> T& Vector<T>::operator[] (Rank r) const{
	if (0 <= r && r < _size) {
		return _elem[r];
	}
	else {
		cout << "error input r : " << r << " is not legal." << endl;
	}
}