#include "cuentabancaria.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	CuentaBancaria miCuenta("A-480920", "Jonathan Joestar", 2900.00);
	cout << "Titutar:  " << miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta:  " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	CuentaBancaria cuentaAmigo("C-165426", "Arale Guitierrez", 784661.00);
	cout << "Titutar:  " << cuentaAmigo.getNombreTitular() << endl;
	cout << "# Cuenta:  " << cuentaAmigo.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaAmigo.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	CuentaBancaria cuentaNoValida("A-354698", "John Cena", -500.00);
	cout << "Titutar:  " << cuentaNoValida.getNombreTitular() << endl;
	cout << "# Cuenta:  " << cuentaNoValida.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaNoValida.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	cout << "Quiero retirar $84 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(84);
	cout << "Saldo luego de la operacion: $ " << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	cout << "Quiero retirar $3500 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(3500);
	cout << "Saldo luego de la operacion: $ " << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	cout << "Quiero retirar -$725 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.retirar(-725);
	cout << "Saldo luego de la operacion: $ " << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	cout << "Quiero depositar $125000 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(125000);
	cout << "Saldo luego de la operacion: $ " << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	
	cout << "Quiero depositar -$5000 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $ " << miCuenta.getSaldo() << endl;
	miCuenta.depositar(-5000);
	cout << "Saldo luego de la operacion: $ " << miCuenta.getSaldo() << endl;
	cout << "--------------------------------------------------" << endl;
	
	return 0;
}
