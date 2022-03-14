#include "main.hpp"
#include "Human.h"
#include"Computer.h"
#include "Referee.h"

using namespace std;
int main(){
    Human player;
    player.makeMove();
    player.getMove();
    
    
    Computer comp;
    comp.makeMove();
    comp.getMove();
    
    
    Referee refee;
    refee.refGame(player,comp);
    return 0;
}
