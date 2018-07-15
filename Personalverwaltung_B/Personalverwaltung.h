//In  dieser Klasse wird die Textdatei geladen und Funktionen für das einsehen der Textdatei
//sowie Ausgaben zur Verfügugn gestellt

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

