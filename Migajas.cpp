// Migajas

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include "Mejora.cpp"
#include <cstdlib>
#include <typeinfo>

using namespace std;

#ifndef MIGAJAS
#define MIGAJAS

class Migajas : public Mejora {
	private:
		double ancho;
		
	public:
		int multi(){
			return 3;
		}
		
		void print() {
			cout << "Migajas (Multiplica x3 las galletas generadas)" << endl;
		}

};
#endif
