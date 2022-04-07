#include<iostream>
#include"Search.h"
#include"Sort.h"

int main() {
	using namespace std;
	using namespace ZHR;
	int b[]{10,9,8,2,4,3,1,11,9,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9};
	SelectionSort::selection(b);
	//InsertionSort::insertion(b);
	//ShellSort::shell(b);
	cout << BinarySearch::findIndex(3, b) << endl;
	for (int i : b) {
		cout << i << ",";
	}
	return 0;
}