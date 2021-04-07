#include "Board.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace ariel{



string Board::read(int row,int col, Direction dir,int len){

string ans="";

if( (len<0) || (row<0) || (col<0)) return ans;

for(int i=0;i<len;i++){

if(dir==Direction::Vertical){

    char loc = board[row+i][col];

    if (isalpha(loc)) ans+=loc;
    else ans+='_';
}

if(dir==Direction::Horizontal){
  
   char loc = board[row][col+i];

    if (isalpha(loc)) ans+=loc;
    else ans+='_';
}
}



return ans;

}


void Board::post(int row,int col, Direction dir, string mes){


if((row<0) || (col<0))return;

for(int i=0;i<mes.size();i++){

    if(dir==Direction::Vertical) board[row][col+i]=mes.at(static_cast<std::string::size_type>(i));
    if(dir==Direction::Horizontal) board[row+i][col]=mes.at(static_cast<std::string::size_type>(i));
}



}

void Board::show(){

for(auto& it: board){
    for(auto& let: it.second){
        cout<<let.second;
    }
    cout<<endl;
}


  






}
}

