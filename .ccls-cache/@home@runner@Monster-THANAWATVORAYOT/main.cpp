#include <iostream>
using namespace std;
#include "monster.h"
#include "Thanos.h"


int main() {

  Thanos T;
  int n,p,f,s,g;
  
  cout<<"How many monsters?";
  cin>>n;

  monster *m=  new monster[n];

  cout<<"Choose the protagonist(number)";  
  cin>>p;
  p--;


  do{
  srand((unsigned)time(0));  
  f=rand()%n;
    }while(f==p);

  
  //This is my story, I tried.
  
  
  m[p].print_name();
  cout<<": Hi, ";
  m[f].print_name();
  cout<<endl;
  m[f].print_name();
  cout<<": Hi, ";
  m[p].print_name();
  cout<<endl;
  m[f].print_name();
  cout<<": This is such a great day. Let work together."<<endl;
  m[p].print_name();
  cout<<": Don't jinx it man."<<endl;
  cout<<"--------------------"<<endl<<"THANOS APPEARED"<<endl<<"--------------------"<<endl;
  m[p].print_name();
  cout<<": Guys let defeat him together!"<<endl;
  
  while(T.get_stones()<6 && T.get_health()>50){  
    int action,heal;
    cout<<"What would you like to do?"<<endl<<"1 - Attack"<<endl<<"2 - Heal"<<endl; 
    cin>>action;
    if(action==1){
      m[p].hit(10);
      T.attacked();
    }
    else if(action==2){
      cout<<"How much would you like to heal?"<<endl;
      m[p].print(0);
      cin>>heal;
      m[p].heal(heal);
    }
    else{
      cout<<"This choice is not available.";
      --T;
      }
   
    if(T.get_health()<50){
      cout<<"Thanos is now too weak to snap his finger!"<<endl;
      break;
      }
    if(m[p].not_dead()==false){
      cout<<"Your monster is dead. No one can stop Thanos now."<<endl;
      int j;
      for(j=T.get_stones();j<6;j++){
        ++T;
      }
    }
      ++T;
      T.snap_finger(m,n);
    }

  
  int i;
  for(i=0;i<n;i++){
    m[i].print(1);
    }
  
  delete []m;
  
  }