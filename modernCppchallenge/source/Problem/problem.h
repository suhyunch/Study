#ifndef __PROBLEM_H__
#define __PROBLEM_H__
#include <string>

class Problem {
public:
	virtual void problemSolving() = 0;
	std::string getProblemKey(void) { return key; }
	int result;
private:
	std::string key;
};

#endif

