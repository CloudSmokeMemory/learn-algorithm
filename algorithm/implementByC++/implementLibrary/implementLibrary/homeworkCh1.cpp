#include "homeworkCh1.h"

int abc(int a, int b, int c) {
	try {
		if (a < 0 && b < 0 && c < 0)
			throw int(1);
		//throw[]() -> void {std::cout << "所有的值都小于0"; };
		if (a == 0 && b == 0 && c == 0)
			throw int(2);
			//throw[]() -> void {std::cout << "所有的值都等于0"; };
	}
	catch (int& s) {
		return s;
	}
	
	return a + b + c;
}

istream& operator>>(istream& in,currency& x)
{
	in >> x.amount;
	return in;
}



ostream& operator<<(ostream& out, const currency& x)
{
	long theAmount = x.amount;
	if (theAmount < 0) {
		out << '-';
		theAmount = -theAmount;

	}
	long dollars = theAmount / 100;
	out << '$' << dollars << '.';
	int cents = theAmount - dollars * 100;
	if (cents < 10) out << '0';
	out << cents;
	return out;
	// TODO: 在此处插入 return 语句
}

currency::currency(signType theSign, unsigned long theDollars, unsigned int theCents)
{
	setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents)
{
	if (theCents > 99) {
		//throw illegalParameterValue("输入值应该小于100");
	}
	amount = theDollars * 100 + theCents;
	if (theSign == signType::minus) amount = -amount;
}

void currency::setValue(double theAmount)
{
	if (theAmount < 0) {
		amount = (long)((theAmount - 0.001) * 100);

	}
	else
		amount = (long)((theAmount + 0.001) * 100);
}

currency currency::add(const currency& x) const
{
	currency y;
	y.amount = amount + x.amount;
	return y;
}

currency currency::subtract(const currency& x) const
{
	currency y;
	y.amount = amount - x.amount;
	return currency();
}

currency currency::percent(double x) const
{
	currency y;
	y.amount = (long)(amount *x /100);
	return currency();
}

currency currency::multiply(double x) const
{
	currency y;
	y.amount = amount * (long)x;
	return currency();
}

currency currency::divide(double x) const
{
	currency y;
	y.amount = amount / (long)x;
	return currency();
}

currency currency::operator+(const currency& x) const
{
	currency y;
	y.amount = amount + x.amount;
	return y;
}

currency currency::operator-(const currency& x) const
{
	currency y;
	y.amount = amount - x.amount;
	return y;
}
currency currency::operator%(double x) const
{
	currency y;
	y.amount = (long)(amount * x / 100);
	return y;
}
currency currency::operator *(double x) const
{
	currency y;
	y.amount = amount * (long)x;
	return y;
}
currency currency::operator/(double x) const
{
	currency y;
	y.amount = amount / (long)x;
	return y;
}

void currency::operator=(int x)
{
	amount = (long)(x);
}
void currency::operator=(double x)
{
	setValue(x);
}
void currency::input()
{
	double theValue;
	cin >> theValue;
	setValue(theValue);
}


