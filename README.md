# Bypassing-Access-Restriction
Demonstration of bypassing C++ compile time access restriction on private &amp; protected data members.

# How does it work ?
C++ restricts any non-member functions from accessing private or protected members.
However, this restriction is only imposed at compile time and not dynamically at run time.

Instance variables are stored contiguously in the memory.
If we can get the starting address of that contiguous memory location,
then using the offset of each instance variable from the starting address, we can get the address of every instance variable.

The starting address or base address of the instance variable in the memory is just the address of the object itself.
Therefore, if we add the offset of each instance variable to the base address, we will get the address of each instance variable.

So, Instance Variable Address = Object Base Address + Offset of That Instance Variable.
