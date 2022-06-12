#ifndef __MATH_01_H__
#define __MATH_01_H__

#include "problem.h"


class Math01 :public Problem {
	int num;
public:
	Math01(std::string key, int inputNumber);
	void problemSolving(void) override;

	int getResult(void);
};
#endif

