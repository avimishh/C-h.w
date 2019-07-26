#include "Liga.h"

int Liga::numOfLeaguesPlayers = 0;

Liga::Liga(int maxLigaPlayers) {
	ligaPlayers = new Player[maxLigaPlayers];
	this->maxLigaPlayers = maxLigaPlayers;
}
Liga::Liga(const Player *other, int size, int maxLigaPlayers) {
	size <= maxLigaPlayers ? numExistPlayers = size : numExistPlayers = maxLigaPlayers;
	this->ligaPlayers = new Player[numExistPlayers];
	this->maxLigaPlayers = maxLigaPlayers;
	for (int i = 0; i < size; i++) {
		if (i == maxLigaPlayers)
			break;
		ligaPlayers[i] = other[i];
		numOfLeaguesPlayers++;
	}
	
}

Liga::~Liga() {
	delete[] ligaPlayers;
}

Liga::Liga(const Liga& o) {
	ligaPlayers = NULL;
	*this = o;
}

const Liga& Liga::operator=(const Liga& o) {
	if (this != &o) {
		maxLigaPlayers = o.maxLigaPlayers;
		ligaPlayers = new Player[maxLigaPlayers];
		for (int i = 0; i < maxLigaPlayers; i++) {
			ligaPlayers[i] = o.ligaPlayers[i];
			numOfLeaguesPlayers++;
		}
	}
	return *this;
}

void Liga::setPoints(char family[30], int pts) {
	int i = 0;
	while (strcmp(ligaPlayers[i].getFamily(), family)&&i<maxLigaPlayers)
		i++;
	if (i == maxLigaPlayers)
		cout << "there is no player with this family name"<<endl;
	ligaPlayers[i].setCareerPts(pts);
}

void Liga::addPlayer(char *name, char *family, int id) {
	Player *tmp = ligaPlayers;
	if (numExistPlayers == maxLigaPlayers)
		return;
	ligaPlayers = new Player[numExistPlayers + 1];
	for(int i=0;i<numExistPlayers-1;i++)
		ligaPlayers[i] = tmp[i];
	delete[] tmp;
	ligaPlayers[numExistPlayers].setName(name);
	ligaPlayers[numExistPlayers].setFamily(family);
	numOfLeaguesPlayers++;
	numExistPlayers++;
}

int Liga::getPerson(int id) const {
	int i = 0;
	while ((ligaPlayers[i].id != id)) {
		i++;
		if (i == maxLigaPlayers) {
			return -1;
		}
	}
	return i;
}

void Liga::print() const {

	//if (!strcmp(ligaPlayers[0].getName(), "Default"))
	if(ligaPlayers==NULL)
		cout << "There are nnot players in this Liga";
	else {
		cout << "Liga's Players:\n";
		for (int i = 0; i < numExistPlayers; i++)
			cout << ligaPlayers[i];
	}
}

const Liga& Liga::operator+=(const Liga& o) {

	for (int i = 0; (i < o.numExistPlayers) && (i < maxLigaPlayers); i++) {
		ligaPlayers[numExistPlayers++] = o.ligaPlayers[i];
	}
	return *this;
}

void Liga::print_player(int i) const{
	if (i = -1)
		cout<<"no such player";
	else
	cout << ligaPlayers[i];
}