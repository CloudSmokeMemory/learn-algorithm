#include<iostream>
#include"Search.h"
#include"Sort.h"
#include <vector>
using namespace std;
int findKthLargest(vector<int>& nums, int k);

int main() {
	using namespace std;
	using namespace ZHR;
	int b[]{10,9,8,2,4,3,1,11,9,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9 ,10,9,8,2,4,3,1,11,9};
	
	//cout << findKthLargest(, 4);


	return 0;
}

int findKthLargest(vector<int>& nums, int k) {
	vector<int> a{};
	for (int i : nums) {
		int k = 0;
		for (int j : a) {
			if (j == i) {
				k = 1;
				break;
			}
		}
		if (k == 0) {
			

		}
	}
}