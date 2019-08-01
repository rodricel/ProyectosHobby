#include "MyForm.h"
#include<fstream>
#include <ctime>
#include<string>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
void main() {
	time_t ahora = time(0);
	tm* ahorita = localtime(&ahora);
	int dia=ahorita->tm_mday, mes=ahorita->tm_mon, anio=ahorita->tm_year;
	int hini=ahorita->tm_hour, mini = ahorita->tm_min, sini= ahorita->tm_sec;
	Application::EnableVisualStyles();
	Application::Run(gcnew(RegistradorDeTiempo::MyForm));
	time_t fin = time(0);
	tm* finalito = localtime(&fin);

	int hfin= finalito->tm_hour, mfin = finalito->tm_min, sfin = finalito->tm_sec;
	String^ linea1 = dia + "/" + (1+mes) + "/" + (1900+anio)+":        ";
	String^ linea2 =linea1+ (hini) +":" + ( mini) + ":" + (sini)+"-"+( hfin) + ":" + (mfin) + ":" + (sfin) ;
	fstream archivo; archivo.open("registro.txt", ios::app);
	char* escritura = new char[linea2->Length+1];
	for (int i = 0; i < linea2->Length; i++)
	{
		escritura[i] = linea2[i];
	}
	escritura[linea2->Length] = '\0';
	archivo<<escritura<<endl;

}

