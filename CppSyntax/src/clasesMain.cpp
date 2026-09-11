#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"

void f(C& object);


int main(){
    A a;
    A a1{};
    A a2(5,"Holaaa");
    a2.shout();
    std::cout << a2.valuePlusTwo() << std::endl;

    B b;

    D d;
    d.sayHi();

    E e;
    e.sayHi();

    
    f(d);
    f(e);

    C* obj = new E();
    obj->sayBye();
    delete obj;
    obj = new D();
    obj->sayBye();
    delete obj;
}


void f(C& object)
{
    object.sayBye();
}



