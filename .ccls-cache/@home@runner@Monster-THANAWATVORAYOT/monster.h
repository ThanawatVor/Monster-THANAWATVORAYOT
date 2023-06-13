#ifndef monster_h
#define monster_h
#include <iostream>
using namespace std;


class monster{
private:
    string name;
    int hp,potion;
public:
void attack(monster &);  
void print(int);  
void heal(int h); 
bool not_dead() {return hp>0;}
void set_health_zero();
void print_name() {cout<<name;}
void hit(int taken);

monster(string,int=10,int=0); 
monster();
~monster();
void grow();
};

int num=1;

void monster::hit(int taken){
  hp -= taken;
  cout<<name<<" was hit by "<<taken<<" and is now "<<hp<<" hp"<<endl;
}

void monster::heal(int h){
  if(potion>0 && (potion-h)>=0){
    potion-=h;
    hp+=h;
    cout<<"Your monster is healed by "<<h<<endl<<"Potion left: "<<potion<<endl;
  }
  else cout<<"Not enough potion"<<endl;
}

void monster::print(int c){
  cout<<"Name: "<<name<<" HP: "<<hp
  if(c==0) cout<<" Potion: "<<potion<<endl;
  else cout<<endl;
}

void monster::attack(monster & b){ 
  if(hp>0){
    hp--;
    b.hp/=2;
  }
  else cout<<"Your monster is dead"<<endl;
}

monster::~monster(){
  cout<<name<<" was deleted"<<endl;
}
 
monster::monster(){
  cout<<"What is the monster's name?";
  cin>>name;
  hp=30;
  potion=30;
  cout<<num<<" - "<<name<<endl;
  num++;
}

monster::monster(string n,int h,int p){ 
  name = n;
  hp = h>100?hp=100:hp=h;
  potion = p>15?potion=15:potion=p;
  cout<<"Hi, I'm "<<name<<"."<<endl;
}

void monster::set_health_zero(){
  hp=0;
}



#endif