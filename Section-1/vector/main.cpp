// vector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "vector_implement.h"

int main(){
	Vector <int> v(3, 2, 1);
	cout << "v[1] : " << v[1] << endl;
	v.toString();
	v.insert(2, 6);
	v.toString();
	cout << "result of finding 1 is : " << v.find(1) << endl;
	cout << "result of finding -1 is : " << v.find(-1) << endl;
    return 0;
}