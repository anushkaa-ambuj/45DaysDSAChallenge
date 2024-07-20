​​<h2> Approaches: </h2>

<h3> BruteForce: </h3>

 <h4> Time Complexity: O(N^3) </h4>
 <h4> Space Complexity: O(1) </h4>

 <hr>

<h3> Approach 1: Sorting + 3 Pointers</h3>
 1. Simply sort the array using merge sort or quick sort or inbuilt func. <br>
 2. Iterate over the array with a pointer. For each value check if (sum - arr[i])=target by other 2 pointers.
 3. Set p1=0 and p2=N-1(last index). <br>
 : if (arr[p1]+arr[p2] == target) --> return <br>
 : if (arr[p1]+arr[p2] < target) --> p1++ <br>
 : else (arr[p1]+arr[p2] > target) --> p2--

 <h4> Time Complexity: O(N^2) </h4>
 Sorting --> NlogN <br>
 loops --> N^2
 <h4> Space Complexity: O(N) {due to sorting} </h4>

 <hr>

 <h3> Approach 2: Using HashMap</h3>
 1. Sort the array
 Iterate over the arr, check if target-arr[i] already exist in unordered map/set, then return. <br>
 2. Else insert add that element in the map/set 

 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(N) </h4>

 <hr><hr>

 <h2> Comparing Approaches: </h2>
Hash Maps > Sorting+Two Pointers
