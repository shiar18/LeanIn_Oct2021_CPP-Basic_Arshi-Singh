#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    for(int i=n+1;i>0;i--){
        for(int j=1;j<i;j++){
            cout<<"*";

        }
        cout<<"\n";
    }
    return 0;

}
//
Enter value of n5
*****
****
***
**
*