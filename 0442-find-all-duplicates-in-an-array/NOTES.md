​<h2> Approaches: </h2>

<h3> Approach 1: Hashing</h3>
 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(N) </h4>

 <hr>

 <h3> Approach 2: Using math</h3>
 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>

**Example Walkthrough**

Consider the array: [4, 3, 2, 7, 8, 2, 3, 1]

Process 4:

- Index = abs(4) - 1 = 3
- Value at index 3 is 7 (positive)
- Negate value at index 3: [4, 3, 2, -7, 8, 2, 3, 1]

Process 3:

- Index = abs(3) - 1 = 2
- Value at index 2 is 2 (positive)
- Negate value at index 2: [4, 3, -2, -7, 8, 2, 3, 1]

Process -2:

- Index = abs(-2) - 1 = 1
- Value at index 1 is 3 (positive)
- Negate value at index 1: [4, -3, -2, -7, 8, 2, 3, 1]

Process -7:

- Index = abs(-7) - 1 = 6
- Value at index 6 is 3 (positive)
- Negate value at index 6: [4, -3, -2, -7, 8, 2, -3, 1]

Process 8:

- Index = abs(8) - 1 = 7
- Value at index 7 is 1 (positive)
- Negate value at index 7: [4, -3, -2, -7, 8, 2, -3, -1]

Process 2:

- Index = abs(2) - 1 = 1
- Value at index 1 is -3 (negative)
- Add 2 to duplicates: duplicates = [2]

Process -3:

- Index = abs(-3) - 1 = 2
- Value at index 2 is -2 (negative)
- Add 3 to duplicates: duplicates = [2, 3]

Process -1:

- Index = abs(-1) - 1 = 0
- Value at index 0 is 4 (positive)
- Negate value at index 0: [-4, -3, -2, -7, 8, 2, -3, -1]
  
**Why this works?**
Since, the elements of array lie in the range 1 to n.