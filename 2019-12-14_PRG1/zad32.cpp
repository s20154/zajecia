#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void czyt_wyraz(string &wyraz){
	cout <<"Podaj napis:\t"; cin >> wyraz;
}

int main()
{
	string napis;
	czyt_wyraz

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



