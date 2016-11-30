#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> void List<T>::copyNodes(ListNodePosi(T) p, int n) {
	// init header and trailer
	init();

	// insert every node, and trailer n distance
	while (n--) {
		insertAsLast(p);
		p = p->succ;
	}
}