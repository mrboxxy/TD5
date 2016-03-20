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

	template<class T> bool ajouterElement(T* objet const);
	template<class T> bool retirerElement(T* objet const);
	
	template<class Predicate> bool retirerContenu(Predicate& predicat);
	template<class Predicate, class T> T* trouverElement(Predicate& predicat);
	template<class Predicate, class T>  list<T*> trouverContenu(Predicate& predicat);

	template<class T> T* Gestionnaire::trouverElement(T& objet const);

protected:
	list <T*> objets_;
};

#endif


