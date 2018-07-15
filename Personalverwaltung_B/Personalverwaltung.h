//In  dieser Klasse wird die Textdatei geladen und Funktionen f�r das einsehen der Textdatei
//sowie Ausgaben zur Verf�gugn gestellt

#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include "Person.h"

class Personalverwaltung
{
public:
	Personalverwaltung(const std::string& dateiname);

	void ausgeben() const;
	void dialog() const;
private:
	std::vector<Person> personal;
};

