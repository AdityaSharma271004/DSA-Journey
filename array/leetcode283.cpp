#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {0,1,0,3,12};
    int j = 0;
    for(int i =0; i<vec.size();i++){
        if(vec[i]!=0){
            swap(vec[j],vec[i]);
            j++;

        }
    }
   for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";
    
   }
}