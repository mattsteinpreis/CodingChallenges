#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{

  const char *names[6] = {"BCG","BGC","CBG","CGB","GBC","GCB"};

  int bins[3][3];

  while (cin >> bins[0][0] >> bins[0][1] >> bins[0][2] >>
		bins[1][0] >> bins[1][1] >> bins[1][2] >>
		bins[2][0] >> bins[2][1] >> bins[2][2] )
  {
    int moves[6];
    //put in alphabetical order
    moves[0] = bins[1][0]+bins[2][0] + bins[0][1]+bins[1][1]+ bins[0][2]+bins[2][2]; //BCG
    moves[1] = bins[1][0]+bins[2][0] + bins[0][1]+bins[2][1]+ bins[0][2]+bins[1][2]; //BGC
    moves[2] = bins[0][0]+bins[1][0] + bins[1][1]+bins[2][1]+ bins[0][2]+bins[2][2]; //CBG
    moves[3] = bins[0][0]+bins[1][0] + bins[0][1]+bins[2][1]+ bins[1][2]+bins[2][2]; //CGB
    moves[4] = bins[0][0]+bins[2][0] + bins[1][1]+bins[2][1]+ bins[0][2]+bins[1][2]; //GBC
    moves[5] = bins[0][0]+bins[2][0] + bins[0][1]+bins[1][1]+ bins[1][2]+bins[2][2]; //GCB
    

    int min = 999;
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
