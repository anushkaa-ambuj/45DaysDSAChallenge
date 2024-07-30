​​<h2> Approaches: </h2>

<h3> Approach 1: Brute-Force</h3>
 1. Count the length of the linked list <br>
 2. Iterate for 0 to count/2 times to shift the pointer to the middle of the node.
 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>

 <hr>

 <h3> Approach 2: 2 Pointers</h3>
 1. Assign 2 pointers slow and fast as head. <br>
 2. Later, iterate till the end of the LL such that fast pointer moves by 2 positions and  slow pointer by 1 position. <br>
 3. Return slow pointer. <br>

Note: Terminating condition for even length => head!=NULL <br>
for odd legth => head->next != NULL

 Logic: 

 Example 1

```
1   2   3
s
h
```
```
1   2   3
    s
        h
```
Example 2

```
1   2   
s
h
```
```
1   2   
    s
        h
```

 <h4> Time Complexity: O(N) </h4>
 <h4> Space Complexity: O(1) </h4>
