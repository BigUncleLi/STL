#pragma once

typedef int Rank;
#define ListNodePosi(T) ListNode<T>*

template <typename T> struct ListNode {
	// data : the data in node
	// pred : ListNode<T>* predecessor node
	// succ : ListNode<T>* successor node
	T data, ListNodePosi(T) pred, ListNodePosi(T) succ;

	// constructor
	ListNode() {}
	ListNode(T d, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL) 
		: data(d), pred(p), succ(s) {}

	// insert operator
	ListNodePosi(T) insertAsPred(T const & e);
	ListNodePosi(T) insertAsSucc(T const & e);
};