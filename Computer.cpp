
#include "Computer.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
 
Computer::computer();

char Computer::getMove(){
    char com_move='R';
    move_comp=com_move;
    cout<<move_comp<<endl;
    return move_comp;
    
}




