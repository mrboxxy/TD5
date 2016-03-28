#ifndef RECHERCHEOBJETEMPRUNTABLE_H
#define RECHERCHEOBJETEMPRUNTABLE_H
#include <cstdlib>
#include <string>
#include <algorithm>
#include "ObjetEmpruntable.h"
class RechercheObjetEmpruntable
{
public:
	RechercheObjetEmpruntable(std::string& recherche)
	{
		std::transform(recherche.begin(), recherche.end(), recherche_.begin(), ::tolower);
	}

	bool operator() (ObjetEmpruntable* objet)
	{
		
		return (objet->recherche(recherche_));
	}

private:
	std::string recherche_;
};

#endif