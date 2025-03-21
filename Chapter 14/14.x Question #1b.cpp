#include <iostream>
#include <cmath> // For std::sqrt

class Point2d 
{
    private:
        double m_x{0.0};
        double m_y{0.0};
    public:
        constexpr Point2d(double x = 0.0, double y = 0.0): m_x{x}, m_y{y} {}

        constexpr double x() const {return m_x;}
        constexpr double y() const {return m_y;}

        double distanceTo(const Point2d& p2)
        {
            return std::sqrt((x()-p2.x())*(x()-p2.x()) + (y()-p2.y())*(y()-p2.y()));
        }
        
        void print()
        {
            std::cout << "Point2d(" << x() << ", " << y() << ")\n";
        }
};

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}
