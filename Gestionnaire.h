#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include <cstdlib>
#include <vector>

using namespace std;

class Gestionnaire
{
public:
	Gestionnaire();
	~Gestionnaire();

	template<typename T> bool ajouterElement(T* objet const);
	template<typename T> bool retirerElement(T* objet const);
	
	template<typename Predicate> bool retirerContenu(Predicate& predicat const);
	template<typename Predicate> bool trouverElement(Predicate& predicat const);
	template<typename Predicate> bool trouverContenu(Predicate& predicat const);

	template<typename T> bool Gestionnaire::trouverElement(T& objet const);

protected:
	template < typename T > vector<T*> objets_;
};

#endif


