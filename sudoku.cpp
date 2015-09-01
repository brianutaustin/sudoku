#include "sodoku.h"
#include <iostream>

Sudoku::Sudoku() {
   for (unsigned short i = 0; i < 9; i++) {
      for (unsigned short j = 0; j < 9; j++) {
         fSudokuArray[i][j] = 0;
      }
   }
}

Sudoku::~Sudoku() {
   delete fSudokuArray;
}

void Sudoku::InitializeSudoku(std::vector<usint[3]> InitialEntries) {
   for (unsigned short i = 0; i < InitialEntries.size(); i++) {
      fSudokuArray[InitialEntries.at(i)[0]][InitialEntries.at(i)[1]] = [InitialEntries.at(i)[2]];
   }
}

void Sudoku::PrintSudoku() {
   for (unsigned short i = 0; i < 9; i++) {
      for (unsigned short j = 0; j < 9; j++) {
         std::cout << fSudokuArray[i][j] << "\t";
      }
      std::cout << endl;
   }
}
