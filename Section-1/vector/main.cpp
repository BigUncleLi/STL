// vector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "vector_implement.h"

int main(){
	// test vector constructor
	Vector<int> v(3, 2, 1);

	// test vector [] operator
	cout << "v[1] : " << v[1] << endl;

	// test vector insert(r, e) | insert(e)
	v.toString();
	v.insert(2, 6);
	v.insert(2);
	v.insert(-3);
	v.toString();

	// test disordered vector find
	cout << "result of finding 1 is : " << v.find(1) << endl;
	cout << "result of finding -1 is : " << v.find(-1) << endl;

	// test disordered vector sort
	v.sort();
	cout << "result of sort is : " << endl;
	v.toString();

	// test disordered vector remove 
	v.remove(2);
	cout << "result of remove index of 2 is : " << endl;
	v.toString();

	// test disordered vector deduplicate
	v.deduplicate();
	cout << "after deduplicate : " << endl;
	v.toString();

	// test ordered vector insert(e)
	Vector<int> orderedVector(3, 3, 1);
	orderedVector.insert(2);
	orderedVector.insert(3);
	orderedVector.toString();

	// test ordered vector search
	cout << "ordered vector search 2 is : " << orderedVector.search(2) << endl;

	// test ordered vector uniquify
	orderedVector.uniquify();
	cout << "ordered vector after uniquify : "
	orderedVector.toString();

    return 0;
}