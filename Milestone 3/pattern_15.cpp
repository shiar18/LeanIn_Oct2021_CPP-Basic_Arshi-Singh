#include<iostream>
using namespace std;
int main()
{
    int rows;
    char ch;
    cout<< "Enter the number of row" << endl;
    cin>>rows;
    cout<< "Enter the symbol as you wish" << endl;
    cin>>ch;
    for(int i=rows; i>1; i--){//outer for loop
        for(int j=i; j<-rows; j++){
            cout<<" ";//print space for pyramid
        }
        for(int j=1; j<=(2*i-1); j++){//inner for loop
            cout<<ch; //create left half
        }
        cout<<"\n";//move to next lime
    }
    return 0;
}

//
Enter the number of row
5
Enter the symbol as you wish
*
*********
 *******
  *****
   ***
    * 