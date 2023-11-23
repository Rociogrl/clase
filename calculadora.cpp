#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h" 
#include <cstdlib>

using namespace std;

int main () {
		
		int numero1;
		int numero2;
		int resultado;
		
		cout << "Introduzca el primer numero"<< endl;
		cin >> numero1;
		
		cout<< "Introduzca el segundo numemro" << endl;
		cin>> numero2;
		
		cout << "Elija la operación que desea realizar" << endl;
		cout << "----------------------------------------" << endl;
		cout << "---1.- Suma---";
		cout << "---2.- Resta---";
		cout << "---3.- Multiplicacion---";
		cout << "---4.- Division--";
		switch(numero1, numero2);
		

            case 1: {
              	cout << "El resultado es: " << endl;
              	cin >> numero1 + numero2;
				break;
			  }
              
			case 2: {
			  	cout << "El resultado es: " << endl;
              	cin >> numero1 - numero2;
			  	
				break;
			  }
              
			case 3: {
			  	cout << "El resultado es: " << endl;
              	cin >> numero1 * numero2;
			  	
				break;
			  }
			  
			case 4: {
			  	cout << "El resultado es: " << endl;
              	cin >> numero1 / numero2;
			  	
				break;
			  }
                
    
              default: {
              	cout << "Error" << endl;
				break;
			  }
		
		
		}
		return 0;
	
	
} 
