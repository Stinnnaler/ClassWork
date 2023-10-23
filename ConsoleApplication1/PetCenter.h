#pragma once
#include <vector>
#include "Pet.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;
class PetCenter
{
private:
	Pet pet;
	vector<Pet*> pets;
public:
	
	void addPet();
	void removePet();
	void displayPetInfo();
};

