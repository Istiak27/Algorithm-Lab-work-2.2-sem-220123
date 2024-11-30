#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;

void Merge(vi &a,int l,int m,int h){
    int b[1000];
    int k=l,i=l,j=m+1;

    while(i<=m and j<=h){
        if(a[i]<a[j])b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=m)b[k++]=a[i++];
    while(j<=h)b[k++]=a[j++];
    for(i=0;i<=h;++i)a[i]=b[i];
}

void MergeSort(vi &a,int l,int h){
    if(l<h){
        int m=l+(h-l)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,h);
        Merge(a,l,m,h);
    }
}

int main()
{
    int sz;     cin>>sz;
    vi a(sz);   for(int i=0;i<sz;i++)cin>>a[i];
    MergeSort(a,0,--sz);
    cout<<"Sorted array is : ";
    for(auto i:a)cout<<i<<" ";
}


