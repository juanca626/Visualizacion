
#include <iostream>
#include <string>
#include <vector>

void f(int val);
void f1(int& val);

int main() {
    std::cout << "Enteros" << '\n' << std::endl;
    int x(7);
    int y{9};
    int z = 8;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    // flotantes
    std::cout << "Flotantes" << '\n' << std::endl;
    float xf = 0.54f;
    std::cout << xf<< std::endl;

    // Dobles
    std::cout << "Dobles" << '\n' << std::endl;
    double yd = 0.456;
    std::cout << yd << std::endl;

    // Booleanos
    std::cout << "Booleanos" << '\n' << std::endl;
    bool isTrue = false;
    std::cout << isTrue << std::endl;

    // Caracteres
    std::cout << "Caracteres" << '\n' << std::endl;
    char p = 'p';
    std::cout << p << std::endl;

    //Strings
    std::cout << "Strings" << '\n' << std::endl;
    char s[] = "Hola";
    std::string message = "Holaaa";
    std::cout << s << std::endl;
    std::cout << message << std::endl;

    // tipo automático
    auto m = "hoooo";
    std::cout << m<< std::endl;
    std::cout << typeid(m).name() << std::endl;//Pointer constant character

    // Arreglos y vectores
    std::cout << "Arreglos y vectores" << '\n' << std::endl;
    float puntos[] = {0.0,1.0,2.0};
    float colores[3];
    colores[0] = 4.0;
    colores[1] = 2.f;
    colores[2] = 0.0f;
    std::cout << puntos << std::endl;
    //std::cout << colores << std::endl;

    //std::cout << puntos[3] << std::endl;
    
    std::vector<float> vertices = {0.0,1.0,2.0};
    vertices.push_back(3.0);
    std::cout << vertices[0] << std::endl;

    // Constantes
    std::cout << "Constantes" << '\n' << std::endl;
    const int const_x = 4;
    std::cout << const_x << std::endl;
    //const_x = 6;

    // Referencias y apuntadores
    std::cout << "Referencias" << '\n' << std::endl;
    int& ref1 = x;
    std::cout << ref1 << std::endl;
    std::cout << x << std::endl;
    std::cout << &ref1 << std::endl;
    std::cout << &x << std::endl;

    ref1 = 6;
    std::cout << ref1 << std::endl;
    std::cout << x << std::endl;

    ref1 = y;
    y = 30;
    std::cout << ref1 << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    //int& ref = 4;
    std::cout << "\n Apuntadores" << '\n' << std::endl;

    int* pointer = &z;
    std::cout << pointer << std::endl;
    std::cout << *pointer << std::endl;

    pointer = &y;
    std::cout << *pointer << std::endl;
    std::cout << z << std::endl;
    std::cout << y << std::endl;

    std::cout << "\n Cosas raras \n" << std::endl;
    std::cout << pointer << std::endl;
    std::cout << &pointer << std::endl;



    int*& ref2 = pointer;
    std::cout << ref2 << std::endl;
    std::cout << *ref2 << std::endl;
    std::cout << &ref2 << std::endl;


    std::cout << "\n" << std::endl;

    int*&& ref3 = &*pointer;
    std::cout << ref3 << std::endl;
    std::cout << *ref3 << std::endl;
    std::cout << &ref3 << std::endl;

    std::cout << "\n Paso por valor y referencia \n" << std::endl;
    int val = 5;
    std::cout << &val <<std::endl;

    f(val);
    std::cout << val << std::endl;

    f1(val);
    std::cout << val << std::endl;

}

void f(int val){
    std::cout << &val<<std::endl;
    val = val+1;
    std::cout << val<<std::endl;
}

void f1(int& val){
    std::cout << &val<<std::endl;
    val = val+1;
    std::cout << val<<std::endl;
}