#include <iostream>
#include <string>
#include <string_view>

enum class MonsterType
    {
        ogre,
        dragon,
        orc,
        giantSpider,
        slime,
    };

constexpr std::string_view getMonsterType (MonsterType monsterType)
{
    using enum MonsterType;

    switch (monsterType)
        {
            case ogre:        return "ogre";
            case dragon:      return "dragon";
            case orc:         return "orc";
            case giantSpider: return "giant spider";
            case slime:       return "slime";
            default:          return "???;"
        }
}

struct Monster
{
    MonsterType type{};
    std::string name{};
    int health{100};
};

void printMonster(Monster& monster) {
    std::cout << "Type: " << getMonsterType(monster.type) << "\n";
    std::cout << "Name: " << monster.name << "\n";
    std::cout << "Health: " << monster.health << "\n";

    Monster m{monster};
}

int main ()
{
    Monster george{MonsterType::ogre, "George"};
    printMonster(george);

    Monster sam(MonsterType::slime, "Sam", 20);
    printMonster(sam);
    
    return 0;
}
