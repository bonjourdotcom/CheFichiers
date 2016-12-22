#ifndef Ville_hpp
#define Ville_hpp

#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_set>

class Ville
{
private
	std::string _nom;
	int _population;
	std::string _type;
	bool _retrouvailles;
	
	std::unordered_set<Ville*> m_villesReliees;
	
public :
	Ville();
	~Ville();
	
	//utilisation :
	// Ville a(...), ville b(...);
	//..
	// a.ajouterVilleReliee(&b);
	// 
	// faire le tour des villes reliées
	// for(auto i = m_villesReliees.begin(); i != m_villesReliees.end(); i++)
	//	cout << *i.nom();
	
	void ajouterVilleReliee(Ville *v) { m_villesReliees.insert(v); }
};

#endif
