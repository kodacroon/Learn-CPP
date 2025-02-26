#ifndef TRIAD_H
#define TRIAD_H

template <typename T, typename U, typename V>
class Triad
{
    private:
        T m_x{};
        U m_y{};
        V m_z{};
    public:
        Triad(T x, U y, V z): m_x{x}, m_y{y}, m_z{z} {}

        void print() const;
        T first();
};

template <typename T, typename U, typename V>
void Triad<T,U,V>::print() const
{
    std::cout << '[' << m_x << ", " << m_y << ", " << m_z << ']';
}

template <typename T, typename U, typename V>
T Triad<T,U,V>::first()
{
    return m_x;
}

#endif // TRIAD_H
