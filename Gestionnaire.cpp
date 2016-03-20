#include "Gestionnaire.h"

template<typename T> Gestionnaire<T>::Gestionnaire()
{}

template<typename T> Gestionnaire<T>::~Gestionnaire()
{}

template<typename T> bool Gestionnaire<T>::ajouterElement(T* objet const)
{
	auto it = find(objets_.begin(), objets_.end(), objet);

	if (it == objets_.end()) {
		objets_.push_back(objet);
		return true;
	}
	else
		return false;
}

template<typename T> bool Gestionnaire<T>::retirerElement(T* objet const)
{
	auto it = find(objets_.begin(), objets_.end(), objet);

	if (it != objets_.end()) {
		objets_.erase(it);
		return true;
	}
	else
		return false;
}

template<class Predicate> bool Gestionnaire<Predicate>::retirerContenu(Predicate& predicat)
{
	auto it = for_each(objets_.begin(), objets_.end(), objets_.erase(objets_.remove_if(predicat);

	if (it != objets_.end()) {
		return true;
	}
	else
		return false;
}

template<class Predicate, typename T> T* Gestionnaire<Predicate>::trouverElement(Predicate& predicat)
{
	auto it = find_if(objets_.begin(), objets_.end(), predicat);
	return it;
}

template<class Predicate, typename T>  list<T*> Gestionnaire<T>::trouverContenu(Predicate& predicat)
{
	list<T*> copies;
	copy_if((objets_.begin(), objets_.end(),
		copies.begin(),
		predicat);
	return copies;
}

template<typename T> bool Gestionnaire<T>::trouverElement(T& objet const)
{
	return (find(objets_.begin(), objets_.end(), objet) != objets_.end());
}