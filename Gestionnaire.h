#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include <cstdlib>
#include <list>

using namespace std;

template<typename T>

class Gestionnaire
{
public:
	Gestionnaire();
	~Gestionnaire();

	bool ajouterElement(T* objet const);
	bool retirerElement(T* objet const);
	
	template<class Predicate> bool retirerContenu(Predicate& predicat);
	template<class Predicate> T* trouverElement(Predicate& predicat);
	template<class Predicate> list<T*> trouverContenu(Predicate& predicat);

	T* Gestionnaire::trouverElement(T& objet const);

protected:
	list <T*> objets_;
};

#endif


