#include <vector>

typedef unsigned short usint;

class Sudoku {
public:
   Sudoku();
   ~Sudoku();

   void InitializeSudoku(std::vector<usint[3]>);
   void PrintSudoku();

   void GetRow(usint, usint);
   void GetColumn(usint, usint);
   void GetCell(usint, usint);

private:
   usint[9][9] fSudokuArray;
}
