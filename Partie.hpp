#ifndef Partie_hpp
#define Partie_hpp

#include <stdio.h>
#include "Ville.hpp"
#include "Joueur.hpp"
#include "Membre.hpp"

class Partie
{
public:
	Joueur _joueur;
	Ville _villesPays[56];
	
	std::string _infoArgentine[56][7] = {	//Nom, population, villes reliees (4), retrouvailes (0: non, 1: oui).
	{"Buenos Aires", "5907900", "1", "", "", "", "0"}, {"Zarate", "42836", "2", "5", "", "", "0"}, {"Ceibas", "771", "1", "3", "6", "", "0"},
	{"Gualeguaychu", "36137", "2", "4", "6", "", "0"}, {"Conception del Uruguay", "34783", "3", "7", "", "", "0"}, {"San Pedro", "25668", "1", "10", "", "", "0"},
	{"Gualeguay", "18700", "2", "3", "7", "8", "0"}, {"Rosario del Tala", "5967", "4", "6", "9", "", "0"}, {"Victoria", "13844", "6", "9", "10", "", "0"},
	{"Crespo", "9653", "7", "8", "11", "", "0"}, {"Rosario", "537430", "5", "8", "12", "", "1"}, {"Santa Fe", "238932", "9", "13", "", "", "0"},
	{"Marcos Juarez", "11741", "10", "13", "14", "", "0"}, {"San Francisco", "32200", "11", "12", "14", "15", "0"}, {"Villa Maria", "43478", "12", "13", "15", "16", "0"},
	{"Arroyito", "9629", "13", "14", "16", "", "0"}, {"Cordoba", "667769", "14", "15", "17", "18", "1"}, {"Cruz del Eje", "13339", "16", "18", "19", "", "0"},
	{"Villa del Totoral", "3570", "16", "17", "20", "", "0"}, {"Chamical", "5617", "17", "21", "", "", "0"}, {"Villa Ojo de Agua", "2651", "18", "23", "", "", "0"},
	{"La Rioja", "87358", "19", "22", "24", "", "0"}, {"Aimogasta", "5326", "21", "25", "", "", "0"}, {"Loreto", "9107", "20", "27", "", "", "0"},
	{"San Fernando del Valle de Catamarca", "87000", "21", "28", "", "", "0"}, {"Belen", "13043", "22", "29", "", "", "0"}, {"Pozo Hondo", "1197", "27", "30", "31", "", "0"},
	{"Santiago del Estero", "164056", "23", "26", "", "", "0"}, {"Concepcion", "31987", "24", "31", "32", "", "0"}, {"Santa Maria", "5295", "25", "32", "33", "", "0"},
	{"Rapelli", "592", "26", "31", "35", "", "0"}, {"San Miguel de Tucuman", "361058", "26", "28", "30", "32", "0"}, {"Tafi del Valle", "1547", "28", "29", "31", "", "0"},
	{"Cafayate", "6750", "29", "34", "36", "", "0"}, {"Seclantas", "146", "33", "37", "", "", "0"}, {"San Jose de Metan", "13445", "30", "41", "", "", "0"},
	{"La Vina", "1459", "33", "41", "", "", "0"}, {"San Antonio de los Cobres", "2610", "34", "38", "41", "42", "0"}, {"Catua", "218", "37", "39", "", "", "0"},
	{"Socaire (Chili)", "38", "", "", "", "", ""}, {"San Pedro", "30870", "41", "43", "45", "", "0"}, {"Salta", "363636", "35", "36", "40", "45", "1"},
	{"Huancar", "96", "37", "46", "", "", "0"}, {"Pichanal", "15000", "40", "44", "47", "", "0"}, {"Tartagal", "36359", "43", "48", "", "", "0"},
	{"San Salvador de Jujuy", "117259", "40", "41", "49", "", "0"}, {"Mina Pirquitas", "467", "42", "50", "", "", "0"}, {"Aguas Blancas", "1089", "43", "51", "", "", "0"},
	{"Professor Salvador Mazza", "9395", "44", "52", "", "", "0"}, {"Tilcara", "2840", "45", "53", "", "", "0"}, {"Santa Catalina", "931", "46", "54", "", "", "0"},
	{"Bermejo (Bolivie)", "47", "", "", "", "", "0"}, {"Yacuiba (Bolivie)", "48", "", "", "", "", "0"}, {"Abra Pampa", "3570", "49", "54", "", "", "0"},
	{"La Quiaca", "6553", "50", "53", "55", "", "0"}, {"Villazon (Bolivie)", "54", "", "", "", "", "0"}};
	
	Partie();
	~Partie();
	void CommencerPartie();
	void Voyager();
};

#endif
