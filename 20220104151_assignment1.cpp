#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>&v,int k){
    int n=v.size();
int left=0;
int right=n-1;
while(left<=right){
    int mid=left+(right-left)/2;
    if(v[mid]==k){
        return mid;
    }
    else if(v[mid]<k){
        left=mid+1;
    }
    else right=mid-1;
}
return -1;
}
void BsOrt(vector<int>&v){
int n=v.size();
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
        }
    }
}
}
int main(){
    vector<int>v;
int n,k,e;
cout<<"enter size: ";
cin>>n;
cout<<"enter elements: ";
for(int i=0;i<n;i++){
    cin>>e;
    v.push_back(e);
}
cout<<"sorted array: ";
BsOrt(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
cout<<"enter target: ";
cin>>k;
int r=BinarySearch(v,k);
if(r!=-1){
    cout<<"target found index: "<<r;
}
else
    cout<<"target not found";
return 0;
}
