#include "Player.h"

int Player::counter = 10;
Player* Player::BestPlayer = NULL;

void Player::setName(const char *name) {
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
void Player::setFamily(const char *family) {
	strcpy(this->family, family);
}
void Player::setNumOfVest(int numOfVest) {
	this->numOfVest = numOfVest;
}
void Player::setCareerPts(int careerPts) {
	this->careerPts = careerPts;
}
Player::Player(char *name, char family[30], int id) : id(id) {
	this->name = NULL;
	setName(name);
	setFamily(family);
	setCareerPts(0);
	setNumOfVest(counter++);
	setBestPlayer();
}
Player::Player() : id(0) {
	this->name = NULL;
	setName("Default");
	setFamily("Name");
	setNumOfVest(counter++);
	setCareerPts(0);
	setBestPlayer();
}
Player::~Player(){
	delete[] name;
}
Player::Player(const Player &o):id(o.id) {
	name = NULL;
	*this = o;
	setBestPlayer();
}

 const Player& Player::operator=(const Player& o) {
	if (this != &o) {
		name = NULL;
		setName(o.getName());
		setFamily(o.getFamily());
		this->numOfVest = o.numOfVest;
		this->careerPts = o.careerPts;
	}
	return *this;
}

void Player::setBestPlayer() {
	if (!BestPlayer)
		BestPlayer = this;
	else if (BestPlayer->careerPts < this->careerPts ) {
		BestPlayer = this;
	}
}

void Player::printBestPlayer() {
	if (BestPlayer == NULL)
		cout << "there are no players\n";
	else {
		cout << "the best player is: ";
		BestPlayer->print();
	}
}

void Player::print() const {
	cout << "Player name: " << name << " " << family << " shirt number: " << numOfVest << " number of points: " << careerPts << endl;
}

void Player::set_name(char *name, char* family) {
	setName(name);
	setFamily(family);
}
void Player::set_points(int pts) {
	setCareerPts(pts);
	setBestPlayer();
}

ostream& operator<<(ostream& out, const Player& p)
{
	out << "Player name: " << p.getName() << " " << p.getFamily() << " shirt number: " << p.getNumOfVest() << " number of points: " << p.getCareerPts() << endl;
	return out;
}

const Player& Player::operator+=(int num) {
	careerPts += num;
	setBestPlayer();
	return *this;
}

bool Player::operator==(const Player& o) const {
	if (careerPts == o.getCareerPts())
		return true;
}

bool Player::operator!=(const Player& o) const {
	if (careerPts != o.getCareerPts())
	return true;
}

void Player::operator++() {
	careerPts++;
	setBestPlayer();
}