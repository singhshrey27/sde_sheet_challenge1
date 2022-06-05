// CODE WRITTEN BY SHIRANSH PRATAP SINGH
//Approach 1: Counting method  

#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> vec={2,0,2,1,1,0};
int count1=0,count2=0,count3=0;
for(int i=0;i<vec.size();i++)
{
if(vec[i]==0)
count1++;
else if(vec[i]==1)
count2++;
else
count3++;
}
int counter=0;
for(int i=0;i<count1;i++)
vec[k++]=0;

for(int i=0;i<count2;i++)
vec[k++]=1;

for(int i=0;i<count3;i++)
vec[k++]=2;

for(int i=0;i<vec.size();i++)
cout<<vec[i]<<" ";
return 0;
}

//Approach 2: Dutch National flag algorithm

#include<bits/stdc++.h>
using namespace std;
 class sortnums
 {
     public:
   void sortnum(vector<int>& arr)
   {
       int low=0;
       int mid=0;
       int high=arr.size()-1;
       while(mid<=high)
       {
           switch(arr[mid])
           {
               case 0:
               swap(arr[low],arr[mid]);
               low++;mid++;
               break;
               case 1:
               mid++;
               break;
               case 2:
               swap(arr[mid],arr[high]);
               high--;
               break;
           }
       }
   }
 };
int main()
{
    sortnums obj;
    vector<int> a={2,0,2,1,1,0};
    vector<int> :: iterator it;
    obj.sortnum(a);
    for(it=a.begin() ;it!=a.end();it++)
    cout<<*it<<" ";
    
    return 0;
    
}

//Note: Code submitted on codestudio

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int low=0;
       int mid=0;
       int high=n-1;
       while(mid<=high)
       {
           switch(arr[mid])
           {
               case 0:
               swap(arr[low],arr[mid]);
               low++;mid++;
               break;
               case 1:
               mid++;
               break;
               case 2:
               swap(arr[mid],arr[high]);
               high--;
               break;
           }
       }
}
