#include <iostream>

using namespace std;

int main () {

    int n;

    cout<<"Please Enter The Number Of Row: ";
    cin>> n;

    for(int i = 0; i < n; i=i+1){
        for(int k =0; k < n - i -1 ; k= k + 1){
            cout<< " ";
        }

        for(int z=0;z < i+1 ; z=z+1){
            cout<< "* ";
        }
        cout<< endl;
    }



    return 0;
}