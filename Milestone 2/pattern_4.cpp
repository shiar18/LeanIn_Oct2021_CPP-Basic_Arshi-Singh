#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        cout<<"\n";

    }
    return 0;

}
//
Enter value of n5
1
12
123
1234
12345