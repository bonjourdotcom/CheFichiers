#include "Joueur.hpp"

Joueur::Joueur()
{
	_ville = new Ville();
	_derniereVille = new Ville();
	
	_argent = 2000;
	_munnitions = 50;
	_nourriture = 20;
	_petrole = 10;
	
	_membres[0] = Membre(0);
	
	for (int i = 0; i < 9; i++)
	{
		_membres[i+1] = Membre(rand() % 12 + 1);
	}
}

Joueur::~Joueur()
{
	
}

void Joueur::AfficherMembres()
{
	for (int i = 0; i < 10; i++)
	{
		_membres[i].Afficher();
	}
}

int Joueur::CompterMembres()
{
	int n = 0;
	for (int i = 0; i < 10; i++)
	{
		if (_membres[i]._specialisation != "")
		{
			n++;
		}
		else
		{
			break;
		}
	}
	
	return n;
}
