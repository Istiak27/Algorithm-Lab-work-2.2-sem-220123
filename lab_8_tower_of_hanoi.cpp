#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;

void hanoi(int n,char src,char aux,char des)
{
    if(n==1){
        cout<<"Disk "<<n<<" "<<src<<"->"<<des<<endl;
        return;
    }
    hanoi(n-1,src,des,aux);
    cout<<"Disk "<<n<<" "<<src<<"->"<<des<<endl;
    hanoi(n-1,aux,src,des);
}

int main()
{
    int disk;     cin>>disk;
    hanoi(disk,'s','a','d');
}






