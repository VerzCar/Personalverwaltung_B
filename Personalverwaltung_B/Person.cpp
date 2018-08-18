#include "stdafx.h"
#include "Person.h"



Person::Person(const std::string& name_, const std::string& vorname_) : name(name_), vorname(vorname_)
{
}


const std::string& Person::getName() const
{
	return name;
}

const std::string& Person::getVorname() const
{
	return vorname;
}
