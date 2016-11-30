#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> int List<T>::deduplicate() {
	if (_size < 2) return 0;
	int oldSize = _size;

	// from header && rank = 0
	ListNodePosi(T) p = header;
	Rank r = 0;

	// when cursor is not equal to trailer
	while (trailer != (p = p->succ)) {
		// find p->data before p for r distance;
		ListNodePosi(T) q = find(p->data, r, p);
		q ? remove(q) : r++;
	}

	return oldSize - newSize;
}
