// Personalverwaltung_B.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "Personalverwaltung.h"

using namespace std;


int main()
{
	Personalverwaltung personalverwaltung("daten.txt"); //Konstruktor
	cout << "Gelesene Namen und Personalnummern:\n";
	cout << "eine Änderung";
	personalverwaltung.ausgeben();
	cout << "Eine weiter Änderung";
	personalverwaltung.dialog();
	cout << "Programmende\n";


    return 0;
}

