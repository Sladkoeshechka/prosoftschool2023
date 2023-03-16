#ifndef B_H
#define B_H

class A;

struct B
{
    B(int a, int b)
       : m_a(a)
       , m_b(b)
    {}

    int m_a;
    int m_b;
};

#endif // B_H
