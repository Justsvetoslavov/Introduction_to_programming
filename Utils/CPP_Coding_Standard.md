# Стандарт за писане на C++ код

Това е конвенцията, която използвам за целия C++ код в материалите си: решения, примери в записките и условия на задачи, в които се споменават имена на функции.

Документът не е официален ISO стандарт. Целта му е кодът да бъде четим, лесен за поддръжка и с предвидими имена и форматиране, независимо от редактора и платформата.

## 1. Какви конвенции съществуват

Езикът C++ не налага стил, затова големите проекти и компании са формулирали свои правила. Три от най-често срещаните подхода са следните.

### 1.1 Google C++ Style Guide

[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) е подробен наръчник, който покрива както имената и форматирането, така и употребата на езика. Функциите и типовете са в `PascalCase`, константите са с префикс `k`, а променливите са в `snake_case`. Форматирането е компактно: отстъп от 2 интервала, отваряща скоба на същия ред и максимум 80 символа на ред.

### 1.2 LLVM Coding Standards

[LLVM Coding Standards](https://llvm.org/docs/CodingStandards.html) са правилата на проекта LLVM и компилатора Clang. Променливите и типовете са в `PascalCase`, а функциите са в `camelCase`. Файловете обикновено носят името на основния клас в тях. Форматирането е близко до това на Google: 2 интервала, отваряща скоба на същия ред и 80 символа на ред.

### 1.3 Унгарска нотация (Hungarian notation)

Унгарската нотация е въведена от Чарлс Симони (Charles Simonyi) и е широко използвана в ранния код на Microsoft. Тя добавя към името префикс с допълнителна информация и има два варианта:

- **Systems Hungarian** кодира типа: `iCount`, `dwFlags`, `pszName`. Днес този вариант се смята за остарял, защото типът вече е известен на компилатора и средата за разработка, а префиксът лесно престава да отговаря на него след промяна.
- **Apps Hungarian** кодира ролята или смисъла на стойността, а не нейния тип: `rwPosition` за ред и `colPosition` за колона.

### 1.4 Сравнение

| Елемент | Google | LLVM | Hungarian (Systems) | Моят стандарт |
|---|---|---|---|---|
| Функции | `PascalCase` | `camelCase` | префикс + `PascalCase` | `PascalCase` |
| Типове | `PascalCase` | `PascalCase` | често `C` + `PascalCase` | `PascalCase` |
| Локални променливи | `snake_case` | `PascalCase` | `iCount` | `camelCase` |
| Член-данни | `snake_case_` | `PascalCase` | `m_iCount` | `m_camelCase` |
| Константи | `kPascalCase` | `PascalCase` | няма общо правило | `kPascalCase` |
| Стойности на enum | `kPascalCase` | `PascalCase` | няма общо правило | `PascalCase` |
| Namespaces | `snake_case` | малки букви | няма общо правило | `snake_case` |
| Файлове | `snake_case` | `PascalCase` | няма общо правило | `snake_case` |
| Отстъп | 2 интервала | 2 интервала | няма общо правило | 4 интервала |
| Отваряща скоба | на същия ред | на същия ред | няма общо правило | на същия ред |
| Дължина на ред | 80 | 80 | няма общо правило | 100–120 |
| Защита на header | `#define` guards | `#ifndef` guards | няма общо правило | `#pragma once` |

### 1.5 Защо следвам основно Google и какво променям

От **Google** взимам структурата на имената: `PascalCase` за функции и типове, `kPascalCase` за константи, `snake_case` за namespaces и файлове, префикс на проекта при макросите, групирането на `#include` директивите, отварящата скоба на същия ред и разрешението за кратки функции на един ред. Тези правила ясно разграничават видовете имена, а Google е сред най-разпространените и добре документирани стилове.

Промените спрямо Google са умишлени:

| Промяна | Причина |
|---|---|
| Локални променливи и параметри в `camelCase` | Четат се без долни черти и остават визуално различни от `PascalCase` функциите и `snake_case` файловете. |
| `m_` и `s_` за член-данни | Идват от традицията на унгарската нотация, но показват само **ролята** на името. Забелязват се по-лесно от завършващата долна черта на Google. Кодиране на типа (`iCount`, `pszName`) не използвам. |
| 4 интервала вместо 2 | Блоковете се виждат ясно, което е особено важно при учебен код. |
| Редове до 100–120 символа | Съвременните екрани позволяват повече от 80 символа, а с по-голям отстъп лимитът от 80 се изчерпва бързо. |
| Стойности на `enum class` в `PascalCase` | `enum class` вече дава обхват (`ConnectionState::Connected`), затова `k` е излишно. |
| `.cpp` и `.hpp` вместо `.cc` и `.h` | Веднага личи, че файлът е C++, а не C. |
| `#pragma once` вместо `#define` guards | По-кратко е и не изисква уникално име за всеки файл. |
| Изключенията са позволени | Забраната при Google произтича основно от съвместимост със съществуващ код, което не важи тук. |

От **LLVM** не взимам правила за имена. Съвпадението е само при стойностите на `enum`, които и при двата стандарта са в `PascalCase`.

## 2. Именуване

| Елемент | Конвенция | Пример |
|---|---|---|
| Локални променливи | `camelCase` | `fileName`, `retryCount` |
| Параметри на функции | `camelCase` | `bufferSize`, `filePath` |
| Функции | `PascalCase` | `CalculateChecksum()` |
| Методи на клас | `PascalCase` | `GetFileName()` |
| Класове | `PascalCase` | `FileTransferClient` |
| Структури | `PascalCase` | `ConnectionConfig` |
| Обединения (union) | `PascalCase` | `ValueStorage` |
| Enum и enum class | `PascalCase` | `ConnectionState` |
| Стойности на enum | `PascalCase` | `ConnectionState::Connected` |
| Псевдоними на типове (`using`) | `PascalCase` | `FileDescriptor` |
| Concepts | `PascalCase` | `Serializable` |
| Шаблонни типови параметри | `PascalCase` | `Key`, `Value`, `T` |
| Нестатични private/protected член-данни | `m_camelCase` | `m_fileName` |
| Променливи статични член-данни | `s_camelCase` | `s_activeConnections` |
| Именувани константи | `kPascalCase` | `kMaxConnections` |
| Публични полета на агрегатни структури | `camelCase` | `hostName` |
| Namespaces | `snake_case` | `file_transfer` |
| Макроси | `SCREAMING_SNAKE_CASE` | `MFT_MAX_BUFFER_SIZE` |
| Файлове и директории | `snake_case` | `file_transfer_client.cpp`, `network_utils/` |

### 2.1 Променливи и параметри

Използвайте описателни имена в `camelCase`. Избягвайте излишни съкращения и имена, които не носят информация.

```cpp
int userId = 10;
std::string fileName;
bool isConnected = false;

void ProcessFile(const std::string& filePath, std::size_t bufferSize);
```

Когато правят смисъла по-ясен, използвайте за булеви стойности префикси като `is`, `has`, `can` и `should`:

```cpp
bool isConnected;
bool hasPermission;
bool canRetry;
bool shouldReconnect;
```

Избягвайте неясни имена като `flag`, `status` или `result`, когато има по-описателно име.

### 2.2 Функции и методи

Използвайте `PascalCase`. Името трябва да описва действието или резултата:

```cpp
void ConnectToServer();
bool IsValid();
int CalculateChecksum();
void ProcessFile();
```

Getter и setter методите се именуват еднакво:

```cpp
std::string GetFileName() const;
void SetFileName(const std::string& fileName);
```

Конструкторите, деструкторите и операторите следват синтаксиса на езика и името на своя тип. Функцията `main` също запазва името, изисквано от езика.

### 2.3 Класове, структури, enum и псевдоними

Потребителските типове са в `PascalCase`. Предпочитайте `enum class` пред обикновен `enum`.

```cpp
enum class ConnectionState {
    Disconnected,
    Connecting,
    Connected,
    Failed
};

using FileDescriptor = int;
```

Стойностите на enum са в `PascalCase`, без префикс `k`, защото типът вече задава обхвата им:

```cpp
ConnectionState state = ConnectionState::Connected;
```

### 2.4 Член-данни на клас

Нестатичните private и protected член-данни са с префикс `m_`. Така се различават от локалните променливи и параметрите, без да се кодира техният тип.

```cpp
class FileTransferClient {
private:
    std::string m_fileName;
    bool m_isConnected = false;
    int m_retryCount = 0;
};
```

Не използвайте унгарска нотация по тип, например `iCount`, `pFile` или `pszName`. Префиксът `m_` обозначава роля (член на класа), а не тип.

Предпочитайте член-данните да са private или protected и поведението да се предоставя чрез методи. При прости агрегатни структури публичните полета са в обикновен `camelCase`:

```cpp
struct ConnectionConfig {
    std::string hostName;
    int port = 22;
    bool useEncryption = true;
};
```

### 2.5 Статични член-данни

Променливите статични член-данни са с префикс `s_`:

```cpp
class Connection {
private:
    static int s_activeConnections;
};
```

За статични константи, известни по време на компилация, се използва конвенцията за константи:

```cpp
class Connection {
public:
    static constexpr int kDefaultPort = 22;
};
```

Статичните методи нямат специален префикс и са в `PascalCase`.

### 2.6 Константи

Именуваните константи със статична продължителност на съхранение (на ниво namespace или static) са в `kPascalCase`:

```cpp
constexpr std::size_t kMaxBufferSize = 4096;
constexpr int kDefaultTimeout = 30;
```

Обикновените локални константи са в `camelCase`:

```cpp
const std::string fileName = "example.txt";
```

Използвайте `constexpr`, когато стойността може и трябва да се изчисли по време на компилация. Не добавяйте префикс за константа към обикновена променлива само защото е декларирана с `const`.

### 2.7 Шаблони и concepts

Шаблонните типови параметри и concepts са в `PascalCase`. Когато е по-ясно, за единствен общ параметър може да се използва `T`.

```cpp
template <typename Key, typename Value>
class Dictionary;

template <typename T>
concept Serializable = requires(const T& value) {
    value.Serialize();
};
```

### 2.8 Namespaces

Използвайте `snake_case` с малки букви. Не поставяйте `using namespace` директиви в header файлове.

```cpp
namespace file_transfer {
namespace encryption {
    // ...
}
}
```

### 2.9 Макроси

Макросите са в `SCREAMING_SNAKE_CASE`. Макросите на даден проект получават префикс, за да се намали рискът от конфликти:

```cpp
#define MFT_MAX_BUFFER_SIZE 4096
#define MFT_ENABLE_DEBUG_LOGGING
```

Когато постигат същото безопасно, предпочитайте `constexpr`, `inline` функции, шаблони и `using` псевдоними пред макроси.

### 2.10 Файлове и директории

Имената са в `snake_case` с малки букви.

| Вид файл | Разширение | Пример |
|---|---|---|
| C++ header | `.hpp` | `file_parser.hpp` |
| C++ source | `.cpp` | `file_parser.cpp` |
| C header (при нужда от съвместимост със C) | `.h` | `legacy_api.h` |
| C source | `.c` | `legacy_api.c` |
| Незадължителен файл с имплементация на шаблони | `.ipp` | `file_parser.ipp` |

Използвайте `.ipp` само когато отделянето на имплементацията на шаблона е полезно. За защита на header файловете използвайте `#pragma once`, освен ако ограничения на проекта не изискват класически include guards.

## 3. Форматиране

| Област | Конвенция |
|---|---|
| Отстъп | 4 интервала, без табулации |
| Фигурни скоби | Отварящата скоба е на същия ред като конструкцията, а `else` е на реда на затварящата скоба |
| Кратки функции | Функция с празно или едноредово тяло може да остане на един ред |
| Дължина на ред | 100–120 символа, като четимостта е с предимство |
| Указатели | `*` е прикрепено към типа: `int* value` |
| Референции | `&` е прикрепено към типа: `const std::string& name` |
| Интервали | Около бинарните оператори и след запетаи |
| Празни редове | Разделят логическите блокове, без излишно вертикално разстояние |
| Край на файл | Всеки файл завършва с нов ред |

Пример:

```cpp
class FileTransferClient {
public:
    explicit FileTransferClient(const ConnectionConfig& config);

    bool Connect();
    void Disconnect();

private:
    ConnectionConfig m_config;
    bool m_isConnected = false;
};
```

## 4. Съвременни практики в C++

Тези правила допълват именуването и форматирането. Предпочитайте ясна собственост върху ресурсите, безопасно време на живот и стандартни средства на езика пред ненужна сложност.

- **Управление на ресурси:** Използвайте RAII. Свързвайте заемането и освобождаването на ресурс с времето на живот на обект.
- **Собственост:** За изключителна собственост върху динамична памет предпочитайте `std::unique_ptr`. Използвайте `std::shared_ptr` само при реално споделена собственост, а `std::weak_ptr` за наблюдение без удължаване на времето на живот.
- **Rule of Zero:** Предпочитайте класове, които разчитат на членове от стандартната библиотека и не се нуждаят от собствени операции за копиране, преместване и унищожаване. Когато ръчното управление на ресурс ги прави необходими, следвайте Rule of Five.
- **Const коректност:** Използвайте `const` за променливи, параметри, методи и референции навсякъде, където е подходящо.
- **Нулеви указатели:** Използвайте `nullptr`, а не `NULL` или `0`.
- **Псевдоними на типове:** Предпочитайте `using` пред `typedef`.
- **Изброими типове:** Предпочитайте `enum class` пред обикновен `enum`.
- **Преобразувания:** Предпочитайте именуваните C++ преобразувания (`static_cast`, `const_cast`, `dynamic_cast`, `reinterpret_cast`) пред C-style cast. Използвайте най-тясното подходящо преобразуване и го избягвайте, когато е възможно.
- **Полиморфизъм:** Маркирайте предефинираните виртуални функции с `override`. Използвайте `final`, когато клас или виртуална функция умишлено не трябва да се наследява или предефинира.
- **Конструктори:** Използвайте `explicit` за конструктори с един аргумент, освен ако неявното преобразуване не е умишлено.
- **Инициализация:** Предпочитайте директна или brace инициализация, където е подходящо, и не оставяйте неинициализирани променливи.
- **Извеждане на типа:** Използвайте `auto`, когато подобрява четимостта, особено при сложни типове и итератори. Не го използвайте, когато скрива важна разлика в типа.
- **Изключения:** Използвайте ги за наистина изключителни грешки, а не за обикновен контрол на изпълнението.
- **`noexcept`:** Поставяйте го само когато функцията гарантирано не хвърля изключения, а не като предположение за оптимизация.
- **Стандартна библиотека:** Предпочитайте средствата от стандартната библиотека пред собствени еквиваленти, когато са подходящи и по-ясни.
- **Header файлове:** Трябва да са самостоятелни. Включвайте всичко необходимо и не разчитайте на случайни транзитивни `#include` директиви.
- **Хигиена на header файловете:** Не използвайте в тях `using namespace`. Избягвайте дефиниции на функции, които не са `inline` или шаблони, освен ако това не е умишлено.
- **Коментари:** Обяснявайте намерение, ограничения или неочевидни решения (защо), а не това, което кодът вече казва. В `.cpp` и header файловете коментарите са само на английски език.

## 5. Подредба на `#include`

Групите се разделят с празен ред и са в следния ред:

1. Съответният header на `.cpp` файла, ако има такъв.
2. Header файлове от стандартните библиотеки на C и C++.
3. Header файлове от външни библиотеки.
4. Header файлове на проекта.

Вътре в групата подреждайте азбучно, когато е практично. Включвайте само необходимото и премахвайте неизползваните директиви.

```cpp
#include "file_transfer_client.hpp"

#include <cstddef>
#include <string>
#include <vector>

#include <openssl/evp.h>

#include "connection_config.hpp"
#include "logger.hpp"
```

## 6. Цялостен пример

```cpp
#pragma once

#include <cstddef>
#include <string>

namespace file_transfer {

constexpr std::size_t kDefaultBufferSize = 4096;
constexpr int kMaxRetries = 3;

enum class TransferState {
    Idle,
    Connecting,
    Transferring,
    Completed,
    Failed
};

struct TransferConfig {
    std::string hostName;
    int port = 22;
    bool useEncryption = true;
    std::size_t bufferSize = kDefaultBufferSize;
};

class FileTransferClient {
public:
    explicit FileTransferClient(const TransferConfig& config);

    bool Connect();
    bool TransferFile(const std::string& filePath);
    void Disconnect();

    TransferState GetState() const;

private:
    bool IsConnected() const;
    int CalculateChecksum(const std::string& filePath) const;

    TransferConfig m_config;
    TransferState m_state = TransferState::Idle;
    int m_retryCount = 0;

    static int s_activeConnections;
};

} // namespace file_transfer
```

## 7. Приложение в материалите по курса

- **Имена на задачи и примери:** Файловете с решения са `task_01.cpp`, `task_02.cpp` и т.н., а демонстрационните програми са `example_01.cpp`, `example_02.cpp` и т.н.
- **Структура на курса:** Папките `Sem.NN`, `NN-Solutions`, `NN-Pract-NN` и `00-images`, папката `Utils` и документацията (`README.md` и файловете в `Utils`) са изключение от `snake_case`, защото определят подредбата на материалите и публичните им адреси.
- **Стандартна библиотека:** Имената от нея се пишат с `std::`.
- **Език на коментарите:** Коментарите в примерите в записките могат да бъдат на български, защото са част от обяснението. Коментарите в изходните файлове са на английски.
- **Умишлени контрапримери:** Записките могат да показват код извън стандарта, когато точно това е темата, например C-style cast, `NULL` или `using namespace std;`.

## 8. Инструменти

Автоматичните инструменти поддържат еднакво форматиране и основни проверки на кода.

- **clang-format** форматира кода според конфигурация в `.clang-format`.
- **clang-tidy** извършва статичен анализ и открива чести грешки, съмнителни конструкции и възможности за модернизация.

Препоръчителна практика:

1. Дръжте `.clang-format` под версионен контрол.
2. Настройте редакторите, например Cursor и CLion, да използват същата конфигурация.
3. Форматирайте преди commit или налагайте форматирането в CI.
4. Започнете с малък набор от проверки на `clang-tidy` и го разширявайте постепенно.

Конфигурация, която следва правилата за форматиране от този документ:

```yaml
BasedOnStyle: Google
IndentWidth: 4
TabWidth: 4
UseTab: Never
BreakBeforeBraces: Attach
ColumnLimit: 120
AccessModifierOffset: -4
DerivePointerAlignment: false
PointerAlignment: Left
InsertNewlineAtEOF: true
```

Полезна документация:

- [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- [LLVM Coding Standards](https://llvm.org/docs/CodingStandards.html)
- [clang-format](https://clang.llvm.org/docs/ClangFormat.html)
- [clang-tidy](https://clang.llvm.org/extra/clang-tidy/)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

## 9. Обобщение

- `camelCase` за локални променливи, параметри и публични полета на агрегатни структури.
- `PascalCase` за функции, методи, типове, стойности на enum, concepts и шаблонни типови параметри.
- `m_camelCase` за нестатични private и protected член-данни.
- `s_camelCase` за променливи статични член-данни.
- `kPascalCase` за именувани константи и статични константи, известни по време на компилация.
- `snake_case` за namespaces, файлове и директории с код.
- `SCREAMING_SNAKE_CASE` за макроси, по възможност с префикс на проекта.

Прилагайте тези правила последователно. При съществуващ код следвайте установения стил, освен ако не е взето изрично решение той да се мигрира.
