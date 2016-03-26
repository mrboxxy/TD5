#ifndef TRIERPARTITRE.H
#define TRIERPARTITRE.H
#include <cstdlib>
#include <string>
#include "ObjetEmpruntable.h"

class TrieParTitre
{
public:
	TrieParTitre()
	{
	}

	bool operator() (ObjetEmpruntable* objet1, ObjetEmpruntable* objet2)
	{
		std::string name1 = objet1->obtenirTitre;
		std::string name2 = objet2->obtenirTitre;

		if (name1.compare(name2) < 0)
			return true;
		else
			return false;
	}

};

#endif