#include "main.hpp"

Base * generate(void) {
	std::srand(std::time(NULL));

	int i = std::rand() % CHILDS_NUMBER;
	if (i == CHILDS_A) {
		return new A();
	} else if (i == CHILDS_B) {
		return new B();
	} else {
		return new C();
	}
}

void identify(Base *p) {
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	std::cout << "A pointer has ";
	if (a != NULL) {
		std::cout << "type A";
	} else if (b != NULL) {
		std::cout << "type B";
	} else if (c != NULL) {
		std::cout << "type C";
	} else {
		std::cout << "no known type";
	}
	std::cout << std::endl;
};

void identify(Base& p) {
    std::cout << "A link has ";
    
	try {
        (void)(dynamic_cast<A&>(p));
        std::cout << "type A" << std::endl;
    } catch (std::bad_cast &e) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "type B" << std::endl;
    } catch (std::bad_cast &e) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "type C" << std::endl;
    } catch (std::bad_cast &e) {}
}

int main() {
    Base *gen1 = generate();
    identify(gen1);
    identify(*gen1);
    delete gen1;

}