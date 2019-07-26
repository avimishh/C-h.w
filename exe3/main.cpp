#include "Player.h"
#include "Liga.h"

void main()
{
	Player::printBestPlayer();
	Player p1("Tal", "Ben-Haim", 22514753);
	cout << "Player p1 " << p1;
	Player p2("Yossi", "Ben-Ayun", 33158420);
	Player p3(p2);
	Player *p4 = new Player(p3);
	p3.set_name("Eran", "Zehavi");
	p3.set_points(20);
	p2.printBestPlayer();
	p1 += 20;
	p2 += 40;
	if (p1 == p3)
		cout << "p1 and p3 have the same number of points:" << p1.getCareerPts() << endl;
	if (p1 != p2)
		cout << "p1 and p2 doesn't have the same number of points\n";

	p3.set_last_name("very very long last name");

	p4->set_name("Miki", "Berkovich");
	++(*p4);
	p4->printBestPlayer();

	Player p5;
	Player arr[5] = { p1,p2,p3,*p4,p5 };
	Liga li1(arr, 5, 11);
	Liga li2(10);
	li2.print();
	li2.addPlayer("Yaniv", "katan", 35822669);
	int index = li2.getPerson(35822669);
	li2.print_player(index);
	cout << "\nNumbers of players in all liga in Israel is " << li1.numPlayers() << endl;

	li2 += (li1);
	li2.print();
	delete p4;
	system("pause");
}

