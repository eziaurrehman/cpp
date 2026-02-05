# C++ Loops – Beginner Friendly Notes:

A **loop** is used to repeat a task multiple times until a condition becomes false.

### Real-life example (Tea Shop):

- **Serve tea** → **take money** → **repeat** → **stop when money ends**.
- This repetition is called a loop.

---

## WHY LOOPS ARE IMPORTANT ?

• Avoid writing repeated code  
• Make programs short and clean  
• Used in counting, repetition, automation

---

## CORE COMPONENTS OF ANY LOOP:

### 1. Variable (Initializer)

- Keeps track of repetitions

#### Example:

```
int cups;
```

### 2. Condition

Decides how long the loop runs
Example:
cups > 0

### 3. Increment / Decrement

- Updates the variable

#### Example:

```
cups--;
```

### 4. Body (Statements)

- Code that runs repeatedly

#### Example:

```
cout << "Serving tea";
```

---

## WHILE LOOP:

#### Use when:

- Condition is checked before execution
- Loop may run zero or more times

#### Syntax:

```
while (condition) {
// body
}
```

#### Example:

```
int cups;
cout << "Enter number of tea cups: ";
cin >> cups;

while (cups > 0) {
cout << "Serving a cup of tea. Cups remaining: " << cups << endl;
cups--;
}

cout << "All tea cups are served!" << endl;
```

#### Key Point:

- If condition is false at start, loop will not run.

---

## DO-WHILE LOOP:

#### Use when:

- Code must run at least once
- Condition is checked after execution

```
Syntax:
do {
// body
} while (condition);
```

#### Example:

```
string response;

do {
cout << "Do you want more tea? (yes/no): ";
cin >> response;
} while (response != "no");
```

#### Key Point:

- Runs minimum one time.

---

## FOR LOOP (MOST COMMON)

#### Use when:

- Number of repetitions is known

```
Syntax:
for (initialization; condition; increment/decrement) {
// body
}
```

#### Example:

```
for (int i = 1; i <= 5; i++) {
cout << "Brewing cup " << i << " of tea..." << endl;
}
```

#### Parts:

- Initialization → starting value
- Condition → loop limit
- Increment → update value

---

## LOOP EXECUTION FLOW:

1. Initialization (once)
2. Condition check
3. Body executes
4. Increment / Decrement
5. Repeat until condition becomes false

---

## BREAK STATEMENT:

- Immediately stops the loop
- Control goes outside the loop

#### Example:

```
string response;

while (true) {
cout << "Do you want more tea? (type stop to exit): ";
cin >> response;

    if (response == "stop") {
        break;
    }

    cout << "Here is another cup of tea ☕" << endl;

}

cout << "No more tea will be served." << endl;
```

---

## COMMON BEGINNER MISTAKES:

- Infinite loop (no increment/decrement)
- Using = instead of ==
- Wrong condition placement
- Confusing while and do-while
- Wrong string comparison

```
Wrong:
if (response == 'no')

Correct:
if (response == "no")
```

---

## WHICH LOOP SHOULD I USE?

- Unknown repetitions → while
- Must run once → do-while
- Fixed repetitions → for

---
