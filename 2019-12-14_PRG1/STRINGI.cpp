#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	// .size()
	// .length()
	// .append()
	// += "Costam"
	// .erase(10,14)

	string napis;
	cout <<"Podaj napis:\t"; cin >> napis;

	int i = 0;
	int j = napis.length() - 1;
	
	while(i<j){
		if(napis[i] != napis[j]){
			cout <<"Niejest";
			return -1;
		}
		++i;
		--j;
	}
	
	cout <<"Jest";
    return 0;
}

