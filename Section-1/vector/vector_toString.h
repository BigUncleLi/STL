#pragma once
#include "stdafx.h"
#include "vector.h"

template <typename T> void Vector<T>::toString() {
	cout << "Size is : " << _size << endl;
	cout << "Elements is : [";
	for (int i = 0; i < _size; i++) {
		cout << _elem[i];
		if (i != (_size - 1)) cout << ",";
	}
	cout << "]" << endl;
}