#include "Caster.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "Usage: ./convert literal-to-convert"
	} else {
		Caster caster(argv[1]);
	}
}

