#ifndef __Liga_H
#define __Liga_H
#include "Player.h"

class Liga {
	Player *ligaPlayers;
	int maxLigaPlayers;
	static int numOfLeaguesPlayers;
	int numExistPlayers;
public:
	//constructor's
	Liga(int maxLigaPlayers);
	Liga(const Player *other, int size, int maxLigaPlayers);
	Liga(const Liga& o);
	//destructor
	~Liga();
	//operator's
	const Liga& operator=(const Liga& o);
	const Liga& operator+=(const Liga& o);
	//methods
	void setPoints(char family[30], int pts);
	void addPlayer(char *name, char *family, int id);
	int getPerson(int id) const;
	void print() const;
	void print_player(int i) const;
	int numPlayers() const { return numOfLeaguesPlayers; };
};




#endif