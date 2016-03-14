#ifndef DVD_H
#define DVD_H
#include "ObjetEmpruntable.h"
#include <vector>

class Dvd :
	public ObjetEmpruntable
{
public:
	Dvd();
	Dvd(const std::string& cote, const std::string& titre, unsigned int annee,
		unsigned int ageMin, unsigned int nbExemplaires, std::string const& realisateur, std::vector<std::string> acteurs);

	virtual ~Dvd();

	std::string obtenirRealisateur() const;
	std::vector<std::string> obtenirActeur() const;

	void modifierRealisateur(std::string const& realisateur);
	void ajouterActeur(std::string const& acteur);
	void retirerActeur(std::string const& acteur);

	//recherche renvoie true si motsCle est pr�sent dans les attributs de type string; false sinon
	virtual bool recherche(const std::string& motsCle) const;
	// TODO: modifer l'affichage, trie des acteurs en ordre alphab�tique inverse
	friend std::ostream& operator<<(std::ostream& o, const Dvd& dvd);

private:
	std::string realisateur_;
	// TODO: modifier le vector par une list listActeurs_
	std::vector<std::string> vecActeurs_;

};
#endif
