#include <iostream>
#include <vector>
#include <string_view>
#include <cassert>

namespace Items
{
    enum Types
    {
        healthPotion,
        torch,
        arrow,

        count
    };
}

constexpr std::string_view getItemType(Items::Types type, bool plural = false)
{
    using enum Items::Types;

    if (!plural) {
        switch (type)
            {
                case healthPotion: return "health potion";
                case torch:        return "torch";
                case arrow:        return "arrow";
                default:           return "???";
            }
        } 
    else 
    {
        switch (type)
        {
            case healthPotion: return "health potions";
            case torch:        return "torches";
            case arrow:        return "arrows";
            default:           return "???";
        }
    }

}

void printInventory(const std::vector<int>& items)
{
    int totalItems{};
    for (auto i{0}; i<items.size(); ++i)
    {
        int itemCount{items[i]};
        std::cout << "You have " << itemCount << " " << (itemCount == 1 ? getItemType(static_cast<Items::Types>(i)) : getItemType(static_cast<Items::Types>(i),true)) << "\n";
        totalItems += itemCount;
    }

    std::cout << "You have " << totalItems << " total items\n";
}

int main()
{
    std::vector items{1, 5, 10};
    assert(items.size()==Items::Types::count&&"items vector is incorrect size.");

    printInventory(items);
}
