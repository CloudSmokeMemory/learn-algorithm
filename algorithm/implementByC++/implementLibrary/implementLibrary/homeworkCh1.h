#pragma once
#include <type_traits>
#include<iostream>
using namespace std;

template<typename T>
concept IsNumber = is_arithmetic<T>::value;

template <typename T>
/// <summary>
/// 只适用于有迭代器的数组
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="array"></param>
/// <returns></returns>
int count(const T& array) {
	int i = 0;
	for (auto j : array) {
		++i;
	}
	/*try {
		if (i <= 1) {
			throw string("must > 1");
		}
	}
	catch (string& s) {
		cout << s;
	}*/
	try {
		if (i <= 1) {
			throw "数组尽可能大于1";
		}
	}
	catch (const char *s) {
		cout << s;
	}
	
	return i;
}

template <class T>
void fill(T* a, int start, int end, const T& value)
{// Set a[start:end-1].
	for (int i = start; i < end; i++)
		a[i] = value;
}

template <IsNumber T, size_t N>
auto inner_product(const T(& a)[N], const T(&b)[N]) -> decltype(a[0])
{
	auto  total = const_cast<decltype(a[0])>(a[0]);
	total = 0;
	for (int i = 0; i < N; ++i) {
		total += a[i] * b[i];
	}
	return total;
}

template<IsNumber T>
void iota(T*a,int n, const T& value) {
	for (int i = 0; i < n; ++i) {
		a[i] = value + i;
	}
}

template<IsNumber T>
bool is_sorted(T* a, int n) {
	int flag = 0;
	for (int i = 1; i < n; ++i) {
		if (a[i - 1] == a[i]) continue;
		if (a[i - 1] > a[i]) {
			if (flag == 2) {
				return false;
			}
			flag = 1;
			continue;
		}
		if (a[i - 1] < a[i]) {
			if (flag == 1) {
				return false;
			}
			flag = 2;
			continue;
		}
	}
	return true;
}

template<IsNumber T>
int mismatch(const T* a, const T* b, int n) {
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) return i;
	}
	return n - 1;
}

int abc(int a, int b, int c);


template<class T>
/// <summary>
/// 为一个二维数组分配存储空间，记得在最后调用delete[] 或者delete2dArray函数释放空间
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="x"></param>
/// <param name="numberOfRows"></param>
/// <param name="numberOfColumns"></param>
/// <returns></returns>
bool make2dArray(T**& x, int numberOfRows, int numberOfColumns) {
	try {
		x = new T* [numberOfRows];

		for (int i = 0; i < numberOfRows; ++i) 
			x[i] = new int[numberOfColumns];
		return true;
	}
	catch (bad_alloc) {
		return false;
	}
}

template<class T>
bool make2dArray(T**& x, int numberOfRows, const int* rowSize) {
	try {
		x = new T * [numberOfRows];

		for (int i = 0; i < numberOfRows; ++i)
			x[i] = new int[rowSize[i]];
		return true;
	}
	catch (bad_alloc) {
		return false;
	}
}


template<class T>
void delete2dArray(T**& x, int numberOfRows) {
	for (int i = 0; i < numberOfRows; ++i)
		delete[] x[i];
	delete[] x;
	x = NULL;
}

template<class T>
void changeLength1D(T*& a, int oldLength, int newLength) {
	T* temp = new T[newLength];              // new array
	int number = min(oldLength, newLength);  // number to copy
	copy(a, a + number, temp);
	delete[] a;                             // deallocate old memory
	a = temp;
}

template<class T>
void changeLength2D(T**& a, int oldNumberOfRows, int oldNumberOfCols, int newNumberOfRows, int newNumberOfCols) {
	T** temp;
	make2dArray(temp, newNumberOfRows, newNumberOfCols);

	int minRowLength = min(oldNumberOfRows, newNumberOfRows);
	int minColLength = min(oldNumberOfCols, newNumberOfCols);

	for (int i = 0; i < minRowLength; ++i) {
		copy(a[i], a[i] + minColLength, temp[i]);
	}

	delete2dArray(a, oldNumberOfRows);
	a = temp;
}

enum class signType{plus, minus};

class currency {
public:
	currency(signType theSign = signType::plus,
		unsigned long theDollars = 0,
		unsigned int theCents = 0
	);
	~currency() {}

	void setValue(signType, unsigned long, unsigned int);
	void setValue(double);
	signType getSign() const {
		if (amount < 0) return signType::minus;
		else return signType::plus;
	}
	unsigned long getDollars() const {
		if (amount < 0) return (-amount) / 100;
		else return amount / 100;
	}
	unsigned int getCents() const {
		if (amount < 0)	return -amount - getDollars() * 100;
		else return amount - getDollars() * 100;
	}
	currency add(const currency&) const;
	currency subtract(const currency& x) const;
	currency multiply(double x) const;
	currency divide(double x) const;
	currency percent(double x) const;
	 



	currency& increment(const currency& x) {
		amount += x.amount; return *this;
	}
	void input();
	
	currency operator +(const currency&) const;
	currency& operator+=(const currency& x) {
		amount += x.amount; return *this;
	}
	currency operator -(const currency&) const;
	currency operator %(double) const;
	currency operator *(double) const;
	currency operator /(double) const;
	void operator =(int);
	void operator =(double);
	friend ostream& operator <<(ostream&, const currency&);
	friend istream& operator>>(istream&, currency& x);

private:
	long amount;
};