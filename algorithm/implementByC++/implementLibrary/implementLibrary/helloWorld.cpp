#include<iostream>
#include"Search.h"

int main() {
	using namespace std;
	using namespace ZHR;
	int a[]{ 1,2,3 };
	Array searchArray{
		a,
		size(a)
	};
	cout << BinarySearch::isInclusion(0, searchArray) << endl;
	
	return 0;
}
