#pragma once

#include <vector>
#include <iostream>

namespace DebugFunctions {
	template <typename T>
	void print(const std::vector<T>& arr) {
		std::cout << std::endl;

		for (auto& item : arr) {
			std::cout << item << std::endl;
		}

		std::cout << std::endl;
	}
}