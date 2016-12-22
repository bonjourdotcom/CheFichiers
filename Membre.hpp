#ifndef Membre_hpp
#define Membre_hpp

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Membre
{
public:
	string _nom;			//Genere aleatoirement.
	int _genre;					//0: Feminin, 1: Masculin.
	int _pointsVie;				//Points de vie sur 100. A 0, le membre meurt.
	string _specialisation;//"", "Che", "Soldat", "Medecin", "Enseignant", "Pilote".
	int _salaire;				//Che = 0, Soldat = 1750, Medecin = 2000, Enseignant = 2750, Pilote = 2250.
	
	double _bCombat;		//Pourcentage de bonus pour chaque domaine
	double _bSoins;			//
	double _bEnseignement;	//
	double _bPilotage;		//
	
	int _typeObjet;		//0: Aucun. 1: Arme a feu. 2: Kit medical. 3: Livre. 4: Vehicule
	string _objet; //Possede un objet parmis 15 types, +1 pour aucun objet. "", "Mitraillette legere", "Mitraillette", "Carabine", "Fusil a pompe", "Pistolet", "Fusil de precision", "Kit Chirurgical", "Kit de premiers soins", "Kit pharmaceutique", "Livre d'espagnol", "Livre d'economie", "Livre de politique", "Moto", "Auto pick-up", "Camion militaire".
	
	string _ePrenomF[10] = {"Ariana", "Catarina", "Cecilia", "Fabiana", "Guadalupe", "Isabel", "Maria", "Paola", "Pilar", "Soledad"};
	string _ePrenomM[10] = {"Alejandro", "Alonzo", "Antonio", "Benito", "Diego", "Emmanuel", "Jorge", "Juan", "Leandro", "Rodrigo"};
	std::string _eNom [46] = {"Abasto", "Agramonte", "Alvadaro", "Amengual", "Aparicio", "Barrueco", "Berganza", "Berrocal", "Botin", "Cadaval", "Campos", "Carita", "Carvallo", "Collazo", "Costa", "Davalos", "Elvira", "Franco", "Fernandino", "Ferrant", "Galvez", "Garcia", "Gonzalez", "Hurtado", "Illescas", "Lopez", "Mariano", "Magrina", "Martinez", "Montenegro", "Montes", "Murillo", "Navarro", "Ocampo", "Pareja", "Pinion", "Pinto", "Quesada", "Romero", "Saez", "Saenz", "Sancho", "Sarmiento", "Tenorio", "Valerio", "Velazquez"};
	
	Membre();
	Membre(double);	//Selon le type
	~Membre();
	void Afficher();
	void Effacer();
	void GenererNom();
};

#endif
