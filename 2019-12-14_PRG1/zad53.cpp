#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
using namespace std;

struct Trojkat{
	double a;
	double b;
	double c;
};

int obwod(Trojkat t){
	return t.a+t.b+t.c;
}

int main()
{
	Trojkat trojkat{1,3,5};
	
	cout <<"obwod:\t"<< obwod(trojkat);

    return 0;
}



