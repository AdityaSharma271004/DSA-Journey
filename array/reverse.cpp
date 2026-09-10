#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int st = 0, end = size-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;

    reverseArray(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}