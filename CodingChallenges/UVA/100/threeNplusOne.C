//UVa Online Judge Problem 100
// "3n+1 problem"
//Takes two integers as input, determines max cycle length of all integers in 
// range [int1,int2], where cycle length is the number of iterations needed
// to start with the integer and end at 1, where the iterations follows the
// the following step:
//	if odd, n -> 3n+1
//	if even, n -> n/2
// Inputs can be [1,1000000)
// output: int1 int2 maxcyclelength

//notes:
// - should be able to store cycle length for each number used, would speed up
//   future calculations

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long int PerformStep(unsigned long int a)
{
	if(a % 2 == 0) return a/2;
	else return 3*a+1;
}

int main(){


	int i1, i2;
	while(cin >> i1 >> i2){
	    int maxcount = 0;
	    int ilow, ihigh;
	    if(i1 <= i2) {ilow=i1;ihigh=i2;}
	    else {ilow=i2;ihigh=i1;}
	
	    for(int i=ilow;i<=ihigh;i++){
		if(i==1){
			maxcount = 1;
			continue;
		}
		int count = 1;
		unsigned long int n = i;
		while(n !=1){
			n = PerformStep(n);
			count++;
		}
		if(count > maxcount) maxcount = count;

	    }  

	    printf("%i %i %i\n",i1, i2, maxcount);
	}
	return 0;
}






