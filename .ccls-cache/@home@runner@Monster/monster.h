#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:

void operator++();
void operator--();
void operator+=(int); // += hp

void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
//void heal(); // your idea to help revive hp
void print(); // to print all data
bool not_dead() { return hp>0;  }

monster(string=, int=0,int=0);
monster();
//Alt+126
~monster();

};



void monster::print(){
  cout<<"Monster "<<name;
  cout<<" hp:"<<hp<<" potion:   "<<potion<<endl;
  
}
void monster::Attack(monster & b){// x.Attack(y)
     cout<<"ATTACK!!!!!"<<endl;
     if(this->hp>0){
         // Some action?
     }
  else cout<<"I am dead"<<endl;
  
}

monster::~monster(){
  //indicate which monster is gone
}
monster::monster(){

 /* Ask for input */
}
monster::monster(string n ,int p,int h){

  //set var
  name=n;
  hp=h ;
  potion=p;
  cout<<"monster "<<name <<" is here HAHAHA"<<endl;
  
}



#endif
