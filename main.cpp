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
	srand((unsigned int)time(0));
	
	Partie nouvellePartie;
	nouvellePartie.CommencerPartie();
	
    return(0);
}
