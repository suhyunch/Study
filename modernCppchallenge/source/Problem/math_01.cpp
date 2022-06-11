#include <iostream>
#include "math_01.h"

Math01::Math01(int inputNumber) {
	num = inputNumber;
}

int Math01::problemSolving(void) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	return sum;
}
