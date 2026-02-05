# Big picture: What this C++ lecture covers

- Focus on **C++ data types**, their categories, practical behavior, and typical pitfalls.
- Includes: **primitive types**, **derived types**, **user-defined types**, **type modifiers**, **type casting**, **strings**, **escape sequences**, and **basic user input**.
- Emphasis is on **practical understanding** (what happens when you choose the “wrong” type) rather than memorizing size tables.

---

# Conceptual model of data types in C++:

- Programming broadly has two tasks: **store data** and **process data**.
- C++ cares about **what type** of data you store: numbers, characters, booleans, etc., because it affects memory, precision, and operations.
- Example of numeric distinction:
  - `4` vs `4.`: same visually, but C++ treats `4` as an **integer** and `4.` as a **floating-point** number with precision.
  - Precision matters (e.g., **4 crore vs 4.2 crore**; or financial/banking applications).

---

# Categories of data types in C++:

- **Primitive (built-in) types:**

  - The most basic units that are directly stored in memory.
  - Examples covered:
    - `int` – integers (whole numbers).
    - `float` – floating-point numbers with **less precision**.
    - `double` – floating-point numbers with **more precision** (used in finance, scientific calculations, stock market values).
    - `char` – single character (`'A'`, `'b'`, etc.).
    - `bool` – boolean values: `true` or `false`.
    - `void` – represents **“empty” / “no value”**, not zero.
      - Used as a return type for functions that return nothing.
      - Conceptually “no data” (like “no temperature received”), not “ degrees”.
      - In C++, `void` consistently means empty, but other languages may overload or reinterpret this idea.

- **Derived types:**

  - Built from primitive types but still ultimately stored in terms of primitives.
  - Mentioned items:
    - **Arrays** – collection of **similar** data types (in C++ typically all elements of same type).
    - **Functions** – code units that can be treated as types (via pointers etc.).
    - **Pointers** – store **memory addresses** of variables.
    - **References** – alternate names (aliases) for existing variables, often accessed via pointers internally.

- **User-defined types:**
  - Types you design yourself, combining primitive and derived types into structures.
  - Examples listed:
    - `struct` – groups variables under one composite type.
    - `union` – multiple members sharing the same memory.
    - `enum` – named set of integral constants (popular even in languages like TypeScript).
    - `class` – core of object-oriented programming in C++.
    - `typedef` – defines an alias for a type.
  - Conceptual example: a **bank account form** is like a `struct`: name, balance, account number etc. stored together.

---

# Size and range of data types: (and why memorizing is optional)

- There exist standard tables showing **size in bytes** and **value ranges** for each type (`char`, `short`, `int`, `long`, `bool`, etc.).
- For most practical coding, it is **not necessary** to memorize exact ranges; they are learned naturally through use.
- However, for **college exams**, you may be required to know or reproduce such tables.
- Professional or competitive programmers sometimes need these ranges for problems involving constraints or memory limits.
- Better approach: refer to **official documentation** or charts when necessary rather than rote memorization.

---

# Primitive type examples in code (Tea example)

- Setup: a C++ file that models data about tea using various primitive types.
- Includes headers:

  - `#include ` for input/output.
  - `using namespace std;` to avoid `std::` prefix everywhere.
  - `int main()` returns an `int`, ending with `return ;`.

- Variables modeling a tea order:
  - `int teaLeaves = 50;`
    - Integer count of tea leaves.
  - `float waterTemperature = 85.5;`
    - For decimal temperature, `float` is required; using `int` would drop `.5`.
    - If declared as `int`, the fractional part is **silently discarded**, no compile error.
  - `double priceOfTea = 299.99;`
    - Larger precision for price; more decimal digits than `float`.
  - `char teaGrade = 'A';`
    - Single character rating of tea quality: `'A'`, `'B'`, etc.
  - `bool isTeaReady = false;`
    - Status flag: ready or not.

---

# Detailed behavior of `bool` in C++:

- `bool` conceptually holds **only** `true` or `false`.
- Internally, it is typically stored as **1 byte** (according to documentation), but only two logical states.
- When assigning non-boolean values:
- Assigning an integer:
- `bool b = 5;` prints as `1` (interpreted as `true`).
- Any **non-zero** value becomes `true`.
- `bool b = ;` becomes `false`.
- Assigning literal `true`/`false`:
- `true` prints as `1`.
- `false` prints as `` .
  - Assigning a `char` like `'a'` also becomes `true` and prints as `1`.
  - Empty character literal is not allowed and results in a compilation error.
- Key debugging insight: if a boolean prints `1` or ``instead of`true`/`false`, it may have been assigned from an integer or other non-boolean type.

---

# Precision behavior of floating-point types (`float` / `double`)

- When storing values like `299.9999999999` in `double` or `float`, not all digits may be preserved.
- Output often shows that beyond certain digits, precision is lost or rounded.
- `double` generally provides more accurate representation than `float` but still finite.
- Developer should:
- Know that **printed value may differ** slightly from the exact mathematical value.
- Check **how many decimal places** `float` and `double` practically preserve on a given compiler.

---

# Type Modifiers in C++: `signed`, `unsigned`, `short`, `long`

C++ allows **modifying integer types** to control their **range**, **size**, and **sign**.

## Common Modifiers

- **`signed`**
  Allows both negative and positive values. This is the **default** for plain `int`.

- **`unsigned`**
  Allows only non‑negative values (`>= 0`). The bit normally used for the sign is used to extend the positive range.

- **`short`**
  Uses fewer bytes than `int`, so it has a **smaller range**.

- **`long` / `long long`**
  Uses more bytes, so it can store **much larger values**.

---

## Example: Using `unsigned`

```cpp
unsigned int smallTeaPack = 100;
```

This variable represents a **count** of tea packets, which logically cannot be negative.

If you try:

```cpp
smallTeaPack = -100;
```

- There is **no compile-time error**.
- At runtime, the value **wraps around** and becomes a very large positive number.
- Example output (platform dependent): `4294967196`.

### Why does this happen?

- The binary bit pattern for `-100` is interpreted as an **unsigned** number.
- This behavior is defined for unsigned integers and is called **wrap-around**.

**Lesson:** Choosing an incompatible type may not cause an error, but it can produce **nonsensical runtime values**.

---

## Garbage Values and Initialization:

- If a **local variable** is declared but **not initialized**, its value is **undefined**.
- Reading such a variable may show a random or very large number (commonly called a _garbage value_).

```cpp
unsigned int count;
cout << count;   // undefined / garbage value
```

### Important Notes

- C++ does **not** automatically initialize non‑static local variables.
- Strange large numbers during debugging often indicate:

  - an **uninitialized variable**, or
  - incorrect use of **unsigned** types.

---

## `long` and `long long` for Large Quantities

When storing very large counts (e.g., huge tea inventory):

- `int` may **overflow**.
- `float` / `double` may lose **integer precision**.
- `long long` is preferred for large **exact integers**.

### Integer vs Floating Point:

- `double` can represent large values but may not store every integer exactly.
- `long long` keeps integer values **exact** within its range.

---

## Typical Sizes and Ranges (Platform Dependent)

> Always consult documentation when exact limits matter.

Common sizes on modern 32‑bit / 64‑bit systems:

- `short` → ~2 bytes
- `int` → ~4 bytes
- `long` → 4 or 8 bytes (platform dependent)
- `long long` → ~8 bytes
- `unsigned int` → same size as `int`, range shifted to non‑negative

This is especially important in **systems programming** and **competitive programming**.

---

# Casting (Type Conversion) in C++

**Casting** means converting a value from one data type to another.

## Why Casting Is Used

- Adjust or drop precision
- Match types in arithmetic expressions
- Convert between numeric types

---

## Example: Truncating a Price

```cpp
float teaPrice = 49.99f;
int roundedTeaPrice = (int) teaPrice;
```

- `(int)` is an **explicit C-style cast**.
- The fractional part is **discarded**.
- Result: `49`

This is **not rounding**. It is **truncation toward zero**.

---

## Casting and Type Consistency

Casting to one type and storing in another may not behave as expected:

```cpp
int x = (short)100000;  // possible data loss before assignment
```

Always ensure the **destination type** can safely hold the value.

---

## Example: Price × Quantity

```cpp
float teaPrice = 49.99f;
int teaQuantity = 2;
```

```cpp
int totalPrice = teaPrice * teaQuantity;
```

- Calculation: `99.98`
- Stored value: `99` (fraction discarded)

```cpp
double totalPrice = teaPrice * teaQuantity;
```

- Stored value: `99.98`

**Lesson:** Choose the correct result type to avoid **silent precision loss**.

---

# Strings in C++

To use C++ strings, include:

```cpp
#include <string>
```

## Basic Usage

```cpp
string favoriteTea = "Lemon Tea";
cout << favoriteTea;
```

- `string` is used for **text**.
- `char` is only for **single characters**.

This is invalid:

```cpp
char teaName = "Lemon Tea"; // incorrect
```

---

## Multiple Strings and Escape Characters

```cpp
string favoriteTea = "Lemon Tea";
string description = "Known as \"best\" tea";
```

---

# Escape Characters and Escape Sequences

The **escape character** in C++ is the backslash (`\`).

## Common Escape Sequences

- `\n` → new line
- `\t` → horizontal tab
- `\"` → double quote
- `\\` → backslash

## Examples

```cpp
"Known as \"best\" tea"
```

Output:

```
Known as "best" tea
```

```cpp
"Lemon Tea\nKnown as best tea"
```

Prints on two lines.

```cpp
"Lemon Tea\tDescription"
```

Inserts a tab space.

---

## File Paths

```cpp
"C:\\Users\\Name"
```

Backslashes must be escaped to avoid unintended escape sequences.

---

# Taking User Input: `getline` and `cin`

C++ provides two common input methods:

## `getline`

```cpp
getline(cin, variable);
```

- Reads an entire line
- Includes spaces

## `cin >>`

```cpp
cin >> variable;
```

- Stops reading at whitespace

---

## Example Program

```cpp
string userTea;
int userQuantity;

cout << "What would you like to order in tea?\n";
getline(cin, userTea);

cout << "How many cups of " << userTea << " would you like to have?\n";
cin >> userQuantity;

cout << userQuantity << " cups of " << userTea;
```

### Explanation

- `getline` allows names like `"Lemon Ginger Tea"`.
- `cin >>` is suitable for numeric input.

---

## Practical Note (VS Code / Code Runner)

- The **Run** button may not accept interactive input.
- Prefer running from the terminal:

```bash
./programName
```

This allows proper user interaction.

---

# Assignments / Challenges based on this lecture:

## Challenge 1: Tea information display

- Write a program that:
- Declares variables to store:
- Type of tea (string).
- Price of tea (floating type).
- Rating of tea (e.g., `char` or `int`).
- Uses appropriate data types.
- Prints the stored information in a **formatted** way using escape sequences (`\n`, `\t`, etc.).

## Challenge 2: Price increase with type casting

- Write a program that:
- Takes user input: **base price of the tea**.
- Increases this price by **10%**.
- Uses **type casting** explicitly to calculate and store the new price.
- Example operations: multiply by `1.1`, possibly cast between `int`, `float`, `double` to control precision and rounding.
- Displays the **rounded** new price using **explicit casting** (e.g., casting to `int` to truncate or designing your own rounding logic).

## Challenge 3: Favorite tea input with formatted output

- Write a program that:
- Uses `getline` to read the user’s **favorite tea name**.
- Uses `cin` to read how many **cups of that tea** they want.
- Displays a **fun message** using that data, for example:
- `"You ordered 3 cups of Lemon Tea."`
- Must use `getline` for the tea name and `cin` for the quantity.

---

## Key takeaways about C++ data types and practice

- Choosing the correct **data type** (and modifiers like `unsigned`, `long`, `short`) determines correctness, precision, and stability of code.
- C++ often does **not** throw errors when types are misused; it silently truncates, wraps, or converts values.
- Understanding:
- How `bool` interprets different inputs.
- How floats/doubles lose precision.
- How unsigned types wrap around on negative assignments.
- How casting affects values.
- Is critical for debugging and writing robust programs.
- Documentation (like official C++ or Microsoft references) is the reliable source for sizes, ranges, and advanced integer types (`int8_t`, `int16_t`, etc.).
