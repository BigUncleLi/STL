#pragma once

#include "stdafx.h"
#include "list_impelment.h"

template <typename T> class List {
private:
	// _size : the size of list
	// header : the head of list , position is -1
	// trailer : the trailer of list , position is n .(normal scope is [0, n-1])
	int _size, ListNodePosi(T) header, ListNodePosi(T) trailer;

protected:
	void init();
	int clear();
	void copyNode(ListNodePosi(T), int);
	void merge(ListNodePosi(T)&, int, List<T>&, ListNodePosi(T), int);
	void mergeSort(ListNodePosi(T)&, int);
	void selectionSort(ListNodePosi(T), int);
	void insertionSort(ListNodePosi(T), int);

public:
	// constructor
	List() { init(); }
	List(List<T> const & L);
	List(List<T> const & L, Rank r, int n);
	List(ListNodePosi(T) p, int n);
	
	~List();

	// READ-ONLY
	int size() const { return _size; }
	bool empty() const { return _size == 0; }
	T& operator[] (Rank r) const;
	ListNodePosi(T) first() const { return header->succ; }
	ListNodePosi(T) last() const { return trailer->pred; }
	bool valid(ListNodePosi(T) p) { return p && (trailer != p) && (header != p); }
	int disordered() const;

	ListNodePosi(T) find(T const & e, int n, ListNodePosi(T) p) const;
	ListNodePosi(T) find(T const & e) const { return find(e, _size, trailer); }

	ListNodePosi(T) search(T const & e, int n, ListNodePosi(T) p) const;
	ListNodePosi(T) search(T const & e) const { return search(e, _size, trailer); }

	ListNodePosi(T) selectMax(ListNodePosi(T) p, int n);
	ListNodePosi(T) selectMax() { return selectMax(header, _size); }

	// WRITE-ONLY
	ListNodePosi(T) insertAsFirst(T const & e);
	ListNodePosi(T) insertAsLast(T const & e);
	ListNodePosi(T) insertA(ListNodePosi(T) p, T const & e);
	ListNodePosi(T) insertB(ListNodePosi(T) p, T const & e);
	T remove(ListNodePosi(T) p);

	void merge(List<T> & L) { merge(first(), _size, L, L.first(), L._size); }
	void sort(ListNodePosi(T) p, int n);
	void sort() { sort(first(), _size); }

	int deduplicate();
	int uniquify();

	void reverse();

	// traverse
	void traverse(void (*)(T&));
	template <typename VST>
	void traverse(VST&);
};