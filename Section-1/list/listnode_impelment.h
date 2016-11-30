#pragma once
#include "stdafx.h"
#include "listnode.h"

template <typename T> ListNodePosi(T) ListNode<T>::insertAsPred(T const & e) {
	// new ListNode x. pred <- x -> this
	ListNodePosi(T) x = new ListNode(e, pred, this);
	// Notice : step2 cannot run before step1. (or it'll override pred)
	// step 1 : pred -> x
	pred->succ = x;
	// step 2 : x <- this
	pred = x;
	return x;
}

template <typename T> ListNodePosi(T) ListNode<T>::insertAsSucc(T const & e) {
	// new ListNode x. this <- x -> succ
	ListNodePosi(T) x = new ListNode(e, this, succ);
	// Notice : step2 cannot run before step1. (or it'll override succ)
	// step 1 : x <- succ
	succ->pred = x;
	// step 2 : this -> x
	succ = x;
	return x;
}