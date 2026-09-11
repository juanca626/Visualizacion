#ifndef A_H
#define A_H
#include <iostream>
#include <string>

class A 
{
    public:
        // Constructores
        A()
        {
            std::cout << "A:Constructor sin parámetros" << std::endl;
        }

        A(int value, std::string word) 
        {
            std::cout << "A:Constructor con parámetros" << std::endl;
            m_value = value;
            m_word = word; 
        }

        ~A()
        {
            std::cout << "Me destruyo " << m_value << " " << m_word << std::endl;
        }

        /**
         * @brief Devuelve el valor más dos del objeto A
         * Usa el método privado para sumar uno
         */
        int valuePlusTwo();

        /**
         * Imprimi el valor de la palabra del objeto
         */
        void shout();


    private:
        //Miembros o variables del objeto
        int m_value;
        std::string m_word;

        /**
         * @brief Devuelve el valor más uno
         */
        int valuePlusOne();
        

        

};
#endif
