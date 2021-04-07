#include <string>
#include "Direction.hpp"
#include <unordered_map>

using namespace std;

namespace ariel{

class Board{

public:
        unordered_map<int, unordered_map<int, char>> board;
        int minY,minX,maxY,maxX;
    
        
        string read(int row,int col, Direction dir,int len);
        void post(int row,int col, Direction dir, string mes);
        void show();

        Board() {}
        ~Board() {}


};



}