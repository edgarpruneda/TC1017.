

 #include <iostream> 
 using namespace std;

  

 int main () 
 {

 int gradosf,gradosc;

 	cout << "Ingresa la temperatura en grados Fahrenheit" << endl;

 	cin >>gradosf;

 	gradosc=5*(gradosf-32)/9;

 	cout << gradosf << " grados Fahrenheit equivalen a " << gradosc << " grados Celsius" << endl;

if (gradosc<100)
	{
	cout<< "El agua no hervirá a esa temperatura bajo condiciones normales"<<endl;
	}
else 
	{
	cout<< "El agua hervirá a esa temerpatura bajo condiciones normales"<<endl;
	}
	 	

 
 return 0;
 }