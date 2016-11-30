#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> T& List<T>::operator[] (Rank r) const {
	ListNodePosi(T) p = first();
	while (r--) {
		p = p->succ;
	}
	return p->data;
}