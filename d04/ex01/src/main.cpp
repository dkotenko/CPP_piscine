#include "Cat.hpp"
#include "Dog.hpp"

#define ARRAY_SIZE 5

void animals_array_test(void) {
    const Animal* animals[ARRAY_SIZE];
    
    std::cout << "Animals array creation" << std::endl;
    if (ARRAY_SIZE % 2) {
        return ;
    }
    for (int i = 0; i < ARRAY_SIZE; i += 2) {
        
        animals[i] = new Dog();
        animals[i + 1] = new Cat();
        std::cout << i << std::endl;
    }

    std::cout << std::endl << "Animals array deleting" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i ++) {
        std::cout << std::endl << "Animal #" << i << " deleted" << std::endl;
        delete(animals[i]);
    }
}

void dog_idea_copy_constructor_test() {
    std::cout << std::endl << std::endl << std::endl << "Dog idea copy constructor test (must be shallow copy)" << std::endl;
    Dog *dog = new Dog();
    
    dog->getBrain()->ideas[0] = "Sniff everything";
    std::cout << "Dog first idea: " << dog->getBrain()->ideas[0] << std::endl;

    std::cout << std::endl << "newDog creation by copy constructor from dog" << std::endl;
    Dog *newDog = new Dog(*dog);

    std::cout << "newDog first idea: " << newDog->getBrain()->ideas[0] << std::endl;

    std::cout << "Deleting dog" << newDog->getBrain()->ideas[0] << std::endl;
    delete(dog);

    std::cout << "newDog first idea (must not be deleted): " << newDog->getBrain()->ideas[0] << std::endl;
    delete(newDog);
}

/*
void cat_idea_copy_constructor_test() {
    std::cout << std::endl << std::endl << std::endl << "Cat idea copy constructor test (must be shallow copy)" << std::endl;
    Cat cat;
    
    cat.getBrain()->ideas[0] = "to sniff everything and everywhere";
    std::cout << "Cat first idea: " << cat.getBrain()->ideas[0] << std::endl;

    std::cout << "newCat created by copy constructor from cat" << std::endl;
    Cat newCat(cat);

    std::cout << "newCat first idea: " << newCat.getBrain()->ideas[0] << std::endl;

    std::cout << "Deleting cat" << newCat.getBrain()->ideas[0] << std::endl;
    delete(cat);

    std::cout << "newCat first idea (must not be deleted): " << newCat.getBrain()->ideas[0] << std::endl;
    delete(newCat);
}
*/

int main() {
    //animals_array_test();
    dog_idea_copy_constructor_test();
    //cat_idea_copy_constructor_test();
    //dog_idea_assign_operator_test();
    //cat_idea_assign_operator_test();
    
    
    return 0;
}
