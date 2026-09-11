#ifndef D_H
#define D_H
#include "C.h"

class D : public C
{
    public:
        D()
        {
            std::cout << "Constructor D" << std::endl;
        }

        void sayHi() override;

        void sayBye() override;

};


#endif