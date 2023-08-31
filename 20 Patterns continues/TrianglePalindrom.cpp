#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        int j;
        for(j = 0 ; j < i + 1 ; j++){
            cout << j + 1;
        }
        j = j -1;
        for(; j >=1; j--){
            cout << j;
        }
        cout << endl;
    }

    for(int i = 0 ; i < a ; i++){
        int j;
        for(j = 0 ; j < a - i ; j++){
            cout << j + 1;
        }
        j = j - 1;
        for(; j >= 1 ; j--){
            cout << j;
        }
        cout << endl;
    }
}