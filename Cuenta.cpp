//
// Created by Usuario on 11/15/2022.
//

#include "Cuenta.h"

Cuenta::Cuenta(int numeroCuenta, string nombreCliente) {
    this->nroCuenta = numeroCuenta;
    this->nombreCliente = nombreCliente;
    this->saldo = 0.0;
}