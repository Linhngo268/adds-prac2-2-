#include "Human.cpp"
#include"Computer.cpp"
#include "Referee.cpp"

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

