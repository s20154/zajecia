#include <iostream>
using namespace std;

int main(){
	int a, b, a1, b1;
	int nww;
	
	cin >> a >> b;
	
	if(a < 0 && b < 0)
		return 1;
		
	a1 = a;
	b1 = b;
	
	while(a1 != b1){
		if(a1 > b1)
			b1+=b;
		else
			a1+=a;
	}
	nww = a1;
	
	cout <<"NWW: "<< nww;
	
	return nww;
	
}
