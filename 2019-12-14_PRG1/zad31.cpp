#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

enum Transport {
	SAMOCHOD,TRAMWAJ,AUTOBUS,ROWER,NOGI
};

int main(){
	srand((int) time(NULL));
	
	Transport losu_losu = Transport(rand() % 5);

	switch(int(losu_losu)){
		case SAMOCHOD:
			cout <<"Jade samochodem!"<< endl;
			break;
		case AUTOBUS: case TRAMWAJ:
			cout <<"Skorzystam dzis z transportu publicznego!"<< endl;
			break;
		case ROWER:
			cout <<"Pojade rowerem!"<< endl;
			break;
		default:
			cout <<"Pojde na piechote!!"<< endl;
			break;	
	}

}
