#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> vec={1,2,3,4,5};
    /*

    // vector functions
    // size
    cout<<"size of the vector: "<<vec.size()<<endl;
    // push_back
    vec.push_back(6);
    // pop_back
    vec.pop_back();
    // front
    cout<<vec.front()<<endl;
    // back
    cout<<vec.back()<<endl;
    // at
    cout<<vec.at(2)<<endl;
    */
    



    // for each loop
    // for (int val:vec){
    //     cout<<val<<endl;
    // }
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;


    return 0;
}