#include "Data.hpp"

void serialize_deserialize() {
    Data *data = new Data();
    std::cout << *data;
    std::cout << "Before conversion: " << std::endl;
    std::cout << reinterpret_cast<void *>(data) << std::endl << std::endl;

    std::cout << "Serialized integer in hex: " << std::endl;
    uintptr_t p = Data::serialize(data);
    std::cout << std::hex << "0x" << p << std::dec << std::endl << std::endl;
    std::cout << "Serialized integer in decimal: " << std::endl;
    std::cout << p << std::dec << std::endl << std::endl;

    std::cout << "Deserialized pointer: " << std::endl;
    Data *deserializedData = data->deserialize(p);
    std::cout << deserializedData  << std::endl << std::endl;
    std::cout << *data;
    delete data;
}

void only_deserialize() {
    Data *data = new Data();

    uintptr_t p = 2992929292;

    std::cout << "Deserialized pointer: " << std::endl;
    std::cout << data->deserialize(p) << std::endl << std::endl;
    delete data;
}   

int main() {

    only_deserialize();
    serialize_deserialize();
}