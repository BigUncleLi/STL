// vector.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "vector_implement.h"

int main(){
	Vector <int> v(3, 2, 1);
	cout << "v[1] : " << v[1] << endl;
	v.toString();
	v.insert(2, 6);
	v.toString();
    return 0;
}