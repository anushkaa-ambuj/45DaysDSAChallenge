​​<h2> Approaches: </h2>

<h3> Approach 1: Sets/Array</h3>
 1. Iterate over the array and insert the element in the set.  <br>
 Note: Only unique elements get stored in the set. <br>
 2. Store back the elements from the set to the array.
 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(N) </h4>

 <hr>

 <h3> Approach 2: Two-Pointers</h3>
 1. Use a pointers 'j' to trace unique poition in the array. <br>
 2. Other pointer 'i' simply iterates over the array, storing arr[i] at arr[j], if arr[i] != arr[i+1]  <br>
 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>

 <hr><hr>

 <h2> Comparing Approaches: </h2>
Two Pointers > Sets
