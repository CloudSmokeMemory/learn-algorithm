#include "Search.h"

bool ZHR::BinarySearch::isInclusion(int k, Array searchArray)
{
	//int* startIndex = searchArray.item;
	int startIndex = 0;
	int endIndex = searchArray.length-1;
	
	while (startIndex <= endIndex) {
		int centerIndex = (startIndex + endIndex) / 2;
		if (*(searchArray.item + centerIndex) == k) {
			return true;
		}
		else if (*(searchArray.item + centerIndex) > k) {
			endIndex = centerIndex -1;
		}
		else {
			
			startIndex = centerIndex+1;
		}
	}


	return false;
}



