#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
using namespace std;

int ilosc(int c, string s){
	int j = 0;
	
	
	for(int i = 0; i < s.length(); i++){
		if(s[i] == c){
			j++;
		}
	}
	
	return j;
}

int main()
{
	string napis;
	cin >> napis;
	
	cout <<"Znak\tIlosc"<< endl;
	for(int i = 64; i < 128; ++i){
		cout <<char(i)<<"\t"<<ilosc(char(i), napis)<< endl;
	}

    return 0;
}



