#include<iostream>
#include<vector>
using namespace std;
void change2d(vector< vector<int> > &v){
    v[0][0] = 1000;
}
void length(vector< vector<int> > &v){
    cout<<v.size();
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    // cout<<v[0][0]<<endl;
    
    // change2d(v);
    // cout<<v[0][0]<<endl;
    length(v);
    

}