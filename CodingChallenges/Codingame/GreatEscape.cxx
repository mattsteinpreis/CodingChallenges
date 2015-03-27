#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int w; // width of the board
    int h; // height of the board
    int playerCount; // number of players (2 or 3)
    int myId; // id of my player (0 = 1st player, 1 = 2nd player, ...)
    cin >> w >> h >> playerCount >> myId; cin.ignore();

    int myX;
    int myY;
    int myWL;
    string myDir;
    if(myId==0) myDir = "RIGHT";
    else if(myId==1) myDir = "LEFT";
    else myDir = "UP";
    // game loop
    while (1) {
        for (int i = 0; i < playerCount; i++) {
            int x; // x-coordinate of the player
            int y; // y-coordinate of the player
            int wallsLeft; // number of walls available for the player
            cin >> x >> y >> wallsLeft; cin.ignore();
            if(i==myId){
                myX = x;
                myY = y;
                myWL = wallsLeft;
            }
        }
        int wallCount; // number of walls on the board
        cin >> wallCount; cin.ignore();
        
        int grid[17][17] = {{0}};
        for (int i = 0; i < wallCount; i++) {
            int wallX; // x-coordinate of the wall
            int wallY; // y-coordinate of the wall
            string wallOrientation; // wall orientation ('H' or 'V')
            cin >> wallX >> wallY >> wallOrientation; cin.ignore();
            wallX = 2*wallX-1;
            wallY = 2*wallY-1;
            grid[wallX][wallY] = 1;
            if(wallOrientation=="H") 
                for(int mv=0;mv<3;mv++)grid[wallX][wallY+mv] = 1;
            else 
                for(int mv=0;mv<3;mv++) grid[wallX+mv][wallY] = 1;
        }
        

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << myDir << endl; // action: LEFT, RIGHT, UP, DOWN or "putX putY putOrientation" to place a wall
    }
}
