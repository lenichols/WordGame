#include <iostream>
#include <string>

int main() {
    std::string name, city, college, profession, pet, petName;
    int age;

    std::cout << "Welcome to Word Game" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Age: ";
    std::cin >> age;
    std::cout << "City: ";
    std::cin >> city;
    std::cout << "College: ";
    std::cin >> college;
    std::cout << "Profession: ";
    std::cin >> profession;
    std::cout << "What type of pet do you have?: ";
    std::cin >> pet;
    std::cout << "What is your pets name?: ";
    std::cin >> petName;

    std::cout << "\n\n" << std::endl;

    std::cout << "There once was a person named "
              << name
              << " who lived in "
              << city << ". " << std::endl
              << "At the age of "
              << age << ", "
              << name
              << " went to college at "
              << college << ". "
              << name << std::endl
              << "graduated and went to work "
              << "as a "
              << profession << ". "
              << "Then, "
              << name << std::endl
              << "adopted a(n) "
              << pet
              << "named "
              << petName << ". " << std::endl
              <<"They both lived happily ever after!" << std::endl;
    return 0;
}
