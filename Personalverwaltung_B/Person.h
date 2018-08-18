//Eine Klasse um Objekte einer Person erstellen zu können

#pragma once

#include <string>

class Person
{
public:
	Person(const std::string& name_, const std::string& vorname_);
 
	const std::string& getName() const;
	const std::string& getVorname() const;

private:
	std::string name;
	std::string vorname;
};

