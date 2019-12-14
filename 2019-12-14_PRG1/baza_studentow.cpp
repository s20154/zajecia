#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
using namespace std;

#define DLUGOSC 1

struct Student{
	string imie;
	string nazw;
	int wiek;
	int rok;
};

int main()
{
	Student studenci[DLUGOSC];
	
	for(int i = 0; i < DLUGOSC; ++i){
		cin >> studenci[i].imie;
		cin >> studenci[i].nazw;
		cin >> studenci[i].wiek;
		cin >> studenci[i].rok;
	}

    return 0;
}



