#include "Gestionnaire.h"

Gestionnaire::Gestionnaire()
{}

Gestionnaire::~Gestionnaire()
{}

template<typename T> bool Gestionnaire::ajouterElement(T* objet const)
{}

template<typename T> bool Gestionnaire::retirerElement(T* objet const)
{}

template<typename Predicate> bool Gestionnaire::retirerContenu(Predicate& predicat const)
{}

template<typename Predicate> bool Gestionnaire::trouverElement(Predicate& predicat const)
{}

template<typename Predicate> bool Gestionnaire::trouverContenu(Predicate& predicat const)
{}

template<typename T> bool Gestionnaire::trouverElement(T& objet const)
{}