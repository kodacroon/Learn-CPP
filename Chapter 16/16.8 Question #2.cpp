#include <iostream>
#include <vector>
#include <string_view>

template <typename T>
bool isValueInArray(std::vector<T>& arr, const T& val)
{
    for (const auto& el : arr) 
        if (el==val) 
            return true;
        
    return false;
}

int main() 
{
    std::vector<std::string_view> names {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::cout << "Enter a name: ";

    std::string inputName{};
    std::cin >> inputName;

    std::cout << std::endl;

    bool nameFound{isValueInArray<std::string_view>(names, inputName)};

    std::cout << inputName;
    if (nameFound) {
        std::cout << " was found.";
    } else
    {
        std::cout << " was not found.";
    }

    return 0;
}
