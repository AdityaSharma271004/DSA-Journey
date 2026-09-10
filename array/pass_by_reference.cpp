#include<iostream>
using namespace std;

void changeArr(int val[],int size){
    for(int i = 0; i<size; i++){
        val[i] = 2* val[i];
    }
}

int main(){
    int val[3]={1,2,3};
    int size = 3;

    changeArr(val,3);
    for(int i = 0; i<size; i++){
        cout<<val[i]<<endl;
    }
    return 0;
}