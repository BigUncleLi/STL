#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> T List<T>::remove(ListNodePosi(T) p) {
	// save data
	T e = p->data;

	// pred -> succ && pred <- succ
	p->pred->succ = p->succ;
	p->succ->pred = p->pred;
	
	// delete p && _size --
	delete p;
	_size--;

	return e;
}