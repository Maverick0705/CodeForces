#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> convert(vector<vector<int>> arr)
{
    vector<vector<int>> p;
    for(int i = 0 ; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++ )
        {
            if(arr[i][j] == 1)
            {
                p[i].push_back(j);
            }
        }
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n , vector<int>(n));
    for(int i = 0 ; i< arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size() ; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0 ; i< arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size() ; j++)
        {
             cout << arr[i][j] << " ";
        }
    }
    
    vector<vector<int>> AdjList = convert(arr);
    
    for (int i = 0; i < AdjList.size(); i++)
    {
        cout << i;
        for(int j = 0; j < AdjList[i].size(); j++)
        {
            if(j == AdjList[i].size() - 1)
            {
                cout << " -> " << AdjList[i][j] << endl;
                break;
            }
            else
                cout << " -> " << AdjList[i][j];
        }
    }
}