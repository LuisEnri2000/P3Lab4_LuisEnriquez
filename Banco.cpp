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

#ifndef BANCO
#define BANCO

class Banco : public Edificio{
	private:
		int p;
		
	public:
		
		Banco() {
			p = 15;
		}

		int prod(){
			p ++;
			return p - 1;
		}
		
		void print() {
			cout << "Banco" << endl;
		}

};
#endif
