// Oreo

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

#ifndef OREO
#define OREO

class Oreo : public Mejora {
	private:
		double ancho;
		
	public:
		int multi(){
			return 2;
		}
		
		void print() {
			cout << "Oreo (Multiplica x2 las galletas generadas)" << endl;
		}

};
#endif
