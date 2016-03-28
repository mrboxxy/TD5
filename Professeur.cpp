#include "Professeur.h"

using namespace std;

Professeur::Professeur() : Abonne()
{

}

Professeur::Professeur(const string& matricule, const string& nom, const string& prenom, unsigned int age, list<string> ecoles) :
Abonne(matricule, nom, prenom, age), listEcole_(ecoles)
{

}
Professeur::~Professeur()
{

}

list<string> Professeur::obtenirEcole() const
{
	return listEcole_;
}

void Professeur::ajouterEcole(std::string const & ecole)
{
	auto it = find(listEcole_.begin(), listEcole_.end(), ecole);

	if (it != listEcole_.end()){
		listEcole_.push_back(ecole);
	}
}

bool Professeur::retirerEcole(std::string const & ecole)
{
	auto it = find(listEcole_.begin(), listEcole_.end(), ecole);

	if (it != listEcole_.end()){
		listEcole_.erase(it);
		return true;
	}
	else
		return false;
}

unsigned int Professeur::obtenirLimiteEmprunt() const
{
	return Abonne::obtenirLimiteEmprunt()*listEcole_.size();
}


ostream & operator<<(ostream & o, const Professeur & professeur)
{
	const Abonne* ab = &professeur;
	o << *ab 
	<< "Limite d'emprunts : " << professeur.obtenirLimiteEmprunt() << endl;;
		

	o << "LISTE DES ECOLES : " ;

	// Affichage de la liste des ecoles
	// Ordre alphabetique inverse de la liste

	professeur.listEcole_.sort;
	professeur.listEcole_.reverse;

	for (size_t i = 0; i < professeur.listEcole_.size(); i++)
	{
		o << professeur.listEcole_[i] << "; ";
	}
	o << endl;
	return o;
}