#ifndef B_H
#define B_H

#include <iostream>
#include "A.h"

class B 
{
    private:
        A a;
        const int value;
    
    public:
        /*B()
        {
            //value =5;
            std::cout<< "B: Constructor sin parámetros" << std::endl;
        }*/

        //Comentar constructor sin parámetros de A
        
        B(): a{5,"adioos"},value{7}
        {
            //value = 5;
            std::cout<< "B: Constructor con parámetros" << std::endl;
        }
        

};
#endif