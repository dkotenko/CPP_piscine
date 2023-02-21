#include "iter.hpp"

typedef int tType;

void test_valid() {
	tType a[3] = {3, 2, 4};
	int len = sizeof(a) / sizeof (tType);
	iter(a, len, &pow2);
	for (int i = 0; i < len; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
};

int main() {
	test_valid();

}