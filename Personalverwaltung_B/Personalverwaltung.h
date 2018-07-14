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

