
// Mejora
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

#ifndef MEJORA_CPP
#define MEJORA_CPP

class Mejora {
	private:
		string nombre;
		
	public:
		
		Mejora(){}
		
		//funciomes virtuales puras:
		virtual int multi() = 0;
		virtual void print() = 0;
		
		
		~Mejora(){}
};
#endif
