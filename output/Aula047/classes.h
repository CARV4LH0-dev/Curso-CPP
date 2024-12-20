#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <stdio.h>

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imp();
private:
    int tipo;
    int velMax;
    bool arma;
};

void Veiculo::setTipo(int tp){
    tipo = tp;
}
void Veiculo::setVelMax(int vm){
    velMax = vm;
}
void Veiculo::setArma(bool ar){
    arma = ar;
}
void Veiculo::imp(){
    std::cout << "Tipo do veiculo: " << tipo << std::endl;
    std::cout << "Velocidade Max: " << velMax << std::endl;
    std::cout << "Numero de rodas: " << rodas << std::endl;
    std::cout << "Possui blindagem: " << blind << std::endl;
    std::cout << "Possui armamento: " << arma << std::endl;
    std::cout << "============================================================" << std::endl;
}

class Moto:public Veiculo{
public:
    Moto();
};

Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}

class Carro:public Veiculo{
public:
    Carro();
};

Carro::Carro(){
    vel = 0;
    blind = 1;
    rodas = 4;
    setTipo(2);
    setVelMax(180);
    setArma(false);
}

class Tanque:public Veiculo{
public:
    Tanque();
};

Tanque::Tanque(){
    vel = 0;
    blind = 3;
    rodas = 4;
    setTipo(3);
    setVelMax(50);
    setArma(true);
}

#endif
