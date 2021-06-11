#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string line, std::string what, std::string with);

int main() {

    std::string filename;
    std::string line;
    std::string replaceWhat;
    std::string replaceWith;

    std::cout << "Enter filename: ";
    std::cin >> filename;

    std::cout << "Enter string to replace: ";
    std::cin >> replaceWhat;

    std::cout << "Enter string to replace with: ";
    std::cin >> replaceWith;

    std::ifstream inputFile (filename);
    std::ofstream outputFile (filename + ".riplace");
    if (inputFile.is_open())
    {
        if (outputFile.is_open()) {
            while (getline(inputFile, line)) {
               outputFile << replaceAll(line, replaceWhat, replaceWith) << std::endl;
            }
            outputFile.close();
        }
        else
            std::cout << "Unable to open file " << filename << std::endl;
        inputFile.close();
    }
    else
        std::cout << "Unable to open file " << filename << std::endl;
    return 0;
}


std::string replaceAll(std::string line, std::string what, std::string with)
{
    int findResult = line.find(what);
    int lengthWhat = what.length();

    while (findResult != -1)
    {
        line = line.replace(findResult, lengthWhat, with);
        findResult = line.find(what);
    }
    return line;
}
