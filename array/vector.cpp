#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;

    cout << "Enter the size of array new: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array element: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    printArray(arr);

    return 0;
}
