#ifndef Joueur_hpp
#define Joueur_hpp

#include <stdio.h>
#include "Ville.hpp"
#include "Membre.hpp"

using namespace std;

class Joueur
{
	
private:
	Ville *_ville;
	Ville *_derniereVille;
	
	int _argent;
	int _munnitions;
	int _nourriture;
	int _petrole;
	
	Membre _membres[10];
	
public:
	Joueur();
	~Joueur();
	void AfficherMembres();
	int CompterMembres();	//Calcule et retourne le nombre de membres du groupe.
};

#endif
