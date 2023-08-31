#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a - i ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < 2 * i + 1 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < a - i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < 2*a-2*i-1; j++){
            cout << " ";
        }
        for(int j = 0 ; j < i + 1 ; j++){
            cout << "*";
        }
        cout << endl;
    }
}