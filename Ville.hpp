#ifndef Ville_hpp
#define Ville_hpp

#include <iostream>
#include <stdio.h>

using namespace std;

class Ville
{
public:
	string _nom;
	int _population;
	string _type;
	bool _retrouvailles;
	
	Ville *_reliees[4];
	
	Ville();
	~Ville();
};

#endif
