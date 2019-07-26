#ifndef __Player_H
#define __Player_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Player {
	char *name;
	char family[30];
	int numOfVest;
	const int id;
	int careerPts;
	static int counter;
	static Player *BestPlayer;
	friend class Liga;
	friend ostream& operator<<(ostream& out, const Player& p);
public:
	//set's
	void setName(const char *name);
	void setFamily(const char *family);
	void setNumOfVest(int numOfVest);
	void setCareerPts(int careerPts);
	//get's
	const char* getName() const { return name; };
	const char* getFamily() const { return &family[0]; };
	int getNumOfVest() const { return numOfVest; };
	int getCareerPts() const { return careerPts; };
	//constructor's
	Player(char *name, char family[30], int id);
	Player();
	Player(const Player &o);
	//destructor's
	~Player();
	//opertor's
	const Player& operator=(const Player& o);
	const Player& operator+=(int num);
	bool operator==(const Player& o) const;
	bool operator!=(const Player& o) const;
	void operator++();
	//Best Player - static
	void setBestPlayer();
	static void printBestPlayer();
	//methods
	void print() const;
	void set_name(char *name, char* family);
	void set_points(int pts);
	void set_last_name(char *family) { setFamily(family); };
};

#endif