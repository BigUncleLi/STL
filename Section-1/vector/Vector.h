#pragma once
#include "stdafx.h"

// Rank is the same as int
typedef int Rank;
// default capacity is 3
#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
private:
	// not for client
	Rank _size; // real size
	int _capacity; // total capacity
	T* _elem; // pointer of element

	void copyFrom(T const * a, Rank lo, Rank hi);
	void expand();// expand capacity
	bool isSorted();
	Rank max(Rank r1, Rank r2);

	// search
	Rank binarySearch(T const & e, Rank lo, Rank hi);
	Rank fibonacciSearch(T const & e, Rank lo, Rank hi);

	// sort
	void bubbleSort(Rank lo, Rank hi);
	void mergeSort(Rank lo, Rank hi);
	void selectionSort(Rank lo, Rank hi);
	void quickSort(Rank lo, Rank hi);
	void heapSort(Rank lo, Rank hi);
public:
	// constructor
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T t = 0); // capacity = default_capacity, size = 0, t = 0
	Vector(T const* a, Rank n);
	Vector(T const* a, Rank lo, Rank hi);
	Vector(Vector<T> const & v);
	Vector(Vector<T> const & v, Rank lo, Rank hi);

	// destructor
	~Vector() { delete[] _elem; }

	// Read-only
	Rank size() const { return _size; }
	bool empty() const { return !_size; }

	T get(Rank r) const { return _elem[r]; }
	T& operator[] (Rank r) const;

	Rank find(T const & e, Rank lo, Rank hi); // find the element e between lo and hi [disordered]
	Rank find(T const & e) { return find(e, 0, _size); } // find the element in total vector [disordered]
	Rank search(T const & e, Rank lo, Rank hi); // find the element e between lo and hi [ordered]
	Rank search(T const & e); // find the element in total vector [ordered]

	// write-only
	void put(Rank r, T const & e) { _elem[r] = e; }

	Rank insert(Rank r, T const & e); // insert e into r rank place
	Rank insert(T const & e) { return insert(_size, e); } // insert at the end of vector
	
	int remove(Rank lo, Rank hi); // remove all element between lo and hi
	T remove(Rank r); // remove the element t
	
	int deduplicate(); // remove duplicated element into disordered vector
	int uniquify(); // remove duplicated element into ordered vector

	// traverse

	// other
	void toString();
};
