## Задачи

1. Напишете програма на C++, която извежда следния текст на екрана:   
    
```c++
Oh what
a happy day!
Oh yes,
what a happy day!
```

Решение:
cout << "oh What?" << endl << "a happy day!" << endl << "oh yes,"<<endl << "what a happy day!" << endl;


2. Да се напише програма, която изчислява периметъра и лицето на правоъгълник със страни 5,4 и 7,9.


Решение:
int a1 = 5, b1 = 4, c1 = 5, d1 = 4;
int a2 = 7 ,b2 = 9, c2 = 7, d2 = 9;
cout << "P1= " << (a1 + b1 + c1 + d1) << endl << "S1= " << (a1 * b1) << endl;
cout << "P2= " << (a2 + b2 + c2 + d2) << endl << "S2= " << (a2 * b2) << endl;


3. Да се напише програма, която чете от конзолата дадена сума в лева и ги превръща в долари и в евра.

Решение:
double a;
cout << "Enter a value in lv: ";
cin >> a;
cout << "The value in euro is: " << round((a / 1.95583)*100)/100  << endl; 
cout << "The value in dollars is: " << round((a / 1.79549)*100 )/100  << endl;

4. Напишете програма, която подканя потребителя да въведе дължините на двете страни на правоъгълник, <br />
   **като му извежда съобщение, например "Please enter the length of the first side:"**. <br />
   Програмата да изведе периметърът и лицето на този правоъгълник. <br />
   **Страните може да не са цели числа!** <br />

   Решение:
   double a, b;
   cout << "Please enter the length of the first side: ";
   cin >> a;
   cout << "Please enter the length of the second side: ";
   cin >> b;
   cout<<"P="<<2*(a+b)<<endl;
   cout<<"S="<<a*b<<endl;

5. Напишете програма, която взима две числа от стандартния вход и извежда *true* ако първото е по - малко от второто и *false* в противен случай.

Решение:
int a, b;
cout << "Please enter the first number: ";
cin >> a;
cout << "Please enter the second number: ";
cin >> b;

if (a > b)
{
	cout <<"true" << endl;
}
else if (a < b)
{
	cout << "false" << endl;
}
else
{
	cout << a << " is equal to " << b << endl;
}

6. Да се напише програма, която чете от конзолата 2 числа и отпечатва остатъка и частното при делението им.<br />

**Пример:** <br />
Вход:
```c++
Dividend: 25
Divisor: 3
```
Изход:
```c++
The quotient of the division is : 8
The remainder of the division is : 1
```

Решение:
int  a, b;
cout << "Divident: ";
cin >> a;
cout << "Divisor: ";
cin >> b;
cout << "The Quotient of the division is: " << a / b << endl;
cout << "The Remainder of the division is: " << a % b << endl;

7. Пешо отива на пазар за плодове – ябълки, круши и банани. Помогнете на майка му да генерира автоматично съобщение, с което да му напомни колко от всеки плод трябва да купи.<br />

**Пример:**<br />
Вход:
```c++
Apples: 5
Pears: 6
Bananas: 3
```
Изход: 
```c++
Pesho, don’t forget to buy 5 apples, 
6 pears and 3 bananas!

Решение:
int a, b, c;
cout << "apples: ";
cin >> a;
cout << "Pears: ";
cin >> b;
cout << "bananas: ";
cin >> c;
cout << "Pesho, don't forget to buy " << a
 << " apples, " << b << " pears and " << c << " bananas!" << endl;

```
            
8. Да се напише програма, която:                    
   А) Потребителят въвежда радиус на окръжност;           
   Б) Програмата изчислява дължината на окръжността;                     
   В) Програмата изчислява лицето на окръжността при зададения радиус(PI = 3,14159265). <br />   


   Решение:
   int  r;
double const PI = 3.14159265;
cout << "Please enter the radius of the circle: ";
cin >> r;
cout << "The circumference of the circle is: " << round(2 * PI * r )<< endl;
cout << "The area of the circle is: " << round(PI * r * r )  << endl;

       
9. Да се въведат от конзолата коефициенти за квадратното уравнение ax2 + bx + c. Да се намерят корените на уравнението.<br />
**Mоже да се използва <cmath> (math.h) sqrt** <br />
             
**Пример:**<br />
Вход:
```c++
a = 1;
b = -5;
c = 6;
```
Изход: 
```c++
x1 = 2, x2 = 3
```

Решение:
double a, b, c, x1, x2;
cout << "a= ";
cin >> a;
cout << "b= ";	
cin >> b;
cout << "c= ";
cin >> c;
cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
cout << "x1= " << x1 << endl;
cout << "x2= " << x2 << endl;


10. Напишете програма, която разменя стойностите на две числови променливи.  

int c, a, b;
cout << "a= ";
cin >> a;
cout << "b= ";
cin >> b;
c = a;
a = b;
b = c;
cout << "a= " << a << endl;
cout << "b= " << b << endl;

11. Напишете програма, която намира минималното (максималното) от две цели числа.    

Решение:
int a, b;
cout << "a= ";
cin >> a;
cout << "b= ";
cin >> b;
if(a>b){
	cout << "max number is: " << a << endl;
	cout << "min number is: " << b << endl;
}
else{
	cout << "max number is: " << b << endl;
	cout << "min number is: " << a << endl;
}

12. Да се напише програма, която чете от конзолата брой секунди и изчислява колко дни, часове, минути и секунди са.<br />

**Пример:**<br />
Вход:
```c++
Seconds: 533628
```
Изход:
```c++
6 days, 4 hours, 13 minutes and 48 seconds
```

Решение:
int a;
cout << "seconds: ";
cin >> a;
cout << a / 86400 << " days, " << (a % 86400) / 3600 << " hours, " << ((a % 86400) % 3600) / 60 
 << " minutes and " << ((a % 86400) % 3600) % 60 << " seconds." << endl;
                
13. Напишете програма, която приема от входа две двойки реални числа, отговарящи на две точки в равнината.                     
    Да се отпечата растоянието между точките закръглено до 2-рия знак след десетичната запетая.                      
    **Потърсете математическата формула в интернет ако не я знаете!**   


Решение:
         double x1, y1, x2, y2;
cin >> x1 >> y1 >> x2 >> y2;
cout << "A(" << x1 << "," << y1 << ") and B(" << x2 << "," << y2 << ")" << endl;
cout << "The distance between A and B is: " << round(sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)))*100)/100;        
                               
14. Напишете програма която приема номер на кредитна карта(16 цифри). <br />
    Програмата да изведе същият този номер, но със скрити първите 12 цифри (XXXXXXXXXXXX1234).

Решение:
long long n;
cout << "Please enter a 16-bit credit card number: ";
cin >> n;
if (n>=1000000000000000 && n<=9999999999999999)
{
	cout << "The credit card number is: XXXXXXXXXXXX" << n%10000 << endl;
}
else {
	cout << "The number is not a 16-bit credit card number!" << endl;
}