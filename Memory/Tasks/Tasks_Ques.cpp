
### **Task 6: Dangling Pointer (Use-After-Free)**
**Concept to Learn:** Dangling pointer and why it causes undefined behavior.

**Instructions:**
1. Allocate an `int` with `new`.
2. Delete it.
3. Try to print `*ptr` (this should be dangling).
4. Fix it by setting `ptr = nullptr` and checking before use.

**Verification Questions:**
1. Why is the value you see after `delete` garbage or crash?
2. Real-world consequence of dangling pointers?

---

### **Task 7: Best Practice – Always Use nullptr**
**Concept to Learn:** Defensive programming after every `delete`.

**Instructions:**
Create a helper function `void safeDelete(int*& p)` that deletes only if not null and then sets to `nullptr`.
Use it for 3 different allocations in `main`.

**Verification Questions:**
1. Why is this pattern considered best practice?
2. Can you accidentally delete `nullptr`? Is it safe?

---

### **Task 8: Manual Dynamic Array (Resize Simulation)**
**Concept to Learn:** Real use of heap – dynamic resizing (like `std::vector` does internally).

**Instructions:**
Implement a simple dynamic int array:
- Start with capacity 2.
- Add 10 numbers (double capacity when full using new[] + copy + delete[]).
- Print size, capacity, and elements after each resize.

**Verification Questions:**
1. How many times does reallocation happen?
2. Why is copying elements necessary during resize?

---

### **Task 9: Exception Safety – std::bad_alloc**
**Concept to Learn:** What happens when heap is exhausted.

**Instructions:**
Write a loop that keeps allocating huge arrays (e.g., 1GB each) until `new` throws `std::bad_alloc`.
Catch the exception and print a clean message.

**Verification Questions:**
1. Does `new` return null or throw?
2. Why is catching `std::bad_alloc` important in servers?

---

### **Task 10: Performance – Stack vs Heap**
**Concept to Learn:** Why heap is slower (allocation overhead + cache).

**Instructions:**
Write two functions:
- `stackAlloc()`: allocate 1,000,000 ints on stack (use array).
- `heapAlloc()`: allocate same on heap with `new[]`.
Time both using `<chrono>` and print nanoseconds.

**Verification Questions:**
1. Which is faster and by how much?
2. Why do we still use heap despite being slower?

---

### **Task 11: Mini Project – Safe Dynamic String Class**
**Concept to Learn:** Applying everything together (Rule of Three preview, but only heap focus).

**Instructions:**
Create a class `MyString` with:
- Constructor from `const char*` (heap copy).
- Destructor (delete[]).
- Copy constructor & copy assignment (deep copy).
Test with multiple objects, passing by value, etc.

**Verification Questions:**
1. Without deep copy, what bug appears?
2. How does this class prevent memory leaks?
