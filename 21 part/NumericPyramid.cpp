#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a - i - 1 ; j++){
            cout << " ";
        }
        for(int j = 1 ; j < i + 2 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}