# Diagram

Root: index=0, evensCount=0, currentSum=0
|
|-- INCLUDE arr[0] → index=1, update evensCount & currentSum
|       |
|       |-- INCLUDE arr[1] → index=2, update evensCount & currentSum
|       |       |
|       |       |-- INCLUDE arr[2] → ...
|       |       |
|       |       |-- EXCLUDE arr[2] → ...
|       |
|       |-- EXCLUDE arr[1] → index=2, keep evensCount & currentSum
|               |
|               |-- INCLUDE arr[2] → ...
|               |
|               |-- EXCLUDE arr[2] → ...
|
|-- EXCLUDE arr[0] → index=1, keep evensCount & currentSum
        |
        |-- INCLUDE arr[1] → index=2, update evensCount & currentSum
        |       |
        |       |-- INCLUDE arr[2] → ...
        |       |
        |       |-- EXCLUDE arr[2] → ...
        |
        |-- EXCLUDE arr[1] → index=2, keep evensCount & currentSum
                |
                |-- INCLUDE arr[2] → ...
                |
                |-- EXCLUDE arr[2] → ...

# Diagram Pseudo code

Function countCustomSubsets(arr, n, index, evensCount, currentSum, K)
|
|-- Base Case: index == n
|       |
|       |-- If evensCount == K AND currentSum % 2 != 0 → return 1
|       |-- Else → return 0
|
|-- Recursive Case:
        |
        |-- INCLUDE arr[index]
        |       |
        |       |-- nextEvensCount = evensCount + (arr[index] is even ? 1 : 0)
        |       |-- nextSum = currentSum + arr[index]
        |       |-- include = countCustomSubsets(arr, n, index+1, nextEvensCount, nextSum, K)
        |
        |-- EXCLUDE arr[index]
                |
                |-- exclude = countCustomSubsets(arr, n, index+1, evensCount, currentSum, K)
|
|-- Return include + exclude

# Recursive Branching Explanation

## Goal
Count all subsets of an array that:
- contain exactly `K` even numbers
- have an odd total sum

---

## Core Idea
The function explores **all subsets** using recursion.  
At each array index, it **branches into two paths**:

1. **Include** the current element  
2. **Exclude** the current element  

This creates a **binary recursion tree**.

---

## Branching Logic

For element `arr[index]`:

### Include branch
- Move to `index + 1`
- Add `arr[index]` to `currentSum`
- If `arr[index]` is even → increment `evensCount`

### Exclude branch
- Move to `index + 1`
- Do NOT change `currentSum`
- Do NOT change `evensCount`

---

## Base Case

When `index == n`:
- A full subset has been formed
- Count it **only if**:
  - `evensCount == K`
  - `currentSum` is odd

Returns:
- `1` if valid
- `0` otherwise

---

## Result Propagation

Each recursive call returns: include + exclude

So:
- Leaves return `0` or `1`
- Parent nodes sum results
- Root call returns the total number of valid subsets

## Complexity
- Time: `O(2^n)` (all subsets)
- Space: `O(n)` (recursion depth)