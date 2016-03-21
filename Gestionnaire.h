#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include <cstdlib>
#include <list>
#include <algorithm>

using namespace std;

template<typename T>

class Gestionnaire
{
public:
	Gestionnaire();
	~Gestionnaire();

	bool ajouterElement(T* objet);
	bool retirerElement(T* objet);
	bool trouverElement(T& objet);
	
	template<typename Predicate>
	bool retirerContenu(Predicate& predicat);
	template<typename Predicate>
	T* trouverElement(Predicate& predicat);
	template<typename Predicate>
	list<T*> trouverContenu(Predicate& predicat);


private:
	list <T*> objets_;
};
template<typename T> Gestionnaire<T>::Gestionnaire()
{}

template<typename T>
Gestionnaire<T>::~Gestionnaire()
{}

template<typename T>
bool Gestionnaire<T>::ajouterElement(T* objet)
{
	auto it = find(objets_.begin(), objets_.end(), objet);

	if (it == objets_.end()) {
		objets_.push_back(objet);
		return true;
	}
	else
		return false;
}

template<typename T>
bool Gestionnaire<T>::retirerElement(T* objet)
{
	auto it = find(objets_.begin(), objets_.end(), objet);

	if (it != objets_.end()) {
		objets_.erase(it);
		return true;
	}
	else
		return false;
}
template<typename T>
template<typename Predicate>
bool Gestionnaire<T>::retirerContenu(Predicate& predicat)
{
	int taille = objets_.size();
	objets_.remove_if(predicat);
	int nouvelleTaille = objets_.size();
	if (taille == nouvelleTaille)
		return false;
	else
		return true;
}

template<typename T>
template<typename Predicate>
T* Gestionnaire<T>::trouverElement(Predicate& predicat)
{
	auto it = find_if(objets_.begin(), objets_.end(), predicat);
	if (it == objets_.end())
	{
		return nullptr;
	}
	else
		return *it;
}

template<typename T>
template<typename Predicate>
list<T*> Gestionnaire<T>::trouverContenu(Predicate& predicat)
{
	list<T*> copies;
	int size = objets_.size();
	copies.resize(size);
	auto it = copy_if(objets_.begin(), objets_.end(),
		copies.begin(),
		predicat);
	copies.resize(distance(copies.begin(), it));	
	return copies;
}

template<typename T>
bool Gestionnaire<T>::trouverElement(T& objet)
{
	return (find(objets_.begin(), objets_.end(), objet) != objets_.end());
}
#endif


