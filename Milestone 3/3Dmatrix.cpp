#include <iostream>
using namespace std;
int main( )
{
    int Array[2][2][4];
    cout << "Enter any 16 values of your choice: \n";
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
    for(int k = 0; k < 4; k++ )
    {
        cin >> Array[i][j][k];
    }
        }
    }
        cout<<"\n These are the values which have to be stored in the array"<< endl;
        for(int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for(int k = 0; k < 4; k++)
                {
                    cout << "[" << i << "][" << j << "][" << k << "] =" <<
                    Array[i][j][k] << endl;
                    }
            }
        }
}


//

Enter any 16 values of your choice: 
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32

 These are the values which have to be stored in the array
[0][0][0] =2
[0][0][1] =4
[0][0][2] =6
[0][0][3] =8
[0][1][0] =10
[0][1][1] =12
[0][1][2] =14
[0][1][3] =16
[1][0][0] =18
[1][0][1] =20
[1][0][2] =22
[1][0][3] =24
[1][1][0] =26
[1][1][1] =28
[1][1][2] =30
[1][1][3] =32