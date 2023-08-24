#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int vector[5] ={5,1,10,6,8};
	int mayor=0;
	
	for(int i=0; i<5; i++){
		if(vector[i]>mayor){
			mayor=vector[i];
		}
	}
	
	cout<<"El elemento mayor es: " <<mayor<<endl;
	
	
	getch();
	return 0;
}
