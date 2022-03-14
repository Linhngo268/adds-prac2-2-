#include "Referee.h"
#include <iostream>
#include <string>
using namespace std;

 
Referee::Referee(){}

 char Referee::refGame(Human player1, Computer player2){
     
      
     char HumanMove=player1.getMove();
     char CompMove=player2.getMove();
     
     if(HumanMove=='P'&& CompMove=='R' ){
         return 'W';
         
     }
     if(HumanMove=='R'&&CompMove=='R'){
         return 'T';
     }
     if(HumanMove=='S'&&CompMove=='R'){
         return 'L';
     }
     else{return 'X';}
     
}
