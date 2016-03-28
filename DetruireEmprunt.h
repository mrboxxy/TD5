#ifndef DETRUIREEMPRUNT_H
#define DETRUIREEMPRUNT_H
#include <cstdlib>
#include <string>
#include "Emprunt.h"
#include "Gestionnaire.h"

class DetruireEmprunt
{
public:
	DetruireEmprunt(Gestionnaire <Emprunt*> mesEmprunt)
	{
		mesEmprunt_ = mesEmprunt;
	}

	bool operator() ()
	{
		mesEmprunt_.retirerContenu(pred);
	}

private:
	bool pred() 
	{
		return true;
	}
	Gestionnaire <Emprunt*> mesEmprunt_;
};

#endif