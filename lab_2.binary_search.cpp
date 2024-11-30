
#include<bits/stdc++.h>
using namespace std;
int main()
{

     vector<int>arr={2,5,9,22,50};
     int size= arr.size();
     int terget = 22;
     int low=0;
     int high=size -1,mid;
     int found=0;
        mid=(low+high)/2;
     while(low<=high)
     {
         if(arr[mid]==terget)
         {
            // cout<<"The target is "<<terget<< " found at position:"<<mid+1<<endl;
            found++;
             break;
         }
         else if(arr[mid]<terget)
         {
             low=mid+1;
         }
         else{
            high=mid-1;}
            mid=(low+high)/2;

     }
     if(found==1)
     {
         cout<<"The target is "<<terget<< " found at position:"<<mid+1<<endl;
     }


    return 0;

}








