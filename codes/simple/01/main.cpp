#include <nlohmann/json.hpp>  
#include <string>  
#include <optional>  

struct Person {  
    std::string name;  
    std::optional<int> age;  
};  

int main() {
    // JSON字符串  
    std::string jsonString = R"({"name": "Jack London", "age": 45})";  

    // 反序列化  
    Person person = nlohmann::json::parse(jsonString).get<Person>();  

    // 序列化  
    nlohmann::json jsonData = person;  
    std::string output = jsonData.dump();  

    return 0;
}