#pragma once
#include <fstream>
class SaveGame
{
public:
	SaveGame();
	~SaveGame();
	int SaveMethod(int potions, float healthPoints, bool isAlive, char playerName[20]);
	int potions = 2;
	float healthPoints = 5;
	bool isAlive = true;
	char playerName[20] = "Hero";
};