#include <iostream>
using namespace std;

int main()
{
    char name[100];

    cout << "Enter Your Name: ";

    cin.getline(name, 50);

    cout << "Your Name is: " << name;

    return 0;
}