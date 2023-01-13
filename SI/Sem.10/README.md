## Указатели към функции

Указателят към функция има за стойност адреса на изпълнимия код на дадена функция. <br />
Указателите към функции могат да се използват, за да се извикват функции и да се подават функции като параметри на други функции(функции от по-висок ред). <br />
Не може да се извършва указателна аритметика върху указатели към функции. <br />

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

**Оператор typedef** - чрез него може да задаваме имена (синоними) на типове. (oт C)
**Оператор using** - чрез него може да задаваме имена (синоними) на типове. (от C++11)

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
## ТБА - in progress

### Benefits of Function Pointer in C++
- A function pointer can be passed as a parameter to a function, thus providing the functionality of implementing callback functions.
- A function pointers allows you to send along instructions for how to perform something.
- By supplying function pointers as parameters, you may construct flexible functions and libraries that allow the programmer to determine behavior.

### Conclusion
- Just like variables, functions also have pointers to them, that stores the address which points to the first instruction of the function in C++.
- The address of a function can be accessed by just writing the function name without the brackets.
- Callback functions are functions that are executed when a particular event takes place. This can be achieved by using a function pointer.
- A function pointer cannot be used to allocate or deallocate memory as they point to the address of the code.
- We can also call a function indirectly with the help of a pointer ( function pointer ) by using the name of the function pointer in C++.
- A function pointer can also be used as a return type or as an argument to another function.

## Lambda functions
Т.нар анонимни функции - дефинират се еднократно на мястото, на което се използват (извикват или подават като параметър на функция). <br />
