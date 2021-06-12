#include "Brain.hpp"

std::string Brain::identify() {
    std::stringstream brainStream;
    brainStream << this;
    return brainStream.str();
}
