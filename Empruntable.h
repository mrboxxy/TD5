#ifndef EMPRUNTABLE.H
#define EMPRUNTABLE.H
#include <cstdlib>
#include <string>
#include "Emprunt.h"
class Empruntable
{
public:
	Empruntable(const std::string& matricule, const std::string& cote) : matricule_(matricule), cote_(cote)	// prend juste matricule et cote
	{
		compteur_ = 0;
	}

	void operator() (Emprunt& emprunt)
	{
		if (emprunt == matricule_ && emprunt == cote_)
		{
			estDejaEmpunter_ = true;
			compteur_++;
		}
	}

private:
	std::string matricule_;
	std::string cote_;
	int compteur_;
	bool estDejaEmpunter_;
};

#endif