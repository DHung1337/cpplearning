#include <iostream>

using namespace std;

int main() {
    string pass;
    while(true) {
        cout<<"Create password : ";
        cin>>pass;
        cout<<"Your password is : "<<pass<<endl;
        if (size(pass)>=6) {
            continue;
        }
        else {
            cout<<"Your password must have more 5chars!"<<endl;
        }
    }
    return 0;
}
