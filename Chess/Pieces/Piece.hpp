#ifndef Piece_hpp
#define Piece_hpp

#include "Global.hpp"

#include <iostream>
#include <vector>

using namespace std;

class Piece {
protected:
    string name; // "bK", "wQ", etc. Used for ASCII-interface representation
    char letter; // "K", "Q", etc.
    Color color;
    square position;
    
public:
    Piece(Color color, square position);
    virtual ~Piece() = default;
    
    Color getColor();
    string getName();
    char getLetter();
    string getSymbol();
    
    int getRankIndex();
    int getFileIndex();
    
    virtual bool isValidMove(vector<vector<Piece*> > chessboard, square destination) = 0;
    void move(square destination);
};

#endif
