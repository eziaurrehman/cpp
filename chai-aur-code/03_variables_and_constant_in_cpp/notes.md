# Basic C++ Program Structure and Common Statements

- `#include`, `using namespace std;`, and a `main()` function form the minimal runnable program.
- `cout` prints to the console; `endl` ends the line.
- Always return an integer from `main()` (commonly `return 0;`).

---

## Comments and Whitespace:

- **Single-line comments:** `// comment`  
  Useful to temporarily disable lines while debugging.
- **Multi-line comments:** `/* ... */`  
  Used when longer comment blocks are needed.
- **Editor shortcut:** `Ctrl + /` toggles line comments in most editors (VS Code, etc.).
- **Whitespace** (spaces, blank lines) is ignored by the compiler and used only for readability.
- **Commenting guidance:**  
  Write comments that add value (explain non-obvious behavior or intent); avoid redundant comments that restate obvious code.

---

## How Source Code Becomes an Executable:

- The compiler parses source files, builds syntax/abstract syntax trees, and generates an executable.
- Comments are ignored by the compiler during this process.

---

## Role of Data in Programs: Store, Process, Display

- Every program’s primary job is handling data: store it, process it, and then display or use it.
- Examples:
  - Banking app: store balances, unique IDs.
  - Games: store scores.
- Storage can be in memory, disk, or databases depending on requirements.

---

## Variables: Declaration, Initialization, and Examples

- **Declaration** reserves a named storage location  
  Example: `int score;`
- **Initialization** assigns a value when declaring or later  
  Examples:
  - `int balance = 500;`
  - `score = 110;`
- You can declare and initialize in one step or separately.

---

## Identifier (Variable Name) Rules and Best Practices

- Identifiers cannot be reserved keywords (e.g., `for`).
- Cannot contain spaces; can include underscores and digits (but avoid starting with digits).
- Prefer meaningful names (`balance`, `hitesh_balance`) over generic ones (`x1`).
- Use underscores or camelCase consistently.

---

## Constants: Declaring Immutable Values with `const`

- Use `const` to create a value that cannot be modified after initialization.  
  Example: `const int uid = 12212;`
- Modifying a `const` variable causes a compiler error  
  (e.g., _expression must be a modifiable lvalue_).
- Use constants for values that must remain fixed.

---

## lvalue vs rvalue (Brief)

- Assignment requires a **modifiable lvalue** on the left-hand side.
- A `const` variable is **not** a modifiable lvalue, so assignment fails at compile time.

---

## Data Types and Upcoming Topics (Roadmap)

- Basic numeric types: `int` (covered).
- Next types to learn:
  - `string`
  - `bool`
  - arrays
  - objects
  - custom data structures (linked lists, etc.)
- Processing constructs to follow:
  - `if / else`
  - loops
  - `switch`
  - functions
  - object-oriented programming (OOP)

---

## Practical Tips and Coding Discipline:

- Use meaningful variable names.
- Write minimal, value-adding comments.
- Prefer `const` where values should not change.
- Use editor shortcuts (`Ctrl + /`) while debugging.
- Learn **storage first**, then **processing**, to build program logic.

---
