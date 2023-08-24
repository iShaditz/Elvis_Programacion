#include <iostream>


using namespace std;
int main() {
	
	int fila = 3;
	int columna = 3; 
	
	int matriz1[fila][columna];
	
	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz1[i][x];
    	}
	}

	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
		cout<<matriz1[i][x]<<" ";
    	}
    	cout<<endl;
	}
	
	int matriz2[fila][columna];
	
	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz2[i][x];
    	}
	}

	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
		cout<<matriz2[i][x]<<" ";
    	}
    	cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<fila;i++){
	for(int x=0;x<columna;x++){
	cout<<matriz1[i][x]+matriz2[i][x]<<" ";
	}	
	cout<<endl;
	}
	
	
	return 0;
}

