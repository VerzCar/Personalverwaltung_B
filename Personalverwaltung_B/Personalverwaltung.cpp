#include "stdafx.h"
#include "Personalverwaltung.h"

/*
Personalverwaltung::Personalverwaltung(const std::string& dateiname)
{
	//Falls bereits was in der Datei steht diese Auslesen un in den Vector schreiben
	std::ifstream quelle;
	quelle.open(dateiname);  // Objekt für Eingabestrom
	while (quelle)
	{
		//Hilfsvariablen und zeilenvariable zum auslesen der Datei
		std::string hilfsName, hilfsNummer;
		std::string zeile;
		getline(quelle, zeile);  // Zeile lesen
		if (zeile == "#")
			break;
		hilfsName = zeile;
		getline(quelle, zeile);
		hilfsNummer = zeile;

		//Neues Personenobjekt an den personalvector anhängen
		personal.push_back(Person(hilfsName, hilfsNummer));
	};
	quelle.close(); //Datei wieder schließen

}

//Ein Kommentar um eine Git Änderung im Repo zu sehen


void Personalverwaltung::ausgeben() const
{
	for (const auto& pers : personal)
	{
		std::cout << pers.getName() << '\t';
		std::cout << pers.getPersonalnummer() << '\n';
	}
}

void Personalverwaltung::dialog() const
{
	std::string eingabeSuche;
	do
	{
		std::cout << "Name mit Personalnummer suchen: (x = ENDE)\n";
		std::getline(std::cin, eingabeSuche);
		if (eingabeSuche != "x")
		{
			bool gefunden = false;
			for (const auto& pers : personal)
			{
				if (eingabeSuche == pers.getPersonalnummer())
				{
					std::cout << pers.getName() << '\n';
					gefunden = true;
					break;
				}
			}
			if (!gefunden)
				std::cout << "nicht gefunden!\n";
		}
	} while (eingabeSuche != "x");

}

*/