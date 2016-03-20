#include "Gestionnaire.h"

template<typename T> Gestionnaire::Gestionnaire()
{}

template<typename T> Gestionnaire::~Gestionnaire()
{}

template<class T> bool Gestionnaire::ajouterElement(T* objet const)
{
	auto it = find(objets_.begin(), objets_.end(), objet);

	if (it == objets_.end()) {
		objets_.push_back(objet);
		return true;
	}
	else
		return false;
}

template<class T> bool Gestionnaire::retirerElement(T* objet const)
{
	auto it = find(objets_.begin(), objets_.end(), objet);

	if (it != objets_.end()) {
		objets_.erase(it);
		return true;
	}
	else
		return false;
}

template<class Predicate> bool Gestionnaire::retirerContenu(Predicate& predicat)
{
	auto it = for_each(objets_.begin(), objets_.end(), objets_.erase(objets_.remove_if(predicat);

	if (it != objets_.end()) {
		return true;
	}
	else
		return false;
}

template<class Predicate, class T> T* Gestionnaire::trouverElement(Predicate& predicat)
{
	auto it = find_if(objets_.begin(), objets_.end(), predicat);
	return it;
}

template<class Predicate, class T>  list<T*> Gestionnaire::trouverContenu(Predicate& predicat)
{
	list<T*> copies;
	copy_if((objets_.begin(), objets_.end(),
		copies.begin(),
		predicat);
	return copies;
}

template<class T> bool Gestionnaire::trouverElement(T& objet const)
{
	return (find(objets_.begin(), objets_.end(), objet) != objets_.end());
}