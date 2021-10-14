#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, temp;
    cout<<"Enter the First Number: ";
    cin>>numOne;
    cout<<"Enter the Second Number: ";
    cin>>numTwo;
    cout<<"\nBefore Swap: \n";
    cout<<"First Number = "<<numOne<<"\tSecond Number = "<<numTwo;
    temp = numOne;
    numOne = numTwo;
    numTwo = temp;
    cout<<"\n\nAfter Swap: \n";
    cout<<"First Number = "<<numOne<<"\tSecond Number = "<<numTwo;
    cout<<endl;
    return 0;
}

//Enter the First Number: 5
Enter the Second Number: 6

Before Swap: 
First Number = 5        Second Number = 6

After Swap:
First Number = 6        Second Number = 5
