
**********************************************************************************************************

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadanes(vector<int> &arr)
{
    int sum=0, ans=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        ans=max(ans, sum);
        if(sum<0)
            sum=0;
    }
    return ans;
}

int max_submatrix(vector<vector<int>> &mat)
{
    int n=mat.size(), m=mat[0].size(), ans=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        vector<int> arr(m,0);
        for(int end=i;end<n;end++)
        {
            for(int j=0;j<m;j++)
                arr[j]+=mat[end][j];
            ans=max(ans, kadanes(arr));
        }
    }
    
    return ans;
}

int main()
{
    vector<vector<int>> mat={{2,-4,1,3,-1,2}, {1,3,2,-7,3,3}, {0,-1,1,3,4,-7},
    {1,-1,-6,4,-4,6}};
    
    // vector<vector<int>> mat={{1,1},{1,1}};
    // vector<vector<int>> mat={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},
    cout<<max_submatrix(mat);
}



**********************************************************************************************************


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadanes(vector<int> &arr)
{
    int sum=0, ans=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        ans=max(ans, sum);
        if(sum<0)
            sum=0;
    }
    return ans;
}

int max_submatrix(vector<vector<int>> &mat)
{
    int n=mat.size(), m=mat[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 && j==0) continue;
            else if(i==0) mat[i][j]+=mat[i][j-1];
            else if(j==0) mat[i][j]+=mat[i-1][j];
            else mat[i][j]+=mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
        }
    }
    return 1;
}

int main()
{
    vector<vector<int>> mat={{2,-4,1,3,-1,2}, {1,3,2,-7,3,3}, {0,-1,1,3,4,-7},
    {1,-1,-6,4,-4,6}};
    
    // vector<vector<int>> mat={{1,1},{1,1}};
    // vector<vector<int>> mat={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},
    max_submatrix(mat);
    for(auto list : mat)
    {
        for(int x : list)
            cout<<x<<" ";
        cout<<endl;
    }
}

**********************************************************************************************************


#include <iostream>
#include <vector>
using namespace std;

int allsubmatrices(vector<vector<int>> &mat, int k)
{
    int n=mat.size(), m=mat[0].size(), sum=0;
    int i=0, j=m-1;
    while(i<n && j>=0)
    {
        if(mat[i][j]<k)
            i++;
        else if(mat[i][j])
            j--;
        else break;
    }
    return (i+1)*1009+j+1;
}

int main()
{
    vector<vector<int>> mat={{-1,2,4,5,9,11}, {1,4,7,8,10,14}, {3,7,9,10,12,18},
    {6,10,12,14,16,20}, {11,15,19,21,24,27}, {18,24,29,32,34,42}};
    
    // vector<vector<int>> mat={{1,1},{1,1}};
    // vector<vector<int>> mat={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},
    
    int k=15;
    cout<<allsubmatrices(mat, k);
}

**********************************************************************************************************


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadanes(vector<int> &arr)
{
    int sum=0, ans=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        ans=max(ans, sum);
        if(sum<0)
            sum=0;
    }
    return ans;
}

int max_submatrix(vector<vector<int>> &mat)
{
    int n=mat.size(), m=mat[0].size();
    vector<int> arr(m, 0);
    for(int j=0;j<m;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=mat[i][j];
        arr[j]=sum;
    }
    
    return kadanes(arr);
}

int main()
{
    vector<vector<int>> mat={{2,-4,1,3,-1,2}, {1,3,2,-7,3,3}, {0,-1,1,3,4,-7},
    {1,-1,-6,4,-4,6}};
    
    // vector<vector<int>> mat={{1,1},{1,1}};
    // vector<vector<int>> mat={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},
    cout<<max_submatrix(mat);
}

**********************************************************************************************************

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadanes(vector<int> &arr)
{
    int sum=0, ans=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        ans=max(ans, sum);
        if(sum<0)
            sum=0;
    }
    return ans;
}

int max_submatrix(vector<vector<int>> &mat)
{
    int n=mat.size(), m=mat[0].size(), ans=INT_MIN;
    vector<int> arr(m, 0);
    
    for(int end=0;end<n;end++)
    {
        for(int j=0;j<m;j++)
            arr[j]+=mat[end][j];
        ans=max(ans, kadanes(arr));
    }
    
    return ans;
}

int main()
{
    vector<vector<int>> mat={{2,-4,1,3,-1,2}, {1,3,2,-7,3,3}, {0,-1,1,3,4,-7},
    {1,-1,-6,4,-4,6}};
    
    // vector<vector<int>> mat={{1,1},{1,1}};
    // vector<vector<int>> mat={{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},
    cout<<max_submatrix(mat);
}

**********************************************************************************************************
