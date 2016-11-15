#pragma once
#include "stdafx.h"

// Rank is the same as int
typedef int Rank;
// default capacity is 3
#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
protected:
	// not for client
	Rank _size; // real size
	int _capacity; // total capacity
	T* _elem; // pointer of element

	void copyFrom(T const * a, Rank lo, Rank hi);
	void expand();// expand capacity
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

	Rank find(T const & e, Rank lo, Rank hi); // find the element e between lo and hi
	Rank find(T const & e) { return find(e, 0, _size); } // find the element in total vector

	// write-only
	Rank insert(Rank r, T const & e); // insert e into r place
	Rank insert(T const & e) { return insert(_size, e); } // insert at the end of vector
	
	int remove(Rank lo, Rank hi); // remove all element between lo and hi
	T remove(Rank r); // remove the element t
	
	int deduplicate(); // remove duplicated element into disorder vector

	// traverse

	// other
	void toString();
};
