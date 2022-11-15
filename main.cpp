#include <iostream>
#include "SucursalBco.h"

using namespace std;

double SucursalBco::interesMensual = 0.05;
int main()
{
    SucursalBco banco = SucursalBco(1);
    banco.agregarCuenta(new Cuenta(1, "Juan"));
    banco.agregarCuenta(new Cuenta(2, "Tomas"));
    banco.acreditar(1, 1000);
    banco.acreditar(2, 700);
    banco.totalInteres();

    return 0;
}
