#ifndef C_H
#define C_H
#include <iostream>

class C
{
    public:
        C()
        {
            std::cout<< "Constructor de C"<< std::endl;
        }

        virtual ~C() = default;

        virtual void sayHi()
        {
            std::cout<< "C->HI"<< std::endl;
        }

        virtual void sayBye() = 0;
};

#endif