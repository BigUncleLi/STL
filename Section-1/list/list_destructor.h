#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> int List<T>::clear() {
	int oldSize = _size;

	// keep removing first node(_size will decrease in remove function)
	while (0 < _size) {
		remove(header->succ);
	}
	return oldSize;
}


template <typename T> List<T>::~List() {
	// delete nodes visiable
	clear();

	// delete header and trailer
	delete header;
	delete trailer;
}

