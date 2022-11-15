//
// Created by Usuario on 11/15/2022.
//

#ifndef BASE_CPP_CUENTA_H
#define BASE_CPP_CUENTA_H

#include <string>

using namespace std;

class Cuenta {
private:
    int nroCuenta;
    string nombreCliente;
    double saldo;

public:
    Cuenta(int, string);
    ~Cuenta() {}

    int getNroCuenta() const;
    string getNombreCliente() const;
    double getSaldo() const;


    void setSaldo(double);

};

inline int Cuenta::getNroCuenta() const {
    return this->nroCuenta;
}

inline string Cuenta::getNombreCliente() const {
    return this->nombreCliente;
}

inline double Cuenta::getSaldo() const{
    return this->saldo;
}

inline void Cuenta::setSaldo(double monto) {
    this->saldo = monto;
}


#endif //BASE_CPP_CUENTA_H
