#include "homeworkCh1.h"

int abc(int a, int b, int c) {
	try {
		if (a < 0 && b < 0 && c < 0)
			throw int(1);
		//throw[]() -> void {std::cout << "���е�ֵ��С��0"; };
		if (a == 0 && b == 0 && c == 0)
			throw int(2);
			//throw[]() -> void {std::cout << "���е�ֵ������0"; };
	}
	catch (int& s) {
		return s;
	}
	
	return a + b + c;
}