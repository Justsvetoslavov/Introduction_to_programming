## Условни конструкции
Конструкция, която дава възможност да се изпълни (или не) една или друга последователности от действия (оператори), <br />
в зависимост от някакво условие, се нарича **условна**.

### if - else
```c++
if (<условие>)
{
  <действие>
}
```
**Семантика:**
- if (ако) – запазена дума в езика C++.
- else(иначе) -  запазена дума в езика C++.
- else if(или ако) - запазена дума в езика C++.
- <условие> – булеви израз.
- <действие> – действие или последователност от действия.

Пресмята се стойността на булевия израз, обуславящ условието. <br />
Ако резултатът е true, изпълнява се <действие>. <br />
В противен случай <действие> НЕ се изпълнява. <br />

```c++
if(<условие>)
{
  //изпълнява се, ако условието е истина. 
}
else //не е задължителен компонент
{
  //изпълнява се, ако условието е лъжа. 
}
```
### if - else if - else

```c++
if(<condition1>)
{
	//изпълнява се, ако <condition1> е истина. 
}
else if(<condition2>)
{
	//изпълнява се, ако <condition1> е лъжа и <condition2> е истина. . 
}
.
.
.
else if(<conditionK>)
{
		//изпълнява се, ако <condition1>..<conditionK-1> са лъжа и <conditionК> е истина. . 
}
else //не е задължителен компонент
{
		//изпълнява се, ако всички горни условия са лъжа. 
}
```

### Switch statement

```c++
switch(<израз>)
{
  case <стойност1> : <действия>;
  break;
  case <стойност2> : <действия>
  break;
  case <стойностN> : <действия>;
  break;
  default: <действия>;
}
```

**Семантика:**
- switch (ключ)
- case (случай, вариант)
- Case-стойност – израз от допустим тип (bool. Int, char, изброим). Реалните типове double и float **НЕ** са допустими.
- Израз 1, 2, 3...N – константни изрази, с различни стойности, съвместими с типа на **израз**.
- default (по подразбиране) – изпълява се, в случай че нито един от изразите 1, 2, 3...N **НЕ** е изпълнен.
- break – Оператор за преход. Oператор break - прекратява изпълнението на switch.

```c++
switch(<целочислена променлива>)
{
	case value1: code.. break;
	case value2: code.. break;
	case value3: code.. break;

	default: code... break; //незадължително - ако променливата няма никоя от изредените стойности.
}
```

### Тернарен оператор

```c++
<условие> ? <израз1> : <израз2>
```
- Ако условието е истина, се връща оценката на израз1.
- Ако е лъжа, то се връща оценката на израз2.

![Ternary operator](https://static.javatpoint.com/cpages/images/conditional-operator-in-c.png)

## Задачи

1. **Between 100 and 200** <br />
   Да се напише програма, която въвежда цяло число и проверява дали е под 100, между 100 и 200 или над 200. <br />
   Да се отпечатат съответно съобщения като в примерите по-долу: <br />
        
    **Примери:** <br />
      - Вход: 95, Изход: Less than 100 <br />
      - Вход: 120, Изход: Between 100 and 200 <br />
      - Вход: 250, Изход: Greater than 200 <br />

2. **Speed check** <br />
   Да се напише програма, която въвежда скорост (десетично число) и отпечатва информация за скоростта. <br />
    - При скорост до 10 (включително) отпечатайте “slow”.
    - При скорост над 10 и до 50 отпечатайте “average”.
    - При скорост над 50 и до 150 отпечатайте “fast”.
    - При скорост над 150 и до 1000 отпечатайте “ultra fast”.
    - При по-висока скорост отпечатайте “extremely fast” <br />
      
    **Примери:** <br />
     - Вход: 8, Изход: slow <br />
     - Вход: 49.5, Изход: average <br />
     - Вход: 126, Изход: fast <br />
     - Вход: 3500, Изход: extremely fast <br />
  
3. **Chainsaw** <br />
   Ше казваме, че поредица от числа е трион, ако всяко число в нея е едновременно поголямо или равно от двата си съседа или пък едновременно по-малко или равно от тях.    За първия и последния елемент имаме само по един съсед. <br />
   Напишете програма, която въвежда от стандартния 5 на брой цели числа.  <br />
   Да се изведе на стандартния изход "yes", ако въведената поредица е трион, или "no", в противен случай. <br />

     **Примери:** <br />
      - Вход: 1 5 1 0 3 , Изход: no <br />
      - Вход: -10 10 -2 11 -22 , Изход: yes <br />
