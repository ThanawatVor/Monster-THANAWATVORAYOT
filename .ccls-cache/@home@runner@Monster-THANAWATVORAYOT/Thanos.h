#ifndef Thanos_h
#define Thanos_h
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
#include"monster.h"
class Thanos {

private:
    int stones;
    int hp; 
public:

Thanos(int =0,int=1000);
~Thanos();
void snap_finger(monster [],int );

    void operator++(){  
      stones++;
    }
    void operator--(){  
      stones--;
    }
    int get_stones();
    void attacked();
    int get_health();

};

Thanos::Thanos(int a, int b){
  stones = a;
  hp = b;
}

Thanos::~Thanos(){
  cout<<"Thanos has perished"<<endl;
}

int Thanos::get_stones(){
  return stones;
  }

int Thanos::get_health(){
  return hp;
  }

void Thanos::snap_finger(monster m[],int n){
  int i=0,p;
  if(stones<6) cout<<"Thanos tried to snap his finger but there are not enough stones."<<endl;
  else{
    cout<<"Thanos successfully snapped his finger!!!"<<endl;
    while(i<n/2){
      srand((unsigned)time(0));  
      p=rand()%n;  
    
      if(m[p].not_dead()){
        m[p].set_health_zero();
        m[p].print_name();
        cout<<" has died"<<endl;
        i++;
      }
    }
  }
}

void Thanos::attacked(){
  int hpb=hp; 
  hp/=2;
  cout<<"Thanos was hit and his health was reduced from "<<hpb<<" to "<<hp<<endl;
}

#endif