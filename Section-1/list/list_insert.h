#pragma once
#include "stdafx.h"
#include "list_impelment.h"

template <typename T> ListNodePosi(T) List<T>::insertAsFirst(T const & e) {
	_size++;
	return header->insertAsSucc(e);
}

template <typename T> ListNodePosi(T) List<T>::insertAsLast(T const & e) {
	_size++;
	return trailer->insertAsPred(e);
}

template <typename T> ListNodePosi(T) List<T>::insertA(ListNodePosi(T) p, T const & e) {
	_size++;
	return p->insertAsSucc(e);
}

template <typename T> ListNodePosi(T) List<T>::insertB(ListNodePosi(T) p, T const & e) {
	_size++;
	return p->insertAsPred(e);
}