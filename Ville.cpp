#include "Ville.hpp"

using namespace std;

Ville::Ville()
{
	_nom = "";
	_population = 0;
	_type = "";
	
	for (int i = 0; i < 4; i++)
	{
		_reliees[i] = NULL;
	}
}

Ville::~Ville()
{
	
}
