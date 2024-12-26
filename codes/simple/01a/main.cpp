#include <nlohmann/json.hpp>  
#include <string>  
#include <iostream>  

class Person
{
public:
    std::string name;
    int age = 18;
};

NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Person, name, age);

int main() {
    // serialize
    Person person = {"Jeke", 20};
    nlohmann::json j = person;
    std::cout << j.dump(4) << std::endl;

    return 0;
}