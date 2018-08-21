#pragma once
#include "Person.h"

class StudentIn: public Person {

public:

	StudentIn(const std::string& name_, const std::string& vorname_, const std::string& matNummer_) :
		Person(name_, vorname_), Matrikelnummer(matNummer_)
	{};

	virtual ~StudentIn() {};

	const std::string& getMatrikelnummer() const
	{
		return Matrikelnummer;
	}

	virtual void toString() const override
	{
		std::cout << "Studentin/in "
			<< Person::getVorname
			<< " "
			<< Person::getName
			<< ", Mat.Nr: "
			<< Matrikelnummer
			<< '\n';
	}

private:
	std::string Matrikelnummer;
};
