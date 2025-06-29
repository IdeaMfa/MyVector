#include <MyVector.hpp>
#include <string>

int main() {
    MyVector::MyVector<std::string> vec;
    vec.PushBack("C++");
    vec.PushBack("Library");
    vec.Print();  // Should print: [C++, Library]
}
