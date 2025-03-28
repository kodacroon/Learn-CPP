#include <iostream>
#include <vector>

void printVector(const std::vector<int>& v)
{
    std::cout << "\t(Stack:";
    if (v.empty())
    {
        std::cout << " empty)\n";
        return;
    }

    for (const auto& element : v)
    {
        std::cout << ' ' << element;
    }

    std::cout << ")\n";
}

int main()
{
    std::vector<int> v;
    printVector(v);

    std::cout << "Push 1";
    v.push_back(1);
    printVector(v);

    std::cout << "Push 2";
    v.push_back(2);
    printVector(v);

    std::cout << "Push 3";
    v.push_back(3);
    printVector(v);

    std::cout << "Pop";
    v.pop_back();
    printVector(v);

    std::cout << "Push 4";
    v.push_back(4);
    printVector(v);

    std::cout << "Pop";
    v.pop_back();
    printVector(v);

    std::cout << "Pop";
    v.pop_back();
    printVector(v);

    std::cout << "Pop";
    v.pop_back();
    printVector(v);

    return 0;
}
