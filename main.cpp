#include <iostream>
#include <iomanip>
#include <time.h>
#include "Partie.hpp"
#include "Joueur.hpp"
#include "Ville.hpp"
#include "Membre.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Branche de Charles\n";
	srand((unsigned int)time(0));
	
	Partie nouvellePartie;
	nouvellePartie.CommencerPartie();
	
    return(0);
}
