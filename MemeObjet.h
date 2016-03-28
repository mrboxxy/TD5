#ifndef MEMEOBJET_H
#define MEMEOBJET_H
#include <cstdlib>
#include <string>
#include "Emprunt.h"

template <typename T, typename P>
class MemeObjet
{
public:
	MemeObjet(P* attribut);

	bool operator() (T& objet);
private:
	P* attribut_;
};
template <typename T, typename P>
MemeObjet<T,P>::MemeObjet(P* attribut) : attribut_(attribut)
{}

template <typename T, typename P>
bool MemeObjet<T, P>::operator() (T& objet)
{
	return (*objet == *attribut_);
}

#endif