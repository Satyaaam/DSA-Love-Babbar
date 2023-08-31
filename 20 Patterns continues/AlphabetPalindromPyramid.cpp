#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        int j;
        for(j = 0 ; j < i + 1 ; j++){
            int ans = j + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        j = j -1;
        for(; j >=1; j--){
            int ans = j;
            char ch = ans + 'A' -1;
            cout << ch;
        }
        cout << endl;
    }

    for(int i = 0 ; i < a ; i++){
        int j;
        for(j = 0 ; j < a - i ; j++){
            int ans = j + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        j = j - 1;
        for(; j >= 1 ; j--){
            int ans = j;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }
}