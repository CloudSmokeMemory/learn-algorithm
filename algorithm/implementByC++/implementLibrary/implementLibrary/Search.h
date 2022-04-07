#pragma once
#include <iostream>

namespace ZHR {
	using namespace std;

	struct Array {
		int* item;
		int length;
	};

	class BinarySearch {
	private:
		//Array SearchArray;
	public:
		static bool isInclusion(int k, Array searchArray);

		template<typename T, typename K>
		static int findIndex(K k, const T & numArray) {
			int startIndex = 0;
			int length = sizeof(numArray) / sizeof(numArray[0]);
			int endIndex{ length - 1 };
			while (startIndex <= endIndex) {
				int centerIndex = (startIndex + endIndex) / 2;
				if (numArray[centerIndex] == k) {
					return centerIndex;
				}
				else if (numArray[centerIndex] > k) {
					endIndex = centerIndex - 1;
				}
				else {
					startIndex = centerIndex + 1;
				}
			}
			return -1;
		};
	};
	

	
}


