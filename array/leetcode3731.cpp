#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> nums = {1,4,2,5};
    vector<int> ans;

    unordered_set<int> st;
    int mini = INT_MAX;
    int maxd = INT_MIN;

    for(int x : nums){
        st.insert(x);
        mini = min(mini,x);
        maxd = max(maxd,x);
    }

    for(int i = mini; i<=maxd; i++){
        if(!st.count(i)){
            ans.push_back(i);
        }
        
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    
    return 0;
}