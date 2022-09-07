#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    dog->print();
    dog->makeSound();
    cat->print();
    cat->makeSound(); //will output the cat sound!
    meta->print();
    meta->makeSound();

    std::cout << "Wrong animals: " << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    wrongCat->print();
    wrongCat->makeSound();
    wrongAnimal->print();
    wrongAnimal->makeSound();

    delete(dog);
    delete(cat);
    delete(meta);
    delete(wrongCat);
    delete(wrongAnimal);
    return 0;
}
