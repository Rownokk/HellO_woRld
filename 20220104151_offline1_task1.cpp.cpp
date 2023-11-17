#include<iostream>
#include<vector>
using namespace std;
void Print(vector<int>&v){
int n=v.size();
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
void Selection(vector<int>&v){
int n=v.size();
for(int i=0;i<n-1;i++){
    int mini=i;
    for(int j=i+1;j<n;j++){
        if(v[j]<v[mini])
            mini=j;
    }
    swap(v[i],v[mini]);
    Print(v);
}

}
int Binary(vector<int>&v,int k){
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
    else
        right=mid+1;
}

return -1;
}
int main(){
vector<int>v;
int n,k,e;
cout<<"....selection sort & binary search...."<<endl;
cout<<"enter size: ";
cin>>n;
cout<<"enter elements: ";
for(int i=0;i<n;i++){
    cin>>e;
    v.push_back(e);
}
cout<<"before sorting: ";
Print(v);
cout<<"sorting process:";
Selection(v);
cout<<"after sorting: ";
Print(v);
cout<<"enter target: ";
cin>>k;
int r=Binary(v,k);
if(r!=-1){
    cout<<"target found in index: "<<r;
}
else{
    cout<<"not found";
}
return 0;
}
















