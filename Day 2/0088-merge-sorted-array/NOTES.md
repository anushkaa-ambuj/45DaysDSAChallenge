​​<h2> Approaches: </h2>
Let Arr A be of size N and Arr B be of size M; where N>M.


<h3> Approach 1: Copy and Sorting</h3>
 1. Copy elements of Arr B into Arr A<br>
 2. Do Bubble/Insertion/Selection Sort or Merge/Quick Sort
 <h4> Time Complexity: O(M+N^2) or O(M+NlogN)</h4>
 <ul>
 <li> Copy B to A --> O(M) </li>
 <li> Using BS/IS/SS --> O(N^2) </li>
 <li> or Using MS/QS/in-built sort func. --> O(NlogN) </li>
 </ul>
 <h4> Space Complexity: O(1) or O(N)</h4>
 <ul>
 <li> Using BS/IS/SS --> O(1) </li>
 <li> Using MS/QS --> O(N) </li>
 <li> Using in-built func. --> O(logN) </li>
 </ul>

 <hr>

 <h3> Approach 2: Insertion Sort</h3>
 1. Since, Arr A is already sorted we will insert elements of Arr B using IS. 
 <h4> Time Complexity: O((N-M)*M) </h4>
 <h4> Space Complexity: O(1) </h4>

 <hr>

 <h3> Approach 3: 3 Pointers</h3>
 <h4> Method 1: Iterate from last indices </h4>
 1. Let pointer p1 & p2 point to the last element in Arr A and B respectively. Pointer p3 points to Nth index in Arr A (ie. sum of p1+p2+2) <br>
 2. Iterate from end   <br>
 : if (A[p1]>B[p2]) --> A[p3--] = A[p1--]  <br>
 : else --> A[p3--] = A[p2--] <br>
 3. Copy remaining indices in arr A or arr B into arr A.

  <h4> Method 2: Iterate from 1st index </h4>
 1. Copy starting elements of arr A to last of arr A
 2. Similarly, to method 1, now let pointer p1 & p2 point to the first element in Arr A and B respectively. Pointer p3 points to 0th index in Arr A  <br>
 2. Iterate from end   <br>
 : if (A[p1]<B[p2]) --> A[p3++] = A[p1++]  <br>
 : else --> A[p3++] = A[p2++] <br>
 3. Copy remaining indices in arr A or arr B into arr A.

 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>

 <hr><hr>

 <h2> Comparing Approaches: </h2>
 3 Pointers >> Sorting
