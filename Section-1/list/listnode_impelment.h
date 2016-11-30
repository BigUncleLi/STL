#pragma once
#include "listnode.h"

template <typename T> ListNodePosi(T) ListNode<T>::insertAsPred(T const & e) {
	//new ListNode x. pred <- x -> this
	ListNodePosi(T) x = new ListNode(e, pred, this);
	// Notice : step2 cannot run before step1. (or it'll override pred)
	// step 1 : pred -> x
	pred->succ = x;
	// step 2 : x <- this
	pred = x;
	return x;
}