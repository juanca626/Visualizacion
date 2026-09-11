#include "A.h"

int A::valuePlusTwo()
{
    return valuePlusOne() + 1;
}

void A::shout()
{
    std::cout << "!!! " << m_word << std::endl;
}

int A::valuePlusOne()
{
    return m_value+1;
}