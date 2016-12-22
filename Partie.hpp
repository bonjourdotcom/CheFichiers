#ifndef Partie_hpp
#define Partie_hpp

#include <stdio.h>
#include "Ville.hpp"
#include "Joueur.hpp"
#include "Membre.hpp"

using namespace std;

class Partie
{
public:
	Joueur _joueur;
	Ville _villesArgentine[52];
	
	string _infoArgentine[52][7] = {	//Nom, population, villes reliees (4), retrouvailes (0: non, 1: oui).
	{"Buenos Aires", "5907900", "1", "", "", "", "0"}, {"Zarate", "42836", "2", "5", "", "", "0"}, {"Ceibas", "771", "1", "3", "6", "", "0"},
	{"Gualeguaychu", "36137", "2", "4", "6", "", "0"}, {"Conception del Uruguay", "34783", "3", "7", "", "", "0"}, {"San Pedro", "25668", "1", "10", "", "", "0"},
	{"Gualeguay", "18700", "2", "3", "7", "8", "0"}, {"Rosario del Tala", "5967", "4", "6", "9", "", "0"}, {"Victoria", "13844", "6", "9", "10", "", "0"},
	{"Crespo", "9653", "7", "8", "", "", "0"}, {"Rosario", "537430", "5", "8", "", "", "1"}, {"Santa Fe", "238932", "9", "12", "", "", "0"},
	{"Marcos Juarez", "11741", "10", "13", "14", "", "0"}, {"San Francisco", "32200", "", "", "", "", "0"}, {"Villa Maria", "43478", "", "", "", "", "0"},
	{"Arroyito", "6286", "", "", "", "", "0"}, {"Cordoba", "438857", "", "", "", "", "1"}, {"Cruz del Eje", "8857", "", "", "", "", "0"},
	{"Villa del Totoral", "2286", "", "", "", "", "0"}, {"Chamical", "3714", "", "", "", "", "0"}, {"Villa Ojo de Agua", "1714", "", "", "", "", "0"},
	{"La Rioja", "60000", "", "", "", "", "0"}, {"Amiogasta", "3429", "", "", "", "", "0"}, {"Loreto", "5714", "", "", "", "", "0"},
	{"San Fernando del Valle de Catamarca", "57143", "", "", "", "", "0"}, {"Belen", "8571", "", "", "", "", "0"}, {"Pozo Hondo", "1197", "", "", "", "", "0"},
	{"Santiago del Estero", "164056", "", "", "", "", ""}, {"Concepcion", "31987", "", "", "", "", ""}, {"Santa Maria", "5295", "", "", "", "", ""}, {"Rapelli", "", "", "", "", "", ""},
	{"San Miguel de Tucuman", "361058", "", "", "", "", ""}, {"Tafi del Valle", "1547", "", "", "", "", ""}, {"Cafayate", "6750", "", "", "", "", ""}, {"Seclantas", "146", "", "", "", "", ""},
	{"San Jose de Metan", "13445", "", "", "", "", ""}, {"La Vina", "1459", "", "", "", "", ""}, {"San Antonio de los Cobres", "2610", "", "", "", "", ""}, {"Catua", "218", "", "", "", "", ""},
	{"San Pedro", "30870", "", "", "", "", ""}, {"Salta", "363636", "", "", "", "", ""}, {"Huancar", "96", "", "", "", "", ""}, {"Pichanal", "15000", "", "", "", "", ""},
	{"Tartagal", "36359", "", "", "", "", ""}, {"San Salvador de Jujuy", "117259", "", "", "", "", ""}, {"Mina Pirquitas", "467", "", "", "", "", ""},
	{"Aguas Blancas", "1089", "", "", "", "", ""}, {"Professor Salvador Mazza", "9395", "", "", "", "", ""}, {"Tilcara", "2840", "", "", "", "", ""}, {"Santa Catalina", "931", "", "", "", "", ""},
	{"Abra Pampa", "3570", "", "", "", "", ""}, {"La Quiaca", "6553", "", "", "", "", ""}};
	
	int _populationArgentine[52] = {};
	
	Partie();
	~Partie();
	void CommencerPartie();
	void Voyager();
};

#endif
