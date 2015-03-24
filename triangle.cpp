#include <iostream>
using namespace std;

void ImprimirT(int n)
{
	for(int i=0; i<n; i++)
	
	{
		cout<<"T";
		
	}

	cout<<endl;

}

void Triangulo1(int n)
{

	for(unsigned int i=0;i<=n;i++)
	{
		ImprimirT(i);
		
	}

}

void Triangulo2(int n)
{
	for(unsigned int i=n-1;i>=1;i--)
	{
		ImprimirT(i);
	}
}

int main()

{
	int n;

	cout<<"Ingresa el ancho del triangulo: ";

	cin>>n;

	Triangulo1(n);
	Triangulo2(n);



	return 0;
}