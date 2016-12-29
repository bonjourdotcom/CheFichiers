#ifndef Ville_hpp
#define Ville_hpp

#include <iostream>
#include <stdio.h>

class Ville
{
public:
	std::string _nom;
	int _population;
	
	Ville *_reliees[4];	//min: 1, max: 4
	
	bool _retrouvailles;
	
	std::string _type;
	
	Ville();
	~Ville();
};

#endif
