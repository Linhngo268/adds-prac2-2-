
#include "Human.h"

#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
Human::Human(){
}


void Human::makeMove(){
    char move;
    cout<<"enter the move"<<endl;
    cout<<"choose one of the options"<<endl;
    cin>>move;
     
    move_human=move;
}
char Human::getMove(){
     
    return move_human;
}


