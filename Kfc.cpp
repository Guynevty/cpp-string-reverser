#include <iostream>
#include <string>

using namespace std;
int main(){
    string fx;
    string th;
    int js;
    char car;
    //make a string reverser.
    cout << "Give me string I'll reverse it. ";
    getline(cin,fx);
    js = fx.length();
    while(js>-1){
        car = fx[js];
        string gop(1,car);
        th += gop;
        js--;
    }
    cout << th;
}