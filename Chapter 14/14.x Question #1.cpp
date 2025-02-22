#include <iostream>

class Point2d 
{
    private:
        double m_x{0.0};
        double m_y{0.0};
    public:
        constexpr Point2d(double x = 0.0, double y = 0.0): m_x{x}, m_y{y} {}

        constexpr const double x() {return m_x;}
        constexpr const double y() {return m_y;}
        
        void print()
        {
            std::cout << "Point2d(" << x() << ", " << y() << ")\n";
        }
};

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();

    return 0;
}
