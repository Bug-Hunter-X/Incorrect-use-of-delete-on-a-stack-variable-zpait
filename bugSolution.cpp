int main() { int x = 10; // No need to use delete here. int *ptr = new int(10); // dynamically allocate an integer int *ptr2 = &x; // integer on the stack  delete ptr; // only delete dynamically allocated integers return 0; }