#include "sudoku.h"
#include <vector>


int main() {
   Sudoku* mysudoku = new Sudoku();

   mysudoku->Initialize(0, 0, 4);
   mysudoku->Initialize(0, 1, 5);
   mysudoku->Initialize(0, 2, 2);
   mysudoku->Initialize(0, 3, 3);
   mysudoku->Initialize(0, 6, 7);
   mysudoku->Initialize(0, 7, 1);
   mysudoku->Initialize(0, 8, 6);
   mysudoku->Initialize(1, 3, 5);
   mysudoku->Initialize(1, 5, 7);
   mysudoku->Initialize(2, 4, 6);
   mysudoku->Initialize(2, 7, 5);
   mysudoku->Initialize(2, 8, 9);
   mysudoku->Initialize(3, 1, 4);
   mysudoku->Initialize(3, 2, 9);
   mysudoku->Initialize(3, 3, 7);
   mysudoku->Initialize(3, 4, 5);
   mysudoku->Initialize(3, 5, 3);
   mysudoku->Initialize(3, 6, 2);
   mysudoku->Initialize(3, 7, 6);
   mysudoku->Initialize(4, 1, 3);
   mysudoku->Initialize(4, 2, 6);
   mysudoku->Initialize(4, 6, 5);
   mysudoku->Initialize(4, 8, 4);
   mysudoku->Initialize(5, 0, 5);
   mysudoku->Initialize(5, 2, 8);
   mysudoku->Initialize(5, 3, 6);
   mysudoku->Initialize(5, 4, 9);
   mysudoku->Initialize(5, 5, 4);
   mysudoku->Initialize(5, 6, 3);
   mysudoku->Initialize(5, 7, 7);
   mysudoku->Initialize(5, 8, 1);
   mysudoku->Initialize(6, 1, 8);
   mysudoku->Initialize(6, 3, 4);
   mysudoku->Initialize(6, 4, 2);
   mysudoku->Initialize(6, 5, 6);
   mysudoku->Initialize(6, 6, 1);
   mysudoku->Initialize(6, 7, 3);
   mysudoku->Initialize(7, 1, 1);
   mysudoku->Initialize(7, 4, 3);
   mysudoku->Initialize(7, 5, 5);
   mysudoku->Initialize(7, 6, 6);
   mysudoku->Initialize(7, 7, 8);
   mysudoku->Initialize(7, 8, 7);
   mysudoku->Initialize(8, 0, 3);
   mysudoku->Initialize(8, 3, 8);
   mysudoku->Initialize(8, 4, 7);
   mysudoku->Initialize(8, 5, 1);
   mysudoku->Initialize(8, 6, 9);
   mysudoku->Initialize(8, 7, 4);
   mysudoku->Initialize(8, 8, 2);

   mysudoku->Print();

   mysudoku->Solver();

   return 0;
}
