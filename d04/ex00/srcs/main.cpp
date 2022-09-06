#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog;
    dog->makeSound();
    std::cout << cat;
    cat->makeSound(); //will output the cat sound!
    std::cout << meta;
    meta->makeSound();

    std::cout << "Wrong animals: " << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongCat;
    wrongCat->makeSound();
    std::cout << wrongAnimal;
    wrongAnimal->makeSound();

    delete(dog);
    delete(cat);
    delete(meta);
    delete(wrongCat);
    delete(wrongAnimal);
    return 0;
}
