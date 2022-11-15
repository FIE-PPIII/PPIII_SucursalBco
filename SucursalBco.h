//
// Created by Usuario on 11/15/2022.
//

#ifndef PPIII_SUCURSALBCO_SUCURSALBCO_H
#define PPIII_SUCURSALBCO_SUCURSALBCO_H

#include <map>
#include <iostream>
#include "Cuenta.h"

using namespace std;

class SucursalBco {
private:
    static double interesMensual;
    int nroSucursal;
    map<int, Cuenta*> cuentas;

public:
    SucursalBco(int);
    ~SucursalBco();

    void agregarCuenta(Cuenta*);
    void acreditar(int, double);
    void debitar(int, double);
    void totalInteres();

};


#endif //PPIII_SUCURSALBCO_SUCURSALBCO_H
