#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr(5);
    arr = {1, 3, 4, 5, 6};
    print(arr);
    return 0;
}