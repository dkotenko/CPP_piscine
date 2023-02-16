#include "Converter.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

int main(int argc, char *argv[]) {
	(void)argv;
	if (argc < 2) {
		std::cout << "Usage: ./convert literal-to-convert" << std::endl;
	} else {
		Converter conv(argv[1]);
		//std::cout << conv << std::endl;
	}
}
