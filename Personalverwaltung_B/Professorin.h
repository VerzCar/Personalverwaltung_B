#pragma once
#include "Person.h"
class Professorin : public Person 
{

public:
	Professorin(const std::string& name_, const std::string& vorname_, const std::string& lehrgebiet_) :
		Person(name_, vorname_), Lehrgebiet(lehrgebiet_)
	{};

	~Professorin() {};


	const std::string& getLehrgebiet() const
	{
		return Lehrgebiet;
	}

	virtual std::string toString() const override
	{
		return ("Prof. " + Person::toString() + " " + Lehrgebiet);
	}

private:
	std::string Lehrgebiet;
};

