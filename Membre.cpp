#include <iostream>
#include <time.h>
#include <math.h>
#include "Membre.hpp"

using namespace std;

Membre::Membre()
{	
	Effacer();
}

Membre::Membre(double t)
{
	_genre = rand() % 2;
	GenererNom();
	
	_pointsVie = 100;
	
	
	if (t == 0)
	{
		_nom = "Che";
		_specialisation = "Che";
		_salaire = 0;
		
		_bCombat = 0/100;
		_bSoins = 0/100;
		_bEnseignement = 0/100;
		_bPilotage = 0/100;
		
		double oc = rand() % 4;
		if (oc < 1)
		{
			_objet = "Pistolet";
			_typeObjet = 1;
		}
		else if (oc < 2)
		{
			_objet = "Kit de premiers soins";
			_typeObjet = 2;
		}
		else if (oc < 3)
		{
			_objet = "Livre d'espagnol";
			_typeObjet = 3;
		}
		else
		{
			_objet = "Moto";
			_typeObjet = 4;
		}
	}
	else if (t < 7)		//1 < t < 12.	6/12 = 50%
	{
		_specialisation = "Soldat";
		_salaire = 1750 + rand() % 175;
		
		_bCombat = 75/100;
		_bSoins = -50/100;
		_bEnseignement = -50/100;
		_bPilotage = 0/100;
		
		_typeObjet = 1;
		
		double os = rand() % 12;
		if (os < 3)
		{
			_objet = "Mitraillette legere";	//3/12 = 25%
		}
		else if (os < 5)
		{
			_objet = "Mitraillette";		//2/12 = 16.67%
		}
		else if (os < 7)
		{
			_objet = "Carabine";			//2/12 = 16.67%
		}
		else if (os < 8)
		{
			_objet = "Fusil a pompe";		//1/12 = 8.33%
		}
		else if (os < 11)
		{
			_objet = "Pistolet";			//3/12 = 25%
		}
		else
		{
			_objet = "Fusil de precision";	//1/12 = 8.33%
		}
	}
	else if (t < 10)		//1 < t < 12.	3/12 = 25%
	{
		_specialisation = "Medecin";
		_salaire = 2000 + rand() % 200;
		
		_bCombat = -50/100;
		_bSoins = 75/100;
		_bEnseignement = 0/100;
		_bPilotage = -50/100;
		
		_typeObjet = 2;
		
		double om = rand() % 6;
		if (om < 1)
		{
			_objet = "Kit Chirurgical";			//1/6 = 16.67%
		}
		else if (om < 4)
		{
			_objet = "Kit de premiers soins";	//3/6 = 50%
		}
		else
		{
			_objet = "Kit pharmaceutique";		//2/6 = 33.33%
		}
	}
	else if (t < 12)		//1 < t < 12.	2/12 = 16.67%
	{
		_specialisation = "Enseignant";
		_salaire = 2750 + rand() % 275;
		
		_bCombat = -50/100;
		_bSoins = 0/100;
		_bEnseignement = 75/100;
		_bPilotage = -50/100;
		
		_typeObjet = 3;
		
		double oe = rand() % 6;
		if (oe < 3)
		{
			_objet = "Livre d'espagnol";		//3/6 = 50%
		}
		else if (oe < 5)
		{
			_objet = "Livre d'economie";		//2/6 = 33.33%
		}
		else
		{
			_objet = "Livre de politique";		//1/6 = 16.67%
		}
	}
	else if (t < 13)		//1 < t < 12.	1/12 = 8.33%
	{
		_specialisation = "Pilote";
		_salaire = 2250 + rand() % 225;
		
		_bCombat = 0/100;
		_bSoins = -50/100;
		_bEnseignement = -50/100;
		_bPilotage = 75/100;
		
		_typeObjet = 4;
		
		double op = rand() % 12;
		if (op < 8)
		{
			_objet = "Moto";				//8/12 = 75%
		}
		else if (op < 11)
		{
			_objet = "Auto pick-up";		//3/12 = 25%
		}
		else
		{
			_objet = "Camion militaire";	//1/12 = 8.33%
		}
	}
}

Membre::~Membre()
{
	
}

void Membre::Afficher()
{
	cout << "Nom: " << _nom << endl << "Points de vie: " << _pointsVie << endl << "Specialisation: " << _specialisation << endl << "Objet: " << _objet << endl << "Salaire: " << _salaire << endl << std::endl;
}

void Membre::Effacer()
{
	_nom = "";
	_genre = 0;
	_pointsVie = 0;
	_specialisation = "";
	_salaire = 0;
	
	_bCombat = 0;
	_bSoins = 0;
	_bEnseignement = 0;
	_bPilotage = 0;
	
	_typeObjet = 0;
	_objet = "";
}

void Membre::GenererNom()
{
	if (_genre == 0)
	{
		_nom = _ePrenomF[rand() % 10];
	}
	else
	{
		_nom = _ePrenomM[rand() % 10];
	}
	
	_nom = _nom + " " + _eNom[rand() % 25];
}
