//CODE WRITTEN BY SHIRANSH PRATAP SINGH
//APPROACH 1 FULL CODE
#include<bits/stdc++.h>
using namespace std;
class settingzero
{
public:
void setzero(vector<vector<int>> &arr)
{
    int rows=arr.size();
    int cols=arr[0].size();
    vector<int> check1(rows,-1);
    vector<int> check2(cols,-1);
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            if(arr[i][j]==0)
            {
                check1[i]=0;
                check2[j]=0;
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            if(check1[i]==0||check2[j]==0)
            {
                arr[i][j]=0;
            }
        }
    }
}

};
int main()
{
    settingzero obj;  
    vector<vector<int>> a;
    a = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    obj.setzero(a);
    cout<<"The matrix after the setting zeroes in the rows and columns are:"<<endl;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[0].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//APPROACH 1 CODE SUBMITTED ON CODESTUDIO
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here
    int rows=matrix.size();
    int cols=matrix[0].size();
    vector<int> check1(rows,-1);
    vector<int> check2(cols,-1);
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==0)
            {
                check1[i]=0;
                check2[j]=0;
            }
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(check1[i]==0||check2[j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    
    }
    
    
    
    
    
    
    

    
