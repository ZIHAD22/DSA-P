#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int ans = -1;
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 5, 6, 7};
    int target = 4;

    int ans = firstOcc(arr, target);

    cout << "This is the ans " << ans << endl;

    return 0;
}