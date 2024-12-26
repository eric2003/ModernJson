#include <nlohmann/json.hpp>  
#include <string>  
#include <optional>  

struct Person {  
    std::string name;  
    std::optional<int> age;  
};  

int main() {
    // JSON�ַ���  
    std::string jsonString = R"({"name": "Jack London", "age": 45})";  

    // �����л�  
    Person person = nlohmann::json::parse(jsonString).get<Person>();  

    // ���л�  
    nlohmann::json jsonData = person;  
    std::string output = jsonData.dump();  

    return 0;
}