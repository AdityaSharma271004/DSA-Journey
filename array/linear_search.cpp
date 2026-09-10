#include<iostream>
using namespace std;
int main(){
    int num[]={4,2,3,7,8};
    int size = 5;
    int target =8;
    for(int i = 0; i<size; i++){
        if(num[i]== target){
            cout<<i<<endl;
        }
    }
    return -1 ;
}