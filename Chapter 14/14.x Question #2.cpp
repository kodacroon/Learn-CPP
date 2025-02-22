#include <iostream>

class Fraction
{
    private:
        int m_numerator{ 0 };
        int m_denominator{ 1 };
    public:
        Fraction() = default;

        explicit Fraction(int numerator, int denominator): 
            m_numerator{numerator},
            m_denominator{denominator}
            {}
        
        const int numerator() const   
        {
            return m_numerator;
        }
        const int denominator() const
        {
            return m_denominator;
        }

        Fraction multiply(const Fraction& f2)
        {
            return Fraction{m_numerator * f2.m_numerator, m_denominator * f2.m_denominator};
        }
};

Fraction getFraction()
{
    int numerator{};
    int denominator{};
    std::cout << "Enter a value for numerator: ";
    std::cin >> numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> denominator;
    std::cout << '\n';

    return Fraction{numerator, denominator};
}

void printFraction(const Fraction& f)
{
    std::cout << f.numerator() << '/' << f.denominator() << '\n';
}

int main()
{
    Fraction f1{ getFraction() };
    Fraction f2{ getFraction() };

    std::cout << "Your fractions multiplied together: ";

    printFraction(f1.multiply(f2));

    return 0;
}
