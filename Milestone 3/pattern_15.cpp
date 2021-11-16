#include <iostream>

using namespace std;
int main()
{
    int rows;
    char ch;
    cout << "Enter number of rows" << endl;
    cin>>rows;
    cout << "Enter any symbol of your choice" << endl;
    cin>>ch;
    for(int i=rows; i>=1;  i--)
    {//outer for loop
            for(int j=i; j<=rows; j++)
            {
                cout<<" ";//print space for pyramid
            }
            for(int j=1; j<=(2*i-1); j++)
            {//inner for loop
                cout<<ch;  //create left half
            }
            cout<<"\n";//move to next line
    }
    return 0;
}
//
Enter number of rows
5
Enter any symbol of your choice
*
 *********
  *******
   *****
    ***
     *