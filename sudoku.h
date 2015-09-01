#include <vector>
#include <iostream>

class Sudoku {
public:
   Sudoku();
   void Initialize(int, int, int);
   void Print();
   void EliminateRow(int, int);
   void EliminateColumn(int, int);
   void EliminateCell(int, int);
   void TryEntry(int, int);
   void Solver();

private:
   bool CheckDone();
   int fArraySudoku[9][9];
   int fReserve[9];
};

Sudoku::Sudoku() {
   for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
         fArraySudoku[i][j] = 0;
      }
   }
   std::cout << "SUDOKU IS INITIALIZED." << std::endl;
}

void Sudoku::Initialize(int Row, int Column, int Value) {
   fArraySudoku[Row][Column] = Value;
}

void Sudoku::EliminateRow(int Row, int Column) {
   for (int i = 0; i < 9; i++) {
      if (fArraySudoku[Row][i] != 0) {
         fReserve[fArraySudoku[Row][i] - 1] = 0;
      }
   }
}

void Sudoku::EliminateColumn(int Row, int Column) {
   for (int i = 0; i < 9; i++) {
      if (fArraySudoku[i][Column] != 0) {
         fReserve[fArraySudoku[i][Column] - 1] = 0;
      }
   }
}

void Sudoku::EliminateCell(int Row, int Column) {
   int CellTopLeftRow = Row/3;
   int CellTopLeftColumn = Column/3;

   for (int i = CellTopLeftRow*3; i < CellTopLeftRow*3 + 3; i++) {
      for (int j = CellTopLeftColumn*3; j < CellTopLeftColumn*3 + 3; j++) {
         if (fArraySudoku[i][j] != 0) {
            fReserve[fArraySudoku[i][j] - 1] = 0;
         }
      }
   }
}

void Sudoku::TryEntry(int Row, int Column) {
   for (int i = 0; i < 9; i++) {
      fReserve[i] = i + 1;
   }

   Sudoku::EliminateRow(Row, Column);
   Sudoku::EliminateColumn(Row, Column);
   Sudoku::EliminateCell(Row, Column);

   std::vector<int> countReserve;
   countReserve.clear();
   for (int i = 0; i < 9; i++) {
      if (fReserve[i] != 0) countReserve.push_back(fReserve[i]);
   }

   if (countReserve.size() == 1) fArraySudoku[Row][Column] = countReserve.at(0);

   // Uncomment to run in DEBUG mode
/*
   std::cout << std::endl;
   std::cout << "Entry: " << Row << ", " << Column << ": " << "\t";
   for (int i = 0; i < 9; i++) {
      if (fReserve[i] != 0) std::cout << fReserve[i] << "\t";
   }
   std::cout << std::endl;
*/
}

bool Sudoku::CheckDone() {
   bool fDoneFlag = true;
   for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
         if (fArraySudoku[i][j] == 0) {
            fDoneFlag = false;
         }
         i = 9;
         j = 9;
      }
   }

   return fDoneFlag;
}

void Sudoku::Print() {
   std::cout << std::endl << "SUDOKU: " << std::endl;
   for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
         if (fArraySudoku[i][j] == 0) {
            std::cout << "-" << "\t";
         } else {
            std::cout << fArraySudoku[i][j] << "\t";
         }
      }
      std::cout << std::endl;
   }
}

void Sudoku::Solver() {
   // Run ultil find all elements
   // Error of infinite loop right now
   // Fix it later
/*
   while (this->CheckDone()) {
      for (int i = 0; i < 9; i++) {
         for (int j = 0; j < 9; j++) {
            if (fArraySudoku[i][j] == 0) {
               this->TryEntry(i, j);
            }
         }
      }
   }
*/

   for (int k = 0; k < 10; k++) {
      for (int i = 0; i < 9; i++) {
         for (int j = 0; j < 9; j++) {
            if (fArraySudoku[i][j] == 0) {
               this->TryEntry(i, j);
            }
         }
      }
   }
   this->Print();
}
