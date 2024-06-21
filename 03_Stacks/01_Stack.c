// Basic Operations on Stack Data Structure:

// In order to make manipulations in a stack, there are certain operations provided to us.

// push() -> to insert an element into the stack
// pop() -> to remove an element from the stack
// top() -> Returns the top element of the stack.
// isEmpty() -> returns true if stack is empty else false.
// isFull() -> returns true if the stack is full else false.




// Push Operation in Stack Data Structure:
// Adds an item to the stack. If the stack is full, then it is said to be an Overflow condition.

// Algorithm for Push Operation:

// Before pushing the element to the stack, we check if the stack is full .
// If the stack is full (top == capacity-1) , then Stack Overflows and we cannot insert the element to the stack.
// Otherwise, we increment the value of top by 1 (top = top + 1) and the new value is inserted at top position .
// The elements can be pushed into the stack till we reach the capacity of the stack.





// Pop Operation in Stack Data Structure:
// Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.

// Algorithm for Pop Operation:

// Before popping the element from the stack, we check if the stack is empty .
// If the stack is empty (top == -1), then Stack Underflows and we cannot remove any element from the stack.
// Otherwise, we store the value at top, decrement the value of top by 1 (top = top – 1) and return the stored top value.





// Top or Peek Operation in Stack Data Structure:
// Returns the top element of the stack.

// Algorithm for Top Operation:

// Before returning the top element from the stack, we check if the stack is empty.
// If the stack is empty (top == -1), we simply print “Stack is empty”.
// Otherwise, we return the element stored at index = top .





// isEmpty Operation in Stack Data Structure:
// Returns true if the stack is empty, else false.

// Algorithm for isEmpty Operation:

// Check for the value of top in stack.
// If (top == -1) , then the stack is empty so return true .
// Otherwise, the stack is not empty so return false .





// isFull Operation in Stack Data Structure:
// Returns true if the stack is full, else false.

// Algorithm for isFull Operation:

// Check for the value of top in stack.
// If (top == capacity-1), then the stack is full so return true.
// Otherwise, the stack is not full so return false.
