// Templo

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

#ifndef TEMPLO
#define TEMPLO

class Templo : public Edificio{
	private:
		int p;
		
	public:
		
		Templo() {
			p = 30;
		}

		int prod(){
			p += 3;
			return p - 3;
		}
		
		void print() {
			cout << "Templo" << endl;
		}

};
#endif
