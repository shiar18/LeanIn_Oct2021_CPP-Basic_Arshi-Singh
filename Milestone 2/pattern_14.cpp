#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        int k=i;
        while(k>1){
            cout<<" ";
            k--;
        }
int j=1;
while(j<=n-i+1){
    cout<<"* ";
    j++;
}
cout<<endl;
    }

}
//
Enter the value of n : 5
    * 
   * *
  * * *
 * * * *
* * * * *