#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a - i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < i + 1 ; j++){
            if(j == 0 || j == i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}