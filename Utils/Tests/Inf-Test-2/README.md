## Контролна работа 2
Задачи от контролна работа 2 на спец. Информатика 2022г.

### Задача 1 
От стандартния вход се прочитат два низа. Първият представлява списък от имената на файловете в директория. Приемаме, че име на файл е последователност от малки и главни латински букви, цифри и точка ( . ). Имената са разделени със спейс. Вторият низ е име на файл (дефиницията на име е същата като по-горе). <br />

Да се напише функция, която добавя името на файла (втория низ) към списъка от файлове (първия низ). Имената на файловете трябва да са уникални. Следователно, ако се опитате да добавите файл, който вече съществува, трябва да му добавите суфикс "_2". <br />
Резултатният низ трябва да е с точна големина! <br />  

Забележка: Няма нужда да правите валидации – приемете, че входните данни са валидни. <br />  

Примери:  <br />
Вход:  <br />
"tempFile.txt upMaterials.txt source.cpp"  
"newFile.txt" <br />  
Изход:  <br />
"tempFile.txt upMaterials.txt source.cpp newFile.txt"  <br />

Вход:  <br />
"primerenIzpitUp.txt seminar10.txt" <br /> 
"primerenIzpitUp.txt" <br />  
Изход:  <br />
"primerenIzpitUp.txt seminar10.txt primerenIzpitUp.txt_2" <br />

###  Задача 2

Да се напише функция, която криптира символен низ. Функцията да приема два параметъра - символен низ, който да бъде криптиран, и парола с дължина точно 9 английски букви. Резултатът да бъде записан на мястото на подадения низ, т.е. да не се създава нов. Да се използва следният алгоритъм:
Първо от паролата да се създаде матрица 3х3, в която всеки елемент е поредният номер на съответната буква на паролата, започвайки от 0 (A или a - 0, B или b - 1, C или c - 2 и т.н.). Например от паролата AbcDEFgHI трябва да се получи матрицата <br />
0 1 2 <br />
3 4 5 <br />
6 7 8 <br />
По същия начин да се преобразува и текстът в редица от числа (JkcLb -> 9 10 2 11 1). <br />
Всяка поредна тройка последователни числа от получената редица да бъде умножена с матрицата, като на получените числа да се вземе само остатъкът при деление на 26. <br />
0 1 2    9        14 (0*9 + 1*10 + 2*2 = 14) <br />
3 4 5 x 10  -> 25 (3*9 + 4*10 + 5*2 = 77, по модул 26 дава 25) <br />
6 7 8    2        10 <br />

0 1 2    11    1 <br />
3 4 5 x 1  -> 11 <br />
6 7 8    0      21 <br />

Ако последната редица е с дължина, по-малка от 3, да се допълни с нули. <br />
Накрая от получените нови тройки числа да се намерят буквите със съответните номера и да се запишат в оригиналния низ, запазвайки дължината му: <br />
OZKBL (14 -> O, 25 -> Z и т.н., 21 отпада) <br />

Забележка: Няма нужда да правите валидации – приемете, че входните данни са валидни.

### Задача 3
Напишете рекурсивна функция, която принтира всички двоични числа (булеви вектори) с дължина n, за които сумата на цифрите на четна позиция е равна на сумата на цифрите на нечетна позиция. <br />

НЕ е позволено използването на цикли. <br />

Примери: <br />
При n = 3: <br />
000 <br />
011 <br />
110 <br />

При n = 4: <br />
0000 <br />
0011 <br />
0110 <br />
1001 <br />
1100 <br />
1111 <br />

Забележка за всички задачи: Позволено е използването единствено на следните библиотечни функции за работа с низове: strlen, strcpy и strcat.
