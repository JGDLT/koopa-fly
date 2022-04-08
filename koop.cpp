#include<iostream>
using namespace std;


class Koopa {
private:
	int xpos;
	int ypos;
	char dir;
	char dir2;
public:
	Koopa(int x, int y);
	void fly();
	void p();
};


int main() {


	Koopa koopaa(400, 400);
	Koopa koopaa2(200, 400);
	Koopa koopaa3(500, 100);
	while (1) {
		koopaa.fly();
		koopaa.p();

		koopaa2.fly();
		koopaa2.p();

		koopaa3.fly();
		koopaa3.p();

		system("pause");
	}

}

Koopa::Koopa(int x, int y) {
	xpos = x;
	ypos = y;
	dir = 'l';
	dir2 = 'u';


}

void Koopa::fly()
{
	if (xpos <= 0)
		dir = 'r';
	if (xpos >= 800)
		dir = 'l';
	if (dir == 'r')
		xpos += 10;
	if (dir == 'l')
		xpos -= 10;

	if (ypos <= 0)
		dir2 = 'u';
	if (ypos >= 400)
		dir2 = 'd';
	if (dir2 == 'u')
		ypos += 10;
	if (dir2 == 'd')
		ypos -= 10;

}

void Koopa::p()
{
	cout << endl;
	cout << "yo im the flyingKoopa im at " << xpos << "," << ypos << " going " << dir << " and " << dir2 << endl;
	cout << endl;
}
