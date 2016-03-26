#ifndef RECHERCHEOBJETEMPRUNTABLE.H
#define RECHERCHEOBJETEMPRUNTABLE.H
#include <cstdlib>
#include <string>
#include "ObjetEmpruntable.h"
class RechercheObjetEmpruntable
{
public:
	RechercheObjetEmpruntable(std::string& recherche)
	{
		recherche_ = recherche;
	}

	bool operator() (ObjetEmpruntable* objet)
	{
		
		return (objet->recherche(recherche_));
	}

private:
	std::string recherche_;
};

#endif