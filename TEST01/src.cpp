#include "test01.h"

int change_val(int* p) {
	*p = 3;

	return 0;
}

using namespace std;
int main(void) {
	int number = 5;
	int a = 3;

	//another_a�� a �� �Ǵٸ� �̸��̴ٶ�� �����ϴ� �� & ���۷���, ������
	//�ʱ�ȭ �������� ����
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