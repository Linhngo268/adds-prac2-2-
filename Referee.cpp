//
//  Referee.cpp
//  
//
//  Created by Ngo Linh on 11/3/22.
//

#include <stdio.h>
#include "Referee.h"
 
using namespace std;
 
Referee::Referee();

char Referee::refGame(Human player1, Computer player2){
    if(player1='R'){
        return 'T';}
    if(player1='P'){
        return 'W';}
    else{
        return 'L';}
    }
    
}
