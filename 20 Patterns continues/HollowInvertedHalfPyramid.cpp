#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        if(i == 0){
            for(int j = 0 ; j < a - i ; j++){
                cout << "*";
            }
        }
        else{
            for(int j = 0 ; j < a - i ; j++){
                if(j == 0 || j == a - i - 1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}