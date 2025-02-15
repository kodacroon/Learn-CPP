#include <iostream>

struct Fraction {
    int numerator{};
    int denominator{};
};

std::ostream& operator<<(std::ostream& out, const Fraction& fraction) {
    out << fraction.numerator << '/' << fraction.denominator;
    return out;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    return { f1.numerator * f2.numerator, f1.denominator * f2.denominator };
}

Fraction getFraction()
{
    Fraction fraction{};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> fraction.numerator;

    std::cout << "Enter a value for the denominator: ";
    std::cin >> fraction.denominator;

    return fraction;
}

int main()
{
    Fraction fraction1{ getFraction() };
    Fraction fraction2{ getFraction() };

    std::cout << fraction1 << "\n";
    std::cout << fraction2 << "\n";

    std::cout << (fraction1 * fraction2);

    return 0;
}
