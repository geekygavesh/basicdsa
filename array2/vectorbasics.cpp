#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // need not mention the size
    // inserting  / input dont use []
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.capacity()<<endl;

    // if you want to update / access
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
 }
