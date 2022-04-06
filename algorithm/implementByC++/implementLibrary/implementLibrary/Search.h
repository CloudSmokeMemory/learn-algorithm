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

	};
}


