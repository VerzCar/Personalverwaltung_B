// Personalverwaltung_B.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "Personalverwaltung.h"
#include "Person.h"
#include "StudentIn.h"
#include "Professorin.h"


using namespace std;


int main()
{
	vector<Person*> diePerson;
	diePerson.push_back(new StudentIn("Hans", "Wurst", "123456"));
	diePerson.push_back(new Professorin("Peter", "Sepp", "Kaufmann"));
	diePerson.push_back(new StudentIn("Sarah", "Conner", "666"));

	for (auto personPtr : diePerson)
	{
		cout << personPtr->getVorname() << '\n';
	}

	for (auto personPtr : diePerson)
	{
		 cout << personPtr->toString() << '\n';
	}

	//! Freigabe
	for (auto personPtr : diePerson)
	{
		delete personPtr;
	}
	

    return 0;
}

