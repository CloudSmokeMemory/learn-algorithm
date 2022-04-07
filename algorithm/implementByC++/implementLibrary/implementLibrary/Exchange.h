#pragma once
namespace ZHR {
	class ExchangeNum
	{
	public:
		template<typename T>
		const static void exchangeTwoNum(T& num1, T& num2) {
			T temp = num2;
			num2 = num1;
			num1 = temp;
		}
	};
}


