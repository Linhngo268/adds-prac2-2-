
#include "Computer.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
 
Computer::Computer(){
    
}

void Computer::makeMove(){
    char com_move='R';
    move_comp=com_move;
    cout<<move_comp<<endl;
     
    
}
char Computer::getMove(){
     
    return move_comp;
    
}





