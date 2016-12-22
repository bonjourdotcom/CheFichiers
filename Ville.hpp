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
	
	void ajouterVilleReliee(Ville *v) { m_villesReliees.insert(v); }
};

#endif
