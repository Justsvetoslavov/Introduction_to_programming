## Указатели към функции

![Function-pointer-declaration](img/Function-pointer-declaration.png)

#### Пример чрез print function
```c++
#include <iostream>

void HelloWorld()
{
    std::cout << "hello World\n";
}

int main()
{
    auto function = HelloWorld; //getting the function pointer/memory address of the function
                                //same as auto function = &HelloWorld

    void (*function2)() = HelloWorld;
    
    function(); //calls HelloWorld function
    function2();
}
```

#### Пример чрез функция с параметри
```c++
#include <iostream>

int mult(int x, int y)
{
    return x * y;
}

int main()
{
    // Declaration of function pointer
    int (*funcptr)(int, int);

    // funcptr is pointing to mult function which multiplies two numbers
    funcptr = mult;

    // Store the result obtained
    int mul = funcptr(5, 7);

    std::cout << "The value of the product is: " << mul << std::endl;
    return 0;
}
```

## **Функции от по-висок ред/High order functions**

### Дефиниция
Функция от по-висок ред ще наричаме функция, която приема друга функция като аргумент или връща функция като резултат.

#### Function Pointer as Return Type

```c++
#include <iostream>

// define the function pointer type
typedef int (*ptr)(int);
typedef ptr (*pointer)();

int add(int x)
{
    std::cout << "from the add function!" << std::endl;
    return x + 5;
}
 
// function that returns a function pointer
ptr print()
{
    std::cout << "The sum is ";
    
    // function pointer is returned
    return &add;
}
 
int main()
{
    // declare a variable
    int x = 45;
    
    // initialize a function pointer
    pointer n = print;
    
    // invoke the pointer and pass the variable as an argument
    std::cout<< (*n())(x) << std::endl;
 
    return 0;
}
```

#### Function pointer as parameter

```c++
void function( return_type_of_pointer (*pointer_name)(data_type1, data_type2. . .) )
{
    //code
}
```

```c++
#include <iostream>  

void func1()  
{  
    std::cout << "func1 is called\n";  
}  

void func2(void (*funcptr)())  
{  
    funcptr();  
}  

int main()  
{  
    func2(func1);  
    return 0;  
}  
```

```c++
#include <iostream>
using namespace std;

// function declaration
int func1()
{
    cout << "Function - 1 is called.\n";
    return 5;
}

// function that takes reference as an argument
int func0(int(&F)())
{
    std::cout << "Function - 0 is called.\n";
    return F();
}

int main()
{
    int x = func0(func1);
    std::cout << "The value of x is: " << x << std::endl;
    return 0;
}
```

