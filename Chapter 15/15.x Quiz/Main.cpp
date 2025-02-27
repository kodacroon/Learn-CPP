#include "Monster.h"
#include "Random.h"

namespace MonsterGenerator
{
    std::string_view getName(int n)
    {
        switch(n)
            {
                case 0: return "John";
                case 1: return "Greg";
                case 2: return "Skelly";
                case 3: return "Antoine";
                case 4: return "Bernie";
                case 5: return "Glarglez";
                default: return "???";
            }
    }

    std::string_view getRoar(int n)
    {
        switch(n)
            {
                case 0: return "Oh, hi Mark";
                case 1: return "*bleh*";
                case 2: return "I have to leave right now!";
                case 3: return "My wife just left me.";
                case 4: return "Hey, excuse me, do you know the quickest way to get back on the I-95 southbound?";
                case 5: return "*glarglez*";
                default: return "???";
            }
    }
    
    Monster generate() 
    {
        return Monster{ Monster::skeleton, getName(Random::get(0, 5)), getRoar(Random::get(0, 5)), Random::get(1, 100)};
    }
};

int main()
{
	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
