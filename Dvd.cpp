#include "Dvd.h"

using namespace std;

Dvd::Dvd()
{
}

Dvd::Dvd(const std::string & cote, const std::string & titre, unsigned int annee, unsigned int ageMin, unsigned int nbExemplaires, std::string const & realisateur, std::list<std::string> acteurs) :
ObjetEmpruntable(cote, titre, annee, ageMin, nbExemplaires), realisateur_(realisateur), listActeurs_(acteurs)

{

}


Dvd::~Dvd()
{
}

std::string Dvd::obtenirRealisateur() const
{
	return realisateur_;
}

std::list<std::string> Dvd::obtenirActeur() const
{
	return listActeurs_;
}

void Dvd::modifierRealisateur(std::string const & realisateur)
{
	realisateur_ = realisateur;
}

void Dvd::ajouterActeur(std::string const & acteur)
{
	listActeurs_.push_back(acteur);
}

void Dvd::retirerActeur(std::string const & acteur)
{
	auto it = find(listActeurs_.begin(), listActeurs_.end(), acteur);

	if (it != listActeurs_.end())
		listActeurs_.erase(it);
}


bool Dvd::recherche(const std::string & motsCle) const
{
	bool present = false;
	std::size_t trouverRealisateur = convertirMinuscule(realisateur_).find(convertirMinuscule(motsCle));
	for (int i = 0; i < listActeurs_.size(); i++)
	{
		std::size_t trouveActeur = convertirMinuscule(listActeurs_[i]).find(convertirMinuscule(motsCle));
		present = present || (trouveActeur != string::npos);
	}


	//Utilisation du demasquage pour appeler la méthode de la classe mère
	bool trouve = ObjetEmpruntable::recherche(motsCle) 
		|| present
		|| (trouverRealisateur != string::npos);

	return trouve;
}

ostream & operator<<(ostream & o, const Dvd & dvd)
{
	const ObjetEmpruntable* obj = (&dvd);
	o << "Information sur le Dvd :" << endl;
	o << *obj
		<< " Realisateur : " << dvd.realisateur_
		<< "; Acteurs : ";
	//affichage des acteurs
	// obtention de l'ordre alphabetique inverse

	dvd.listActeurs_.sort;
	dvd.listActeurs_.reverse;

	copy(dvd.listActeurs_.begin(), dvd.listActeurs_.end(),
		ostream_iterator<int>(cout, "\n"));

	return o << endl;
}
