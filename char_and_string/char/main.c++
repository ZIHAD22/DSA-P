#include <iostream>
#include <string.h>
using namespace std;

void reverseCharArray(char name[])
{
    int i = 0;
    int lengthOfArr = strlen(name);
    int j = lengthOfArr - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void replace_spaces(char sentence[])
{
    int i = 0;
    int l = strlen(sentence);

    while (i <= l)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
        i++;
    }
}

bool is_palindrome(char arr[])
{
    int i = 0;
    int l = strlen(arr);
    int j = l - 1;

    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main()
{
    char name[100];

    cout << "Enter Your Name: ";

    cin.getline(name, 50);

    // cout << "initially: " << name << endl;

    // reverseCharArray(name);
    // cout << "reversed: " << name;

    // replace_spaces(name);
    // cout << "replaced: " << name;

    cout << "status of enter: " << is_palindrome(name);

    return 0;
}