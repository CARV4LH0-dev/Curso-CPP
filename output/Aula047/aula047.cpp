// POO, Classes, public, private, métodos (Parte 4)

#include <iostream>
#include "classes.h"

using namespace std;

int main()
{
    Moto *v1 = new Moto();
    Carro *v2 = new Carro();
    Tanque *v3 = new Tanque();

    v1->imp();
    v2->imp();
    v3->imp();

    return 0;
}
