// Granja

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include "Edificio.cpp"
#include <cstdlib>
#include <typeinfo>

using namespace std;

#ifndef GRANJA
#define GRANJA

class Granja :public Edificio{
	private:
		int p;;
		
	public:
		
		Granja() {
			p = 5;
		}

		int prod(){
			return p;
		}
		
		void print() {
			cout << "Granja" << endl;
		}

};
#endif
