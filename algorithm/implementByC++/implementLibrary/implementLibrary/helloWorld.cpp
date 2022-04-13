#include<iostream>
#include"homeworkCh1.h"

using namespace std;

int main() {
	using namespace std;
	//int b[]{ 10,9,8,2,4,3,1,11,9,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 };
	float b[]{10.0,9.0,8.0,2.0,4.0,3.0,1.0,11.0,9.0,10.0,9.0,8.0,2.0,4.0,3.0,1.0,11.0,9.0,10.0,9.0,8.0,2.0,4.0,3.0,1.0,11.0,9.0,10.0,9.0,8.0,2.0,4.0,3.0,1.0,11.0,9.0,10.0,9.0,8.0,2.0,4.0,3.0,1.0,11.0,9};
	float c[]{0};
	cout << count(c) << endl;
	cout << b << ":";
	int countB = count(b);
	for (int i = 0; i < countB; ++i) {
		cout << b[i];
	}
	cout << endl;

	fill(b, 10, 20,(float)0);
	cout << b << ":";
	for (int i = 0; i < countB; ++i) {
		cout << b[i];
	}
	cout << endl;

	cout << inner_product(b,b)<<endl;

	iota(b, countB, (float)100);
	for (int i = 0; i < countB; ++i) {
		cout << b[i];
	}
	cout << endl;

	cout << is_sorted(b, countB) << endl;
	cout << mismatch(b, b, countB) << endl;

	cout << abc(-1, -1, -1) << endl;

	int** array2d;
	make2dArray(array2d, 2, 3);
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			array2d[i][j] = 0;
			cout << array2d[i][j];
		}
		cout << endl;
	}
	delete2dArray(array2d, 2);

	int rowSize[]{ 1,2,3,4,5 };
	make2dArray(array2d, count(rowSize), rowSize);
	for (int i = 0; i < count(rowSize); ++i) {
		for (int j = 0; j < rowSize[i]; ++j) {
			array2d[i][j] = 0;
			cout << array2d[i][j];
		}
		cout << endl;
	}
	delete2dArray(array2d, count(rowSize));
	float* p = new float[20];
	changeLength1D(p, countB, 10);
	
	make2dArray(array2d, 10, 10);
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			array2d[i][j] = 5;
			cout << array2d[i][j];
		}
		cout << endl;
	}
	changeLength2D(array2d, 10, 10, 20, 20);
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			array2d[i][j] = 0;
			cout << array2d[i][j];
		}
		cout << endl;
	}
	delete2dArray(array2d, 5);
	return 0;
}