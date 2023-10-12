#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>& v){
    while(i<=j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
   }
    return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    display(v);
    int k=2;
    // rotate
    int n = v.size();
    if(k>n) k = k%n;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);  
    display(v); 
}