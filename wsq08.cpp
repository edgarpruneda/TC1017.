#include <iostream>
using namespace std;


int LaSuma(int x, int y)

	{
		int respuesta = x + y ;

		return respuesta;
	}

int LaResta(int x, int y )
	
	{
		int respuesta = x - y ;

		return respuesta;
	}

int LaMultiplicacion(int x, int y )
	
	{
		int respuesta = x * y ;

		return respuesta;
	}

int LaDivision(int x, int y )
	
	{
		int respuesta = x / y ;

		return respuesta;
	}

int ElResiduo(int x, int y )

	{
		int respuesta = x % y ;

		return respuesta;
	}

int main()

	{
		int primero, segundo;

		cout<<"Este programa realiza operaciones simples con dos numeros enteros"<<endl;
		cout<<"Ingresa el primer numero: ";
		cin>>primero;
		cout<<"Ingresa el segundo segundo: ";
		cin>>segundo;

		cout<<"Los numeros que me diste son " << primero << " y " << segundo << endl;

		int suma = LaSuma(primero,segundo);

		int resta = LaResta(primero,segundo);

		int multiplicacion = LaMultiplicacion(primero,segundo);

		int division = LaDivision(primero,segundo);

		int residuo = ElResiduo(primero,segundo);

		cout<< "El resultado de la suma de los dos valores es "<<suma<<endl;

		cout<< "El resultado de " <<primero<< " menos " <<segundo<< " es " <<resta << endl;

		cout<< "El resultado de la multiplicacion de los dos valores es " <<multiplicacion << endl;

		cout<< "El resultado de la division de " <<primero<< " entre " <<segundo<< " es " <<division << endl;

		cout<< "El residuo de la division es " <<residuo << endl;


		return 0;
	}