#include<vector>
#include<string>
#include <iostream>
#include "Edificio.cpp"
#include "Granja.cpp"
#include "Banco.cpp"
#include "Templo.cpp"
#include "Mejora.cpp"
#include "Oreo.cpp"
#include "Migajas.cpp"

using namespace std;

int main(){
	
	string player;
	
	cout << "....:::: BIENVENIDO A COOKIE CLICKER ::::....." << endl;
	cout << "Ingrese su nombre: ";
	cin >> player;
	
	bool oreo = false, miga = false;
	
	int precioGranja = 50, precioBanco = 100, precioTemplo = 200;
	int gen = 0;
	int galletas = 1000;
	int op = 0;
	
	vector<Edificio*> edificios;
	vector<Mejora*> mejoras;
	
	while (op != 8)	{
		cout << "...::: Resposteria" << " " << player << " :::..." << endl;
		cout << endl;
		
		cout << "Galletas: " << galletas << endl;
		cout << endl;
		
		cout << "1. Hacer clic" << endl;
		cout << "2. Comprar granja (G. " << precioGranja << ")" << endl;
		cout << "3. Comprar banco (G. " << precioBanco << ")" << endl;
		cout << "4. Comprar templo (G. " << precioTemplo << ")" << endl;
		cout << "5. Compar oreo" << endl;
		cout << "6. Comprar migajas" << endl;
		cout << "7. Listar edificios y mejoras" << endl;
		cout << "8. Terminar" << endl;
		cout << "Opcion: ";
		cin >> op;
		
		system("CLS");
		
		cout << endl;
		
		if (op == 1) {
			gen = 0;
			
			cout << "..:: Hizo clic ::.." << endl;
			gen++; // Por el clic;
			
			// Lo que generan los edificios
			for (int i = 0; i < edificios.size(); i++) {
				gen += edificios[i]->prod();
			}
			
			// Aplicar mejoras
			for (int i = 0; i < mejoras.size(); i++) {
				if (mejoras[i]->multi() != 0)
				{
					gen *= mejoras[i]->multi();
				}
			}
			
			
			cout << "Se generaron " << gen << " galleta(s)" << endl;
			galletas += gen;
		}
		
		if (op == 2) {
			if (galletas >= precioGranja) {
				cout << "..:: Se compro una granja ::.." << endl;
				
				cout << "Saldo anterior: " << galletas << endl;
				galletas -= precioGranja;
				cout << "Saldo actual: " << galletas << endl;
				
				precioGranja += 15;
				
				edificios.push_back(new Granja());
			}else{
				cout << "..:: No tienes galletas suficientes! ::.." << endl;
			}
		}
		
		if (op == 3) {
			if (galletas >= precioBanco) {
				cout << "..:: Se compro un banco ::.." << endl;
				
				cout << "Saldo anterior: " << galletas << endl;
				galletas -= precioBanco;
				cout << "Saldo actual: " << galletas  << endl;
				
				precioBanco += 40;
				
				edificios.push_back(new Banco());
			}else{
				cout << "..:: No tienes galletas suficientes ::.." << endl;
			}
		}
		
		if (op == 4) {
			if (galletas >= precioTemplo) {
				cout << "..:: Se compro un templo ::.." << endl;
				
				cout << "Saldo anterior: " << galletas << endl;
				galletas -= precioTemplo;
				cout << "Saldo actual: " << galletas << endl;
				
				precioTemplo += 100;
				
				edificios.push_back(new Templo());
			}else{
				cout << "..:: No tienes galletas suficientes! ::.." << endl;
			}
		}
		
		if (op == 5) {
			// Comprar oreo
			if (galletas >= 100) {
				if (!oreo) {				
					oreo = true;
					mejoras.push_back(new Oreo());
					galletas -= 100;
					cout << "..:: Compraste la mejora OREO ::.." << endl;
					cout << "Ahora produces el doble de galletas!" << endl;
				}else{
					cout << "..:: Ya tienes esta mejora! ::.." << endl;
				};
			}else{
				cout << "..:: No tienes galletas suficientes! ::.." << endl;
			}
			
		}
		
		if (op == 6) {
			// Comprar migajas
			if (galletas >= 1000) {
				if (!miga) {
	
					miga = true;
					mejoras.push_back(new Migajas());
					galletas -= 1000;
					cout << "..:: Compraste la mejora MIGAJAS ::.." << endl;
					cout << "Ahora produces el TRIPLE de galletas!" << endl;
					
				}else{
					cout << "..:: Ya tienes esta mejora! ::.." << endl;
				};
			}else{
				cout << "..:: No tienes galletas suficientes! ::.." << endl;
			}
		}
		
		if (op == 7) {
			// Imprimir los edificios y mejoras
			// Edificios
			cout << "..:: EDIFICIOS ::.." << endl;
			for (int i = 0; i < edificios.size(); i++) {
				cout << (i+1) << ". ";
				edificios[i]->print();
			}
			
			cout << endl;
			
			// Mejoras
			cout << "..:: MEJORAS ::.." << endl;
			for (int i = 0; i < mejoras.size(); i++) {
				cout << (i+1) << ". ";
				mejoras[i]->print();
			}
			
		}
		
		cout << endl;
	
		system("pause");
		
		system("CLS");
	}
	
	
	
	return 0;
	
}
