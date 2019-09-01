#include <iostream>
#include <cmath>
using namespace std;

#define STRING "Will this work?"
#define LENGTH 10
double testfun();
class Firstclass {
	public:
		int hours;
		int minutes;
		int seconds;
};
int main() 
{
	int x = 10;
	//char greetings[5];
	int y = 9;
	int z = x + y;
	int *poin; //pointer declaration
	poin = &z; //takes address value of z, *poin now has same value as z!
	
	Firstclass First1;
	First1.hours = 4;
	First1.minutes = 30;
	First1.seconds = 0;
	
	int h = 1;
	while (z > 2) {
		cout << "value of z: " << z << endl;
		z--;
		for (int c = 0; c < 10; c = c + 1) {
			if (h/2 > 50) {
				h = h + 30;
			} else {
				h++;
			}
		}
	}
	char greetings[] = "He lo";
	int ar[5] = {1,2,3,4,5};
	char name[50];
	double funcall = testfun();
	
	cout << "There has been " << h << " runs of this loop now " << greetings << endl;
	cout << "The address of variable z is: " << poin << " Value of *poin variable is: " << *poin << endl;
	cout << "How does the program work? ";
	cin >> name;
	cout << "Your answer was: " << name;
	
    return 0;
}

double testfun()
{
	int f = 90;
	int t = 70;
	int p = (t*f)/7;
	double cosval = cos(45);
	return cosval;
}