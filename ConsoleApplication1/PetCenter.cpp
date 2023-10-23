#include "PetCenter.h"

void PetCenter::addPet()
{

    *Pet(name);
	cout << "Enter name of your pet: " << endl;
    cin >> name;

	pets.push_back(name);
    *Pet(age);
    cout << "Enter age of your pet: " << endl;
    cin >> age;

    pets.push_back(age);
    *Pet(species);
    cout << "Enter species of your pet: " << endl;
    cin >> species;

    pets.push_back(species);

}

void PetCenter::removePet()
{
}

void PetCenter::displayPetInfo()
{
}
