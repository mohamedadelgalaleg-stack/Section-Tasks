#include <iostream>
using namespace std;

int main()
{
    int arr[5], delete_num;
    for(int i=0; i <= 5; i++)
    {
        cout << "Enter a number at the index " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number you want to delete from the array: ";
    cin >> delete_num;
    for (int i=0; i <= 5; i++)
    {
        if (arr[i] == delete_num)
            continue;
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}