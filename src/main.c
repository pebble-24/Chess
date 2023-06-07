#include <stdio.h>
#include <stdbool.h>
#include "moves.h"

enum Type {
  NONE = 0,
  PAWN,
  KNIGHT,
  BISHOP,
  ROOK,
  QUEEN,
  KING,
};

enum Colour {
  WHITE = 0,
  BLACK,
};

struct Piece {
  enum Type type; 
  enum Colour colour;
  int position;
  bool taken;
};

int position_to_location(int position);
void print_board(struct Piece board[8][8]);

int main(void) 
{
  struct Piece board[8][8];
  return 0;
}

int position_to_location(int position)
{
  int location;
  return location;
}

void print_board(struct Piece board[8][8])
{
  
}