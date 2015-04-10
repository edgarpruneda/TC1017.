#include <iostream>
using namespace std;

int mcd(int a, int b)
{
	int res=1;

	for(int i=1; i<=a;i++)
	{
		if((a%i==0) && (b%i==0))
		{
			res = i;
		}
	} return res;
}

int main()
{
	int a, b, mcdd;

	cout<<"Ingresa el primer numero"<<endl;

	cin>>a;

	cout<<"Ingresa el segundo numero"<<endl;

	cin>>b;

	mcdd = mcd(a,b);

	cout<<"El maximo comun denominador de esos dos numeros es: "<<mcdd<<endl;

	return 0;


}