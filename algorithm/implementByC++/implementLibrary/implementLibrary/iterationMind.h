#pragma once
#include<iterator>
#include<iostream>
using namespace std;
class iterationMind
{

};

/// <summary>
/// �׳�
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int factorial(int n);

/// <summary>
/// �������е�����˳��
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="list"></param>
/// <param name="k"></param>
/// <param name="m"></param>
template<class T>
void permutations(T* list, int k, int m) {
	if (k == m) {
		copy(list, list + m + 1, ostream_iterator<T>(cout, " "));
		cout << endl;
	}
	else {
		for (int i = k; i <= m; i++) {
			swap(list[i], list[k]);
			permutations(list, k + 1, m);
			swap(list[i], list[k]);
		}
	}
}

/// <summary>
/// 쳲�������
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int fabonacci(int n);

/// <summary>
/// ����������
/// </summary>
/// <param name="i"></param>
/// <param name="j"></param>
/// <returns></returns>
unsigned long ackermann(unsigned long i, unsigned long j);

/// <summary>
/// ���Լ��
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
int gcd(int x, int y);

template<class T>
void subSet(int* arrayList, int startIndex, int endIndex, const T* arrayList1) {
	if (startIndex > endIndex) {
		for (int i = 0; i < endIndex + 1; ++i) {
			if (arrayList[i] == 1)
				cout << arrayList1[i];
		}
		cout << endl;
	}
	else {
		arrayList[startIndex] = 0;
		subSet(arrayList, startIndex + 1, endIndex, arrayList1);
		arrayList[startIndex] = 1;
		subSet(arrayList, startIndex + 1, endIndex, arrayList1);
	}
}

/// <summary>
/// �����������Ӽ�
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="arrayList"></param>
template<class T, size_t N>
void ShowSubSet(const T(&arrayList)[N]) {
	int intArray[N]{};
	subSet(intArray, 0, N -1, arrayList);
}

/// <summary>
/// ������λ������
/// </summary>
/// <param name="n"></param>
void grayCodePositionSeq(int n);
