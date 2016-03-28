#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <vector>
#include "Abonne.h"
class Professeur :
	public Abonne
{
public:
	Professeur();
	Professeur(const std::string& matricule, const std::string& nom, const std::string& prenom, unsigned int age, std::list<std::string> ecoles);
	~Professeur();

	std::list<std::string> obtenirEcole() const;
	void ajouterEcole(std::string const& ecole);
	bool retirerEcole(std::string const& ecole);
	virtual unsigned int obtenirLimiteEmprunt() const;
	// TODO: modifer l'affichage, trie des acteurs en ordre alphabétique inverse
	friend std::ostream & operator<<(std::ostream & o, const Professeur & professeur);

private:
	// TODO: modifier le vector par une list listEcoles_
	std::list<std::string> listEcole_;
};
#endif // !PROFESSEUR_H
