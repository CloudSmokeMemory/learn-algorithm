#include<iostream>
#include"Search.h"

int main() {
	using namespace std;
	using namespace ZHR;
	int a[]{ 1,2,3,4 };
	cout << BinarySearch::isInclusion(5, a) << endl;
	
	return 0;
}