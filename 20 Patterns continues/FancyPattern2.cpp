#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            if(j == i){
                cout << i+1;
            }
            else {
                cout << i + 1 << "*";
            }
        }
        cout << endl;
    }
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a - i  ; j++){
            if(j == a - i - 1 ){
                cout << a - i ;
            }
            else{
                cout << a - i << "*" ;
            }
        }
        cout << endl;
    }
}