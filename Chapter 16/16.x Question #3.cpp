#include <iostream>
#include <vector>
#include <utility> // for std::pair

template <typename T>
std::pair<T,T> minmax(const std::vector<T>& v)
{
    std::pair<T, T> minmax {0,0};
    for (auto i {1}; i < v.size(); ++i)
    {
        if (v[minmax.first]>v[i])
        {
            minmax.first = i;
        }
        if (v[minmax.second]<v[i])
        {
            minmax.second = i;
        }
    }

    return minmax;
}

template <typename T>
void printArray (const std::vector<T>& v) {
    std::cout << "With array ( ";
    for (auto e : v)
    {
        std::cout << e << ", ";
    }
    std::cout << " ):\n";

    std::pair minmaxPair {minmax(v)};
    std::cout << "The min element has index " << minmaxPair.first << " and value " << v[minmaxPair.first] << "\n";
    std::cout << "The max element has index " << minmaxPair.second << " and value " << v[minmaxPair.second] << "\n";
}

int main ()
{
    std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
    std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
    printArray(v1);
    printArray(v2);

    return 0;
}
