### Storage Classes in C

In C, storage classes are used to define the scope (visibility) and life-time of variables. There are four storage classes in C:

1. **auto**: The default storage class for all local variables. It is used within functions or blocks. It is not necessary to use the auto keyword because all local variables are auto by default.

2. **register**: This storage class is used to define local variables that should be stored in a register instead of RAM. This means that the variable has a maximum size equal to the register size (usually one word) and cannot have the unary '&' operator applied to it (as it does not have a memory location).

3. **static**: The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.

4. **extern**: The extern storage class is used to give a reference of a global variable that is visible to all the program files. When you use 'extern', the variable cannot be initialized as all it does is point the variable name at a storage location that has been previously defined.
