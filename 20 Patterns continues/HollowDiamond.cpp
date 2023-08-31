#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a - i - 1 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2 * i + 1 ; j++){
            if(j == 0 || j == 2 * i - 1){
                cout << "* ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2*a-2*i-1; j++){
            if(j == 0 || j == 2*a-2*i-2){
                cout << "*"; // very important , isme "* " aise nahi hoga.
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}