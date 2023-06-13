#include <iostream>
using namespace std;
#include "Thanos.h"

int main() {

 /* monster x("Apple", 10, 20), y("Boba",5,5);// call constructors

  x.print();
  y.print();

  int i;
  x.Attack(y);
  x.print();
  y.print();
 
  monster *p=&x;
   while(p->not_dead())
      p->Attack(y);//x.Attack(y);
  
  x.print();
  y.print();
*/
 /* monster *p,x("Big",10,10); // constructor 1(big)
  p=&x;
  
  x+=30; //x.operator+=(30);
  --x;
  
  p=new monster("Boat",5,20);// constructor 2(boat)
  while(p->not_dead() && x.not_dead()){
    p->Attack(x);
    x.Attack(*p);
  }
  p->print();
  x.print();
 delete p;   //destructor 1(boat)
  */
  
/*
 p=new monster[3];//constructor 3, 4,5(not, bond, top)
 delete []p; //destructor (top, bond,not)
*/
  //destructor big
  
  
  // x.hp decrease by 1 y.hp decrese by half
 
  /* monster xx[5] = {{"Bright", 30}, {"Big"}, {"Boat"}};
  monster *p = new monster("Mike");
  delete p;*/



  /* Assignment*/

  Thanos T;
  int n;
  cout<<"How many monster?";
  cin>>n;

  monster *m=new monster[n]; //2. make sure they have hp
 
  /* Add some story Attack each other or 

  add hp to some of them randomly
*/

  ++T;
  ++T;
  T.snap_finger(m,n); //finish the snap finger function
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);

  int i;
  for(i=0;i<n;i++)
      m[i].print();
  
  delete [] m;
  

}