#include "Converter.hpp"
#include <cassert>



void test(std::string s, void (*test)(void)) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
	test();
	std::cout << "All testcases passed successfully\n";
	std::cout << "******************************\n";
}

void test_isChar() {
	std::string correct[] = {
		"a",
		"A",
		"z",
		"Z"
	};

	for (int i = 0; i < (int)(sizeof(correct) / sizeof(std::string)); i++) {
		assert(ConvChar::isChar(correct[i]));
	}

	std::string incorrect[] = {
		"1",
		"2",
		"3",
		"4"
	};
	
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "Usage: ./convert literal-to-convert" << std::endl;
	} else {
		Converter conv(argv[1]);
		std::cout << conv;
	}
}
