#include <iostream>
#include <stack>
#include<vector>
#include <conio.h>
using namespace std;

int getNextNeighbour(int mat[8][7], int node, int traversalTrack[7],int stackState[7])
{
    for(int i = 0; i < 7 ; i++)
    {
        if(mat[node][i]== i && traversalTrack[i]== 0)
        {
            return i;
        }
        else if(mat[node][i] == 1 && stackState[i]==1)
        {
            cout <<"Cycle found at: ";
            cout << i << " \n";
        }
        
    }
    return -1;
}

int main()
{
    int adjmat[7][7]= {
{0, 1 , 0, 0 , 0 ,1 , 0},
{0, 0 , 1, 1 , 0 , 0 ,0},
{0, 0 , 0, 1 , 0 , 0, 0},
{0, 0 , 0, 0 , 0 , 0, 1},
{0, 1,  0 , 1, 0, 0 , 1},
{0, 0 , 0, 0 , 1, 0 , 1},
{0, 1 , 0 , 0 , 0 , 0,0}
 };

int traversalTrack[7]= {0};
int stackState[7] = {0};
stack<int>st; vector<int>tlist;
st.push(0); stackState[0] = 1;
int temp = st.top();
if(traversalTrack[temp] == 0)
{
    tlist.push_back(temp);
}
traversalTrack[temp] = 1;
while(!st.empty())
{
    temp = st.top();
    if(traversalTrack[temp]== 0)
    {
        tlist.push_back(temp);
    }
    traversalTrack[temp] = 1;

    int neighbour= getNextNeighbour(adjmat,temp, traversalTrack,stackState);
    if(neighbour >= 0)
    {
        st.push(neighbour);
        stackState[neighbour] = 1;
    }
    else
    {
        stackState[st.top()]= 0;
        st.pop();
    }
}
for(int j = 0; j<tlist.size(); j++)
{
    cout << tlist[j] <<", ";
}

return 0;
}