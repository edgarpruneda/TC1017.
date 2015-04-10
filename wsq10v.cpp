#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>


using namespace std;



void fillvector(vector<float>& a)
{
	cout<<"Ingresa elementos al vector(ingresa -1 para detenerte)"<<endl;

		float n;

		cin>>n;
	

while(n != -1)
	{
		a.push_back(n);

		cin>>n;
	}	
	
}

void printvector(const vector<float>& a)
{
	cout<<"Vector: ";

	for(unsigned int i = 0; i<a.size(); i++)
	{
		cout<<a[i]<<"  ";
	}

}

void totalvector(vector<float>&a)
{
	float sum=0.0;
	sum=accumulate(a.begin(),a.end(),0.0);
	cout<<"El valor total de la suma de los elementos en el vector es: "<<sum<<endl;
	
}

void promediovector(vector<float>&a)
{
	float sum=0.0, prom;
	sum=accumulate(a.begin(),a.end(),0.0);

	prom= sum/a.size();

	cout<<"El promedio de los elementos en el vector es: "<<prom<<endl;

}
void stdevvector(vector<float>&a)
{
	float sum=accumulate(a.begin(),a.end(),0.0);
	float prom = sum/a.size();
	float acumulador = 0;
	for(int i=0;i<a.size();i++)
	{
		acumulador = acumulador + (a[i]-prom)*(a[i]-prom);
	}
	float stdev = sqrt(acumulador/a.size());

	cout<<"La desviacion standard de los elementos del vector es: "<<stdev<<endl;

}




int main()
	{
		vector<float> myvector;			

		fillvector(myvector);

		printvector(myvector);
		cout<<endl;
		totalvector(myvector);
		cout<<endl;
		promediovector(myvector);
		cout<<endl;
		stdevvector(myvector);
		
		return 0;
	}


