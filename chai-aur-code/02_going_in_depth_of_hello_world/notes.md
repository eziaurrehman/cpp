# Program structure and entry point (Hello World in C++)

- Every C++ program requires a single entry function named main; the OS runs the compiled executable and transfers control to main.
- main must declare a return type (commonly int); the return value becomes the process exit code (convention: ** = success **, nonzero = failure/other status).
- Example behavior: returning 5 results in the process exiting with code 5, which other programs/environments can observe.

# Source vs executable:

- The source file (e.g., hello.cpp) is not executed directly; the compiler transforms source into an executable that the OS can run.
- The executable contains the compiled representation of your program (often shown as hello or hello.exe depending on platform).

# Preprocessor directives and #include <iostream>

- Lines beginning with # are preprocessor directives; #include <iostream> makes input/output stream declarations available to your code.
- iostream provides names like std::cout, std::cin, std::cerr, and related stream functionality.
- The preprocessor stage is an early compile step; the compiler later tokenizes and parses those tokens.

# Compiler pipeline: checks, tokens, parsing, and whitespace

- Compilation includes syntax checks, tokenization, and parsing; editors colorize code by leveraging tokenization rules.
- Extra whitespace (lines/spaces) does not affect compiled behavior; the compiler ignores unnecessary spaces as part of parsing.
- The compiler is responsible for many automatic cleanups and optimizations (not minor formatting differences).

# Namespaces and name collision avoidance:

- Namespaces act as named containers (regions) for identifiers to avoid name collisions between libraries and user code.
- The C++ standard library uses the std namespace; std::cout means cout from namespace std.
- You can bring a whole namespace into scope with using namespace std; or pick specific names with using std::cout; and using std::endl;
- Best practice nuance: importing an entire namespace can be heavy or risky in large codebases; selectively importing names or fully qualifying (std::) prevents collisions.
- Users can define their own namespaces (example: namespace my_chai { void display(); }) to group code and avoid conflicts.

# Streams and the insertion operator (<<)

- The insertion operator << passes (streams) values to output streams: std::cout << "Hello" << std::endl;
- std::endl injects a newline and flushes the stream; it is part of the std namespace.
- Streams are extensible; besides console (std::cout), input/output can be directed to files or other custom streams (and libraries provide additional stream types).

# Alternative using styles

- Full import: using namespace std; (brings entire namespace into scope).
- Selective import: using std::cout; using std::endl; (only chosen names).
- Fully qualified use: std::cout << ...; (no using statements).
- All achieve the same effect; choice affects readability and collision risk.

# Libraries, frameworks, and typical namespaces

- Popular C++ libraries/frameworks use their own namespaces to expose APIs: examples include Qt (GUI toolkit), Eigen (linear algebra header-only library), and Google Test (gtest) for unit testing.
- These libraries simplify tasks (widgets, math, testing) and typically recommend namespacing conventions to integrate safely.

# Functions, return types, and typing rules

- C++ is statically typed: functions must declare their return type and parameter types.
- A function definition includes a meaningful name; using descriptive names (e.g., getApiFromGitHub) improves readability and intent.
- The main function returning int satisfies the static type rule; compilers may tolerate omissions in simple examples but the correct declaration communicates intent and return behavior.

# Operators and semantics explained

- << is an operator that takes a left-hand stream and a right-hand value and forwards the value into the stream; chained uses pass results successively.
- Semicolons (;) terminate statements; some cases (e.g., certain block-terminated contexts or formatting choices) may appear optional to the reader, but standard statement syntax uses semicolons.
