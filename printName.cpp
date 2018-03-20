//
// Created by 10513 on 2018/3/14.
//
#include <iostream>
#include "printName.h"
void printName::print() {
    using namespace std;
    char a = 5;
    int arr[5][15]={
             {1,0,0,1,0,1,0,0,0,1,0,1,0,0,1}
            ,{1,0,0,1,0,0,1,0,1,0,0,1,0,0,1}
            ,{1,1,1,1,0,0,0,1,0,0,0,1,1,1,1}
            ,{1,0,0,1,0,0,0,1,0,0,0,1,0,0,1}
            ,{1,0,0,1,0,0,0,1,0,0,0,1,0,0,1}};
    for(int i=0;i<5;i++){
        for(int j=0;j<15;j++){
            if(arr[i][j]){
                cout << a;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}