#include <iostream>

using namespace std;

int main()

{
	int numeromenor, numeromayor, suma=0, acumulador=0;

	cout << "Voy a calcular la suma de numeros enteros de el rango que me des"<< endl;

	cout << "Ingresa el numero menor del rango" << endl;

	cin >> numeromenor;

	cout << "Ingresa el numero mayor del rango" << endl;

	cin >> numeromayor;

	suma = suma + numeromenor;

    do
    	{
    	

    	acumulador = acumulador + suma;

    	suma = suma + 1;

    	}while (suma<=numeromayor);

    cout<<"La suma de los numeros entre " <<numeromenor<<" y "<<numeromayor<<" es: "<<acumulador<<endl;

    return 0;

	

}