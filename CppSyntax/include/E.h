#ifndef E_H
#define E_H
#include "C.h"

class E : public C
{
    public:
        E()
        {
            std::cout << "Constructor de E" << std::endl;
        }

        
        void sayBye() override
        {
            std::cout << "E->Bye" << std::endl;
        }


};


#endif