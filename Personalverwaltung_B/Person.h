#pragma once

#include <string>

class Person
{
public:
	Person(const std::string& name_, const std::string& personalnummer_);
 
	const std::string& getName() const;
	const std::string& getPersonalnummer() const;

private:
	std::string name;
	std::string personalnummer;
};

