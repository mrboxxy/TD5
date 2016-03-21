#ifndef FONCTEURS_H
#define FONCTEURS_H
#include <cstdlib>
#include <string>
#include "Bibliotheque.h"

template <class P>
class MemeObjet
{
public:
	MemeObjet(P* attribut) : attribut_(attribut)
	{}

	template <class T> bool operator() (T& objet const)
	{
		return (*objet == *attribut_);
	}

private:
	P* attribut_;
};


class Empruntable
{
public:
	Empruntable(std::string matricule) : matricule_(matricule)
	{}

	void operator() ()
	{
	}

private:
	std::string matricule_;
	std::string cote_;
	int compteur_;
	bool estEmpruntable_;
};


class RechercheObjetEmpruntable
{
public:
	RechercheObjetEmpruntable(std::string str) : str_(str)
	{}

	void operator() ()
	{}

private:
	std::string str_;
};


class DetruireEmprunt
{
public:
	DetruireEmprunt(std::string str) : str_(str)
	{}

	void operator() ()
	{}

private:
	std::string str_;
};


class TrieParTitre
{
public:
	TrieParTitre(std::string str) : str_(str)
	{}

	void operator() ()
	{}

private:
	std::string str_;
};

#endif