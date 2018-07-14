#include "stdafx.h"
#include "Person.h"



Person::Person(const std::string& name_, const std::string& personalnummer_) : name(name_), personalnummer(personalnummer_)
{
}


const std::string& Person::getName() const
{
	return name;
}

const std::string& Person::getPersonalnummer() const
{
	return personalnummer;
}
