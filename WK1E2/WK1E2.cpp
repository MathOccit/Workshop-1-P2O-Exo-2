#include "WK1E2.h"

CLcalcul::CLcalcul(void)
{
	this->ini(0);
}
CLcalcul::CLcalcul(int n)
{
	this->ini(n);
}
void CLcalcul::ini(int n)
{
	this->setN(n);
}
void CLcalcul::carre()
{
	n=pow(n, 2);
}
void CLcalcul::setN(int n)
{
	if (n > 0)
	{
		this->n = n;
	}
	else
	{
		this->n = 0;
	}
}
int CLcalcul::getN(void)
{
	return this->n;
}