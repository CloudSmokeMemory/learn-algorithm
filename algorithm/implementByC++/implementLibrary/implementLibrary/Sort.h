#pragma once
#include<iostream>
#include"Exchange.h"
namespace ZHR {
	/// <summary>
	/// ���ȣ��ҵ���������С���Ǹ�Ԫ�أ���Σ�����������ĵ�һ��Ԫ�ؽ���λ�ã������һ��Ԫ�ؾ�����СԪ����ô���ͺ��Լ����������ٴΣ���ʣ�µ�Ԫ�����ҵ���С��Ԫ�أ�����������ĵڶ���Ԫ�ؽ���λ�á����������ֱ����������������
	/// </summary>
	class SelectionSort
	{

	public:
		template<typename K>
		const static void selection(K& numArray) {
			int startIndex = 0;
			int length = sizeof(numArray) / sizeof(numArray[0]);
			for (int i = 0; i < length - 1; i++) {
				for (int j = i + 1; j < length; j++) {
					if (numArray[j] < numArray[i]) {
						ExchangeNum::exchangeTwoNum(numArray[j], numArray[i]);
					}
				}
			}
		};
	};
	class InsertionSort {
	public:
		template<typename T>
		const static void insertion(T& numArray) {
			int length = sizeof(numArray) / sizeof(numArray[0]);
			for (int i = 0; i < length - 1; i++) {
				for (int j = i; numArray[j + 1] < numArray[j] && j >= 0; j--) {
					ExchangeNum::exchangeTwoNum(numArray[j + 1], numArray[j]);
				}
			}
		}
	};
	class ShellSort {

	public:
		template<typename T>
		const static void shell(T& numArray) {
			int length = sizeof(numArray) / sizeof(numArray[0]);
			int h = 1;
			while (h < length / 3) h = h * 3 + 1;
			while (h >= 1) {
				for (int i = h; i < length; i++) {
					for (int j = i; numArray[j] < numArray[j-h] && j >= h; j-=h) {
						ExchangeNum::exchangeTwoNum(numArray[j], numArray[j-h]);
					}
				}
				h = h / 3;
			}
		}
	};


}




