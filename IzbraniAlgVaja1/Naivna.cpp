#include<stdio.h>
#include<math.h>
#include<string>
#include <iostream>
#include<fstream>

#include <sstream>
#include <list>
#include "Naivna.h"
#include "LCG.h"
#include <vector>
#include <iterator>
using namespace std;
#define MAX 2000
void Naivna()
{
	/*string text[MAX];
	
	int NumbersArray[MAX];
	ifstream fileToOpen ("Numbers.txt");
	
	int i = 0;
	while (getline(fileToOpen, text[i],' '))
	{
		cout << text[i]<<"\n";		
		system("pause");
		i++;
	}*/
	int number= LCG(2^32, 69069, 0, 1);
	
	bool primitive=true;
	
	while (number % 2 != 0)
	{

	}

}

