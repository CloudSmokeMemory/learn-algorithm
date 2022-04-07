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

		template<class T>
		static bool isInclusion(int k, T& intArray);
	};


	template<class T>
	static bool ZHR::BinarySearch::isInclusion(int k, T& intArray)
	{
		int startIndex = 0;
		int length = sizeof(intArray) / sizeof(intArray[0]);
		int endIndex{ length - 1 };
		while (startIndex <= endIndex) {
			int centerIndex = (startIndex + endIndex) / 2;
			if (intArray[centerIndex] == k) {
				return true;
			}
			else if (intArray[centerIndex] > k) {
				endIndex = centerIndex - 1;
			}
			else {
				startIndex = centerIndex + 1;
			}
		}
		return false;
	}

	
}


