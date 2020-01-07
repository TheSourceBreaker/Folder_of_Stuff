#pragma once

struct Struct
{
	bool fplayerWin = false;
	bool splayerWin = false;
	bool fplayerTurn = true;
	bool splayerTurn = false;
};
void Check(char input, char number[], char letter[], size_t size);
//void Update()