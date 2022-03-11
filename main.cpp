//
//  main.cpp
//  
//
//  Created by Ngo Linh on 11/3/22.
//

#include "main.hpp"
#include "_human.cpp"
#include"Computer.cpp"
#include "Referee.cpp"

using namespace std;
int main(){
    Human player;
    player.makeMove();
    player.getMove();
    
    Computer comp;
    comp.getMove();
    
    Referee refGame(player,comp);
    return 0;
}
