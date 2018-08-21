#pragma once
#include "Person.h"

class StudentIn: public Person {

public:

	StudentIn(const std::string& name_, const std::string& vorname_, const std::string& matNummer_) :
		Person(name_, vorname_), Matrikelnummer(matNummer_)
	{};

	~StudentIn() {};

	const std::string& getMatrikelnummer() const
	{
		return Matrikelnummer;
	}

	virtual std::string toString() const override
	{
		return ("Studentin/in " + Person::toString() + " " + Matrikelnummer);
	}

private:
	std::string Matrikelnummer;
};
