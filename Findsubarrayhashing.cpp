#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
 
// Function to print subarray having a given sum using hashing
void findSubarray(int nums[], int n, int target)
{
    // create an empty map
    unordered_map<int, int> map;
 
    // insert (0, -1) pair into the set to handle the case when a
    // subarray with the given sum starts from index 0
    map.insert(pair<int, int>(0, -1));
 
    // keep track of the sum of elements so far
    int sum_so_far = 0;
    bool flag = false;
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // update `sum_so_far`
        sum_so_far += nums[i];
        // if `sum_so_far - target` is seen before, we have found
        // the subarray with sum equal to `target`
        if (map.find(sum_so_far - target) != map.end())
        {
            cout << "Subarray found [" << map[sum_so_far - target] + 1 <<
                    "–" << i << "]" << endl;
            return;
        }
        else
        {
            flag = true;
        }
 
        // insert (current sum, current index) pair into the map
        map.insert(pair<int, int>(sum_so_far, i));
    }

    if (flag == true)
    {
        cout << "Not Found" << endl;
    }

}
 
int main()
{
    // an integer array
    int nums[] = { 64 , 28 , 97 , 40 , 12 , 72 , 84 , 24 , 38 , 10};
    int target = 137;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findSubarray(nums, n, target);
   
 
    return 0;
}