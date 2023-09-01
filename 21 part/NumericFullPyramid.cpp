#include<iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a - i - 1 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < i + 1 ; j++){
            cout << i + j + 1;
        }
        int aoo = i * 2;
        for(int j = 0 ; j < i ; j++){
            cout << aoo;
            aoo--;
        }
        cout << endl;
    }
}



// pre requisites

//int main(){
//    int a = 5;
//    for(int i = 0 ; i < a ; i++){
//        int start = i + 1;
//        for(int j = 0 ; j < i + 1 ; j++){
//            cout << start << " ";
//            start = start + 1;
//        }
//        cout << endl;
//    }
//}
//int main(){
//    int a = 5;
//    for(int i = 0 ; i < a ; i++){
//        for(int j = 0 ; j < i + 1 ; j++){
//            cout << i + j + 1 << " ";
//        }
//        cout << endl;
//    }
//}