// Program: new & delete Operator Examples

#include <iostream>
using namespace std;

class Student
{
  public:
  string name;
  void print(){cout << name << endl;}
  Student(string name) : name(name) {}
};


int main()
{

//!--------------------------------------------------------
  int x = 4;
  // Here we allocate space for an int on the heap and set the int to 5, the new operator will return a memory address to this int on the heap which we store in the ptr_to_int variable.
  int *ptr_to_int = new int(5);

  // *ptr_to_int = new int;
  // *ptr_to_int = 5;

  cout << "ptr_to_int: " << ptr_to_int << endl;
  cout << "*ptr_to_int: " << *ptr_to_int << endl;

  //! Memory Leak
  // If we were to use the new operator again to allocate new space for an int, and store the memory address into ptr_to_int, we would have a memory leak.  This is because it would no longer be possible to free the memory on the heap that ptr_to_int was originally pointing to... the memory address would be "lost" and we would have no copy of it anywhere.  This means we could no longer make the memory available again to be used with the delete operator... we call this a "memory leak" because the memory is "gone" in that we can no longer use it.
  // ptr_to_int = new int(10);

  delete ptr_to_int;

//!------------------ new Array ------------------------------------

  // We can also allocate space for a block of memory using [], in this case a block of memory able to store 4 double values.
  double *array = new double[4];

  array[0] = 5;
  array[1] = 6;
  array[2] = 7;
  array[3] = 8;

  for (int i = 0; i < 4; i++)
    cout << "array[" << i << "] = " << array[i] << endl;

  delete[] array;

//!-------------------------New - Object Creation-----------------------------
//! new vs malloc() alloc()
  // We can dynamically allocate space for objects as well, in this case we store a Student object on the heap.  Notably C++ originated from the C language that makes available the malloc() and calloc() functions to dynamically allocate memory, and these functions are available in C++ as well.  The big difference between using malloc() and calloc() vs using the new operator is that the new operator will call the constructor for an object when it allocates space for the object on the heap, and delete calls the destructor!
  Student *std = new Student("Mary");

  // . dot operator to access the member variables and functions of the object on the heap. Notably we need to wrap the *student in brackets to ensure the dereference operator is applied FIRST before the . dot operator (due to operator precedence).
  (*student).name = "John";
  (*student).print();

  // -> arrow operator to access the member variables and functions of an object on the heap.
  student->name = "Mary";
  student->print();

  // We can free the dynamically allocated memory for the student object on the heap using the delete keyword.  The function free() from the C language is available in C++ as well, but similarly to how the new operator will call an object's constructor, the delete operator will call the object's destructor.
  delete student;

//!-----------------------Try-Catch Block-----------------------------
  try
  {
    // Try allocating far more space than is available, new operator will throw a bad_alloc exception in this case...
    double *big_array = new double[99999999999999];
  }
  catch (bad_alloc& exp)
  {
    // catch the exception and output an error message...
    cout << "bad_alloc caught: " << exp.what() << endl;
  }

  // If we don't want to use exceptions, we can use "nothrow" as below with the new operator and instead of throwing an exception new will return NULL if the dynamic memory allocation fails.
  double *big_again = new(nothrow) double[99999999999999];

  // If the memory was not successfully allocated NULL will be assigned to big_again, so if big_again is NULL we can handle the error (in this case just outputting an error message).
  if (big_again == NULL)
    cout << "Failed to allocate again!" << endl;

  // placeholder new operator that allows use to re-use previously allocated memory, and its usage looks like the below. This is provided to make the reader aware of this concept, it will be covered more fully in a future example.  In the below example, the 2nd double value is created in the same space in memory that was allocated in the 1st statement (the memory address that mydouble stores).

  // double *mydouble = new double(12.2);
  // double *specific = new(mydouble) double(20.5);

  return 0;
}
