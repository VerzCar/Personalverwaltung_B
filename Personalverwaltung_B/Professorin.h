#pragma once
#include "Person.h"
class Professorin : public Person 
{

public:
	Professorin(const std::string& name_, const std::string& vorname_, const std::string& lehrgebiet_) :
		Person(name_, vorname_), Lehrgebiet(lehrgebiet_)
	{};

	virtual ~Professorin() {};

	const std::string& getLehrgebiet() const
	{
		return Lehrgebiet;
	}

	virtual void toString() const override
	{
		std::cout << "Prof. "
			<< Person::getVorname
			<< " "
			<< Person::getName
			<< ", Lehrgebiet: "
			<< Lehrgebiet
			<< '\n';
	}

private:
	std::string Lehrgebiet;
};

