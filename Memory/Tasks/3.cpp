/*
### **Task 3: C-Style malloc vs new (Comparison Lab)**
**Concept to Learn:** Difference between `new` (C++) and `malloc` (C). No constructors with `malloc`.

**Instructions:**
1. Allocate 3 `Student` objects with `new` (observe constructors).
2. Allocate raw memory for 3 `Student` objects with `malloc` (no constructors).
3. Manually construct objects in malloc-ed memory using placement new (advanced but important).
4. Deallocate both ways correctly.
Print messages to show difference.

**Verification Questions:**
1. Why does `malloc` not call constructors?
2. When would you ever choose `malloc` over `new` in C++?
*/
