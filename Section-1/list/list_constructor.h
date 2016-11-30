#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> void List<T>::init() {
	// new header & trailer. They are both exsited node.
	header = new ListNode();
	trailer = new ListNode();

	// init header position : null <- header -> trailer
	header->pred = null;
	header->succ = trailer;

	// init trailer position : header <- trailer -> null
	trailer->pred = header;
	trailer->succ = null;

	// init list size
	_size = 0;
}

// copy L[r] and n distance
template <typename T> List<T>::List(List<T> & L, Rank r, int n) {
	copyNodes(L[r], n);
}

// L.first and _size distance
template <typename T> List<T>::List(List<T> & L) {
	copyNodes(L.first(), L._size);
}

// p and n distance
template <typename T> List<T>::List(ListNodePosi(T) p, int n) {
	copyNodes(p, n);
}
