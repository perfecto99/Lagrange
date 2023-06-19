#include <iostream>
#include <conio.h>
#include <Interpolacion.hpp>

using namespace std;


int main () //Menu general de usuario
{
	Interpolation naranja;
	system("color 71");//Color de interfas
	
	int s;//Valores para registrar el menu
	
	cout<<"\nBien venido usuario \n";
	
	while (true)
	{
	//Aqui se le pregunta al usuario por el modo a operar
	cout<<"\nSeleccione el grado de la operacion a \nrealizar *utilise solo numeros*:";
	cout<<"\n(1) 1er Grado \n(2) 2do Grado \n(3) 3er Grado\n(4)Salir de progrma\n Seleccion :";
	cin>>s;
	
	//Menu para acceder a las operaciones

	switch(s)
		{
			case 1: //Primer grado de funcion
				naranja.PG();
			break;
			case 2: //Segundo grado
				naranja.SG();
			break;
			case 3: //Tercer grado
				naranja.TG();
			break;
			case 4:
				// Terminar programa
				cout<<"\n =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n";
				cout<<"\n\nEstas saliendo de programa  ";
				cout<<"\n\nPrecione una tecla 2 veces  ";
				getch();
				return 0;
			break;
			default: //No ecribio una tecla valida
				cout<<"\n No ha escogido una opcion valida ";	
			break;
				
		}
	}
}


