#include <iostream>
#include <stdio.h>

//A palavra reservada virtual serve para realizar o polimorfismo das classes
//é preciso adicionar virtual nos metodos da classe base, logo suas derivadas vão ser obrigadas a ter a implementação do metodo virtual
//p1 = p2; é possivel se ambos forem a classe base!

using namespace std;

class Base {
        private:

        public:
                void Show() {cout << "I am the base class" << endl;};
};

class Derived:: public Base{
        private:

        public:
                void Show() {cout << "I am the derived class" << endl;};
};

int main(int argc, char **argv)
{
        Base *p1 = new Derived;
        p1->Show();

        return 0;
}