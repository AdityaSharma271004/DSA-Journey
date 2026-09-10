#include<iostream>
using namespace std;

// Question1: wap to calculate sum and product of all numbers in an array.
/*void sumPro(int arr[], int size){
    int sum = 0, product = 1;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
        product = product * arr[i];
        
    }
    cout<<"sum of all array numbers: "<<sum<<endl;
    cout<<"product of all array numbers: "<<product<<endl;


}*/


// Question2: wap to swap the max & min number of an array.
/*void maxMin(int arr[], int size){
    int max = INT_MIN, min = INT_MAX;
    int maxIndex = 1, minIndex = -1;
    for(int i = 0 ; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
            maxIndex = i;
        }else if (min>arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
        swap(maxIndex, minIndex);
        
        

    }
    cout<<maxIndex<<endl<<minIndex<<endl;

}*/




// Question3: wap to print all the unique values in an array.
/*void unique(int arr[], int size){
    
    for(int i= 0; i<size; i++){
        int count = 0;
        for(int j = 0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<< arr[i]<< " ";
        }

    }
    

}*/



// Question4: wap to print intersection of 2 arrays.
void intersection(int arr1[],int arr2[], int size){
    
    for(int i = 0; i<size; i++){
        int count = 0;
        for(int j= 0; j<size; j++){
            if(arr1[i]==arr2[j]){
                
                count++;
               
            }
        }
        if(count >=1){
           cout<<arr1[i]<<" "; 
        }
        
    }
    
    cout<<endl;
    
}

int main(){
    int arr1[]={1,2,3,4,5,5};
    int arr2[]={1,2,2,3,4,8};
    int size = 6;

    intersection(arr1,arr2,size);
    
    return 0;
}