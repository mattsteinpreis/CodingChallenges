#include <iostream>
#include <string>
#include <stdlib.h>
//#include<stringstream>

using namespace std;

string ones[] = {"one", "two", "three", "four", "five", "six", "seven",
			"eight","nine"};
string teens[] = {"eleven","twelve","thirteen","fourteen","fifteen",
			"sixteen","seventeen","eighteen","nineteen"};
string tens[] = {"ten","twenty","thirty","forty","fifty","sixty",
			"seventy","eighty","ninety"};
string mags[] = {"hundred","thousand","million","billion"};


int main(){

cout << "Enter an integer between -2 billion and 2 billion: ";
string instr;
cin >> instr; 
cout << endl;

int inint = atoi(instr.c_str());
cout << inint << endl;

bool toolarge = false;
bool negative = false;
if(inint < 0) negative = true;
inint = abs(inint);
if(abs(inint) > 2e9) cout << "Integer is too large." << endl; return 0;


}

