//This code finds the most efficient way to separate 3 kinds into three bins.
//Input: nine integers, which correspond to 
// - 1-3: # of type B,G, and C in bin 1
// - 4-6:	"	"         bin 2
// - 7-9:	"	"	  bin 3
//Output: Three letters, denoting the type in bins 1,2,3, corresponding to the
// least number of moves necessary to separate, followed by the integer value 
// of moves
//
// History:
//  - 3/30/15: Created.

#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define MAX 4300000000

int main()
{

  const char *names[6] = {"BCG","BGC","CBG","CGB","GBC","GCB"};

  unsigned long bins[3][3];

  while (cin >> bins[0][0] >> bins[0][1] >> bins[0][2] >>
		bins[1][0] >> bins[1][1] >> bins[1][2] >>
		bins[2][0] >> bins[2][1] >> bins[2][2] )
  {
    unsigned long moves[6];
    //put in alphabetical order
    moves[0] = bins[1][0]+bins[2][0] + bins[0][1]+bins[1][1]+ bins[0][2]+bins[2][2]; //BCG
    moves[1] = bins[1][0]+bins[2][0] + bins[0][1]+bins[2][1]+ bins[0][2]+bins[1][2]; //BGC
    moves[2] = bins[0][0]+bins[2][0] + bins[0][1]+bins[1][1]+ bins[1][2]+bins[2][2]; //CBG
    moves[3] = bins[0][0]+bins[1][0] + bins[0][1]+bins[2][1]+ bins[1][2]+bins[2][2]; //CGB
    moves[4] = bins[0][0]+bins[2][0] + bins[1][1]+bins[2][1]+ bins[0][2]+bins[1][2]; //GBC
    moves[5] = bins[0][0]+bins[1][0] + bins[1][1]+bins[2][1]+ bins[0][2]+bins[2][2]; //GCB

    unsigned long min = MAX;
    int row = -1;
    for(int i=0;i<6;i++){
      if(moves[i] < min){ //must beat, alphabetical order
         min = moves[i];
	 row = i;
      }
    }
    
    cout << names[row] << " " << min << endl;

  }
   
 return 0;
}
