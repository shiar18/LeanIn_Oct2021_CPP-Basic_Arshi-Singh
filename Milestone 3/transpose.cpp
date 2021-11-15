#include<iostream>
using namespace std;
int main()
{
   int row, col, m1[10][10],Transpose[10][10];
   //Defining the matrices by entering rows, columns.
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
    //Entering elements by the user
   cout << "Enter the elements of first matrix(enter first row first): ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   //Calculating Transpose
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        Transpose[i][j]=m1[j][i];
      }
   }
   //Displaying output
      cout<<"Output: ";
      cout<<endl;
      for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
        {
            cout << Transpose[i][j] << "  ";
            if(j == col - 1)
            cout << endl;
        }
   return 0;
}
//
Enter the number of rows(should be >1 and <10): 3
Enter the number of column(should be >1 and <10): 3
Enter the elements of first matrix(enter first row first): 9
8
7
6
5
4
3
2
1
Output: 
9  6  3
8  5  2
7  4  1