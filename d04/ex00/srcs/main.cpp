#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main() {
    std::cout << std::endl << "animal creation:" << std::endl;
    const Animal* meta = new Animal();
    
    std::cout << std::endl << "dog creation:" << std::endl;
    const Animal* dog = new Dog();

    std::cout << std::endl << "cat creation:" << std::endl;
    const Animal* cat = new Cat();

    dog->print();
    dog->makeSound();
    cat->print();
    cat->makeSound(); //will output the cat sound!
    meta->print();
    meta->makeSound();

    std::cout << std::endl << "Wrong animals: " << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    wrongCat->print();
    wrongCat->makeSound();
    wrongAnimal->print();
    wrongAnimal->makeSound();

    std::cout << std::endl << "Deleting: " << std::endl;
    delete(dog);
    delete(cat);
    delete(meta);
    delete(wrongCat);
    delete(wrongAnimal);
    return 0;
}
