#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        if(i == a - 1){
            for(int j = 1 ; j < i + 2 ; j++) {
                cout << j << " ";
            }
        }
        else{
            for(int j = 0 ; j < a - i - 1 ; j++){
                cout << " ";
            }
            for(int j = 1 ; j < i + 2 ; j++){
                if(j == 1 || j == i + 1){
                    cout << j << " ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}