​​<h2> Approaches: </h2>

 <h3> Approach 1: Hash Maps</h3>
 1. Store the count of the elements in the map. <br>
 2. Return the elements with count>N/2
 <h4> Time Complexity: O(N)+O(1) = O(N) </h4>
 <h4> Space Complexity: O(N) </h4>

 <hr>

 <h3> Approach 2: </h3>

 Explanation: <br>
Initialize count to 0 and candidate to 0.
Iterate through the array. <br> 
For each element: <br>
* If count is 0, set the current element as the candidate.
* Increment count if the current element is the candidate.
* Decrement count if the current element is not the candidate. <br>

By the end of the iteration, the candidate will be the majority element. <br>

Why It Works: <br>
The algorithm works because the majority element appears more than half of the time, so it will always cancel out all other elements in terms of the count.

 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>


 <hr><hr>

 <h2> Comparing Approaches: </h2>
 Approach 2 > Hash Maps
