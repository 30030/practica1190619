#include <iostream>
#include <stdlib.h>
using namespace std;
class Arreglo{
public:
	int arreglo[100],arreglo1;
	void Cj(){
		for(int s=0;s<6;s++){
		cout<<"digite un numero";cin>>arreglo[s];
		
	}
}
	void Hil(){
for(int s=0;s<6;s++){
	arreglo1=arreglo[s]+arreglo1;
}	

	}
	void Resultado(){
			cout<<"arreglo es "<<arreglo1;
	}
};
int main(){
system("color 02");
	Arreglo Key;
	Key.Cj();
	Key.Hil();
	Key.Resultado();
	cout<<"fin del programa";
	return 0;
}
