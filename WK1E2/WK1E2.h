#pragma once
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

class CLcalcul
{
private:

	int n;

	void ini(int);

	static int cpteObj;

public:

	CLcalcul(void);

	CLcalcul(int);

	void carre();

	void setN(int);

	int getN(void);
};

