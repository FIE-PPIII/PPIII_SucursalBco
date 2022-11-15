//
// Created by Usuario on 11/15/2022.
//

#include "SucursalBco.h"

SucursalBco::SucursalBco(int numeroSucursal) {
    this->nroSucursal= numeroSucursal;
}

SucursalBco::~SucursalBco() {
    for (map<int, Cuenta*>::iterator it = this->cuentas.begin(); it != this->cuentas.end(); it++){
        delete (it->second);
    }
    this->cuentas.clear();
}

void SucursalBco::agregarCuenta(Cuenta * nuevaCuenta) {
    this->cuentas.insert(pair<int, Cuenta*>(nuevaCuenta->getNroCuenta(), nuevaCuenta));
}

void SucursalBco::acreditar(int nroCuenta, double monto) {
    Cuenta* aux = this->cuentas.at(nroCuenta);
    aux->setSaldo(aux->getSaldo() + monto);
}

void SucursalBco::debitar(int nroCuenta, double monto) {
    this->acreditar(nroCuenta, -monto);
}

void SucursalBco::totalInteres() {
    cout<<"Sucursal: "<<this->nroSucursal<<endl;
    double interesPagado = 0.0;
    for (map<int, Cuenta*>::iterator it = this->cuentas.begin(); it != this->cuentas.end(); it++) {
        cout<<"cuenta nro: "<<(it->second->getNroCuenta())<<". saldo inicial $";
        double monto = it->second->getSaldo();
        cout<<monto<<". interes $";
        double interes = monto * this->interesMensual;
        it->second->setSaldo(monto + interes);
        cout<<interes<<". saldo final $"<<(it->second->getSaldo())<<endl;
        interesPagado += interes;
    }
    cout<<"Total intereses pagados por sucursal "<<this->nroSucursal<<": $"<<interesPagado<<endl<<endl;
}