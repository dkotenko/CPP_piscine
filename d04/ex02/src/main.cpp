#include "Cat.hpp"
#include "Dog.hpp"

#define ARRAY_SIZE 2

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

void animal_instantiating_test(void) {
    print_header("animal_instantiating_test");

    //uncomment this
    //Animal animal;
}

void cat_dog_test(void) {
    print_header("cat dog test");

    Dog dog;
    dog.makeSound();
    Cat cat;
    cat.makeSound();
}

int main() {
    cat_dog_test();
    animal_instantiating_test();

}
