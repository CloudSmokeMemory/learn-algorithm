#pragma once
namespace ZHR {
	class ArrayProperty
	{

	};
	template<typename T>
	const static int arrayLength(T& array) {
		return sizeof(array) / sizeof(array[0]);
	}
}


