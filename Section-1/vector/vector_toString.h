#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> void Vector<T>::toString() {
	cout << "Vector : [";
	for (int i = 0; i < _size; i++) {
		cout << _elem[i];
		if (i != (_size - 1)) cout << ",";
	}
	cout << "]" << " | ";

	cout << "size is : " << _size << endl;
}