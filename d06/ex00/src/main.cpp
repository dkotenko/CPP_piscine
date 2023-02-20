#include "Converter.hpp"

void test(std::string s, void (&test)(void)) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
	test();

	std::cout << "******************************\n";
    std::cout << s << std::endl;


}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "Usage: ./convert literal-to-convert" << std::endl;
	} else {
		Converter conv(argv[1]);
		std::cout << conv;
	}
}
