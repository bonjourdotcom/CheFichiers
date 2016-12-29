#include <iostream>
#include <iomanip>
#include "Partie.hpp"
#include "Ville.hpp"
#include "Membre.hpp"

using namespace std;

Partie::Partie()
{
	for (int i = 0; i < 56; i++)
	{
		_villesPays[i]._nom = _infoArgentine[i][0];
		_villesPays[i]._population = stoi(_infoArgentine[i][1]);
		
		for (int j = 0; j < 4; j++)
		{
			//_villesPays[i]._reliees[j] = _infoArgentine[i][j];
		}
	}
}

Partie::~Partie()
{
	
}

void Partie::CommencerPartie()
{
	_joueur._ville = &_villesPays[0];
	
	cout << "Argent: " << _joueur._argent << endl << endl;
	_joueur.AfficherMembres();
	
	int choix = 0, n = 0, rations = 0, aRations = 0, aMunnitions = 0, aPetrole = 0;
	double pRations = 0, pMunnitions = 0, pPetrole = 0;
	
	do
	{
		n = _joueur.CompterMembres();
		
		aRations = rand() % 50;
		aMunnitions = rand() % 100;
		aPetrole = rand() % 50;
		
		pRations = ((rand() + 1) % 80) / 10;
		pMunnitions = ((rand() + 1) % 50) / 10;
		pPetrole = ((rand() + 1) % 20) / 10;
		
		do
		{
			cout << "Le groupe est a " << _joueur._ville->_nom << endl << "Que voulez-vous faire?" << endl << "1. Acheter/Vendre" << endl << "2. Travailler pour la journee" << endl << "3. Se preparer pour la nuit" << endl;
			cin >> choix;
			cout << endl;
			
			switch (choix)
			{
				case 1:
				{
					cout << "Acheter" << endl << setw(15) << right << "Rations: " << aRations << " rations (" << pRations << " pesos/ration)" << endl << setw(15) << right << "Munnitions: " << aMunnitions << " munnitions (" << pMunnitions << " pesos/munnition)" << endl << setw(15) << right << "Petrole: " << aPetrole << " litres (" << pPetrole << " pesos/litre)" << endl << endl;
				}break;
					
				case 2:
				{
					int h = (rand() % (10 * n)), s = rand() % 20 + 10;
					_joueur._argent += h * s;
					
					cout << "Votre groupe a travaille " << h << " heures au total dans des etablissements locaux." << endl << "Salaire horaire: " << s << " pesos" << endl << "Argent amasse: " << h * s << " pesos" << endl << "Total: " << _joueur._argent << endl << endl;
					choix = 3;
				}
					
				case 3:
				{
					cout << "Votre groupe installe un campement a l'ecart de la ville et y reste pour la nuit." << endl << "Combien de rations de nourriture voulez-vous utiliser par personne? (" << n << " membres et " << _joueur._nourriture << " rations de nourriture" << ")" << endl;
					cin >> rations;
					
					_joueur._nourriture -= n * rations;
					cout << "Rations restantes: " << _joueur._nourriture << endl << endl << "Le groupe s'endort..." << endl << endl;
				}break;
					
				default:
				{
					;
				}break;
			}
		}
		while(choix != 3);
		
		Voyager();
	}
	while(_joueur._ville->_nom != "Rosario");
	
	cout << "Arrivee a Rosario!" << endl;
}

void Partie::Voyager()
{
	int choixVille = 0;
	
	cout << "Quelle sera la prochaine destination?" << endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (_joueur._ville->_reliees[i] != NULL)
		{
			cout << i + 1 << ". " << _joueur._ville->_reliees[i]->_nom << (_joueur._derniereVille == _joueur._ville->_reliees[i] ? " (derniere)" : "") << endl;
		}
		else
		{
			break;
		}
	}
	cin >> choixVille;
	cout << endl;
	
	_joueur._derniereVille = _joueur._ville;
	_joueur._ville = _joueur._ville->_reliees[choixVille - 1];
}
