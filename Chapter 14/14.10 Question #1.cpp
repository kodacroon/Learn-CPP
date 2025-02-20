#include <iostream>
#include <optional>
#include <string_view>

enum class Color
{
    red,
    white,
    blue,
};

constexpr Color getColor(std::string_view color)
{
    using enum Color;

    if (color=="red")   return red;
    if (color=="white") return white;
    if (color=="blue")  return blue;
}

constexpr std::string_view printColor(Color color) {
    using enum Color;
    
    switch (color) {
        case red:   return "red";
        case white: return "white";
        case blue:  return "blue";
        default:    return "???";
    }
}

class Ball {
    private:
        Color m_color{};
        double m_radius{};
    public:
        Ball(std::string_view color, double radius): 
            m_color{ getColor(color) }, 
            m_radius{ radius }
            {}

        Color color() { return m_color; };
        double radius() { return m_radius; };

};

void print(Ball& ball)
{
    std::cout << "Ball (" << printColor(ball.color()) << ", " << ball.radius() << ")\n";
}

int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}
