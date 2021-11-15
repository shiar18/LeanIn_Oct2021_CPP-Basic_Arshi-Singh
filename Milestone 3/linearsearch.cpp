#include <iostream>
using namespace std;
int MAX_SIZE=5;
void linear_search(int[], int);
int main() {
    int arr_search[MAX_SIZE], i, element;

    
    cout << "\nEnter " << MAX_SIZE << " Elements for Searching : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_search[i];
    }

    cout << "\nEnter Element to Search : ";
    cin>>element;

    //Linear Search Function
    linear_search(arr_search, element);

    
}

    void linear_search(int fn_arr[], int element) {
    int i;

    /* for : Check elements one by one - Linear */
    for (i = 0; i < MAX_SIZE; i++) {
        /* If for Check element found or not */
        if (fn_arr[i] == element) {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

        if (i == MAX_SIZE)
    
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
//
Enter 5 Elements for Searching :
1
2
3
4
5

Your Data   :   1       2       3       4       5
Enter Element to Search : 2

Linear Search : Element  : 2 : Found :  Position : 2.