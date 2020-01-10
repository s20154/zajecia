#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
using namespace std;

struct Ulamek{
	float x;
	float y;
	float wynik;
};

Ulamek mnozenie(Ulamek a, Ulamek b){
	Ulamek w = {a.x*b.x, a.y*b.y, 0};
	w.wynik = w.x/w.y;
	return w;
}

int main()
{
	Ulamek a{2,4};
	Ulamek b{3,6};
	
	Ulamek c = mnozenie(a, b);
	
	cout << c.wynik;

    return 0;
}



