//Eine Klasse um Objekte einer Person erstellen zu können

#pragma once
#include "stdafx.h"
#include <string>

class Person
{
public:

	Person(const std::string& name_, const std::string& vorname_) : name(name_), vorname(vorname_)
	{}

	virtual ~Person() = default;

	const std::string& getName() const
	{
		return name;
	}

	const std::string& getVorname() const
	{
		return vorname;
	}

	virtual std::string toString() const = 0;

private:
	std::string name;
	std::string vorname;
};

inline std::string Person::toString() const
{
	return vorname + " " + name;
}


