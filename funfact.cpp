#include <iostream>
using namespace std;

int factorial(int x)
{
	int i;
	long long int factorial=1;

	for(i=1;i<=x;i++)
	{
		factorial=factorial*i;
	}

	return factorial;

}

int main()
{
	int x,fact;

	cout<<"Ingresa el numero del cual quiere saber el factorial"<<endl;

	cin>>x;

	fact=factorial(x);

	cout<<"El factorial del numero dado es: "<<fact<<endl;

	return 0;
}