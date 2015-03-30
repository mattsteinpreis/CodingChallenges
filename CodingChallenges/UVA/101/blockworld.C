#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

typedef std::vector< std::vector<int> > vvec;


void PrintBlocks(vvec v)
{
  for(int i=0;i<v.size();i++){
   printf("%i:",i);
   for(int j=0;j<v[i].size();j++){
     if(v[i].size() > 0) printf(" %i",v[i][j]);
   }
   printf("\n");
  }
}

void Move(string str, int a, int b, vvec& v,
		int ra, int rb, int pa, int pb)
{
  //clear blocks off a
  if(pa < v[ra].size()-1){
    for(int i=v[ra].size()-1;i>pa;i--){
      int val = v[ra][i];
      v[ra].pop_back();
      v[val].push_back(val);
    }
  }
  //clear blocks off b (if "onto")
  if(str == "onto"){
    if(pb < v[rb].size()-1){
      for(int i=v[rb].size()-1;i>pb;i--){
        int val = v[rb][i];
        v[rb].pop_back();
        v[val].push_back(val);
      }
    }
  }
  v[ra].pop_back();	// remove a from row a
  v[rb].push_back(a);	// add a to row b
}

void Pile(string str, int a, int b,  vvec& v,
		int ra, int rb, int pa, int pb)
{
  //clear blocks off b (if "onto")
  if(str == "onto"){
    if(pb < v[rb].size()-1){
      for(int i=v[rb].size()-1;i>pb;i--){
        int val = v[rb][i];
        v[rb].pop_back();
        v[val].push_back(val);
      }
    }
  }
  vector<int> temp;
  while(pa < v[ra].size()){
   int val = v[ra].back();
   temp.push_back(val);
   v[ra].pop_back();
  }
  while(temp.size() > 0){
   v[rb].push_back(temp.back());
   temp.pop_back();
  }

}
  
void FindRowPos(int val, vvec v, int &row, int &pos)
{
  for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
      if(v[i][j] == val){ row = i; pos = j;}
    }
  }
}    

int main()
{

  //initialize vector of vectors
  int n;
  cin >> n;
  vvec blocks;
  blocks.resize(n);
  for(int i=0;i<n;i++){
    blocks[i].push_back(i);
  }

  string command, prep;
  int a,b;
  int row_a, row_b;
  int pos_a, pos_b;
  while((cin >> command) && command != "quit"){
    cin >> a >> prep >> b;
    if(a == b) continue;		// if a equals b, illegal
    if(a < 0 || a > blocks.size()) continue;
    if(b < 0 || b > blocks.size()) continue;
    FindRowPos(a, blocks, row_a, pos_a);	// find which row a is in
    FindRowPos(b, blocks, row_b, pos_b);	// find which row b is in
    if(row_a == row_b) continue;	// if a and b in same row, illegal

    if(command == "move") Move(prep, a, b, blocks, row_a, row_b, pos_a, pos_b);
    else if (command == "pile") Pile(prep, a, b, blocks, row_a, row_b, pos_a, pos_b);
    else continue;
    if(!(prep == "over" || prep == "onto")) continue;

    PrintBlocks(blocks);
  }

  PrintBlocks(blocks);

  return 0;
}

 
