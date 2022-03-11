
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
    getline(cin,move);
    while (move_human!='R'&& move_human!='P'&&move_human!='S'){
        cout<<"please enter only one option"<<endl;
        getline(cin,move);
    }
    move_human=move;
}
char Human::getMove(){
    cout<<move_human<<endl;
    return move_human;
}


