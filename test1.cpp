#include <iostream>
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
    int start = 0;
    int end = -1;
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // update `sum_so_far`
        sum_so_far += nums[i];
        // if `sum_so_far - target` is seen before, we have found
        // the subarray with sum equal to `target`
        if (map.find(sum_so_far - target) != map.end())
        {
            start =  map[sum_so_far - target] +1;
            end = i; 

        }
        
 
        // insert (current sum, current index) pair into the map
        map.insert(pair<int, int>(sum_so_far, i));
    }

    if (end == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Subarray found [" << start <<
                    "–" << end << "]" << endl;
    
    }

}
 
int main()
{
    // an integer array
    int nums[] = { 1 , 1 , 0 , 1 , 1 , 0 , 0};
    int target = 0;
 
    int n = sizeof(nums)/sizeof(nums[0]);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        if(nums[i] == 1)
        {
            arr[i] = 1;
        }else
        arr[i] = -1;
    }
 
    findSubarray(arr, n, target);
   
   
 
    return 0;
}