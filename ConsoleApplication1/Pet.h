#pragma once
#include <string>
#include <iostream>
using namespace std;
class Pet
{
public:
Pet(string name, int age, string species);
private:
	string name;
	int age;
	string species;
};

