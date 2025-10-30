#include <iostream>
using namespace std;

int main()
{
    int arr[5], delete_num; // Initialize the array and the number to delete
    for(int i=0; i <= 5; i++) // This for loop for Entering the numbers in the array
    {
        cout << "Enter a number at the index " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number you want to delete from the array: ";
    cin >> delete_num; // Getting the number we want to delete from the array
    for (int i=0; i <= 5; i++) // This for loop is for printing the number in the array without the number we wanted to delete
    {
        if (arr[i] == delete_num)
            continue;
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}