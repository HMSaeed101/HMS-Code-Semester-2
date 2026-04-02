/*
### **Task 5: Double Delete Error**
**Concept to Learn:** Double delete → undefined behavior.

**Instructions:**
1. Allocate one `int` with `new`.
2. Delete it once.
3. Delete it again (intentionally).
4. Run and observe crash / corruption.
5. Fix it by adding a null check before second delete.

**Verification Questions:**
1. Why is double delete dangerous?
2. How does setting pointer to `nullptr` prevent this?
*/
