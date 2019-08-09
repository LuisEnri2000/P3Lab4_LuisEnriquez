#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <typeinfo>

using namespace std;

#ifndef EDIFICIO_CPP
#define EDIFICIO_CPP

class Edificio {
	private:
		string nombre;
		
	public:
		
		Edificio(){}
		
		//funciomes virtuales puras:
		virtual int prod() = 0;
		virtual void print() = 0;
		
		
		~Edificio(){}
};
#endif
