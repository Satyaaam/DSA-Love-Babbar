#include<iostream>
using namespace std;
int main(){
    int a = 10;
    for(int i = 0 ; i < a ; i++){
        if(i == 0 || i == a - 1){
            for(int j = 0 ; j < a ; j++){
                cout << "*";
            }
        }
        else{
            for(int j = 0 ; j < a ; j++){
                if(j == 0 || j == a - 1){
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