#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> ListNodePosi(T) List<T>::find(T const & e, int n, ListNodePosi(T) p) const {
	while (n--) {
		//p = p->pred;
		//if (p->data == e) {
		//	return p;
		//}
		if (e == (p = p->pred)->data) return p;
	}
	return null;
}