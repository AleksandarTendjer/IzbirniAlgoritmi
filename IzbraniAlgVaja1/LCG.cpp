#include<stdio.h>
#include<math.h>
#include <iostream>
#include "LCG.h"

using namespace std;


  int LCG(int m, int a, int b, int Ri)
{
	int Rk;
	
	Rk = a * Ri + b % m;
	cout << Rk << "\n\r";
	return LCG(m, a, b, Rk);
	
	//LCG(m, a, b, Rk);
}

//void LCGWithParameters()
//{
//	int m, a, b, R0;
//	cout << "Unesi m:\n\r";
//	cin >> m;
//	cout << "Unesi a:\n\r";
//	cin >> a;
//	cout << "Unesi b:\n\r";
//	cin >> b;
//	cout << "Unesi R0:\n\r";
//	cin >> R0;
//	cout << "Izhod: \n\r";
//	LCG(m,a,b,R0);
//}

