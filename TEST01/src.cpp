#include "test01.h"

int change_val(int* p) {
	*p = 3;

	return 0;
}

using namespace std;
int main(void) {
	int number = 5;
	int a = 3;

	//another_a는 a 의 또다른 이름이다라고 선언하는 것 & 레퍼런스, 참조자
	//초기화 과정에서 지정
	int& another_a = a;


	/*
	cout << number << endl;

	//using ptr, @C
	change_val(&number);
	cout << number << endl;
	*/
	another_a = 5;
	cout << a << endl;
	cout << another_a << endl;
	
		
	return 0;
}