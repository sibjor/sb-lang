MIT License

Copyright (c) 2025 Sixten Björling

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

---

About me:

Alias (plural): 

    @sibjor, @author, @admin, @root, @general, 
- Public channels:

    Community: https://www.syntaxbrigade.io

    Github // https://www.github.com/sibjor
    LinkedIn // https://www.linkedin.com/in/sibjor
    X // https://x.com/sixtenbjorling
        
    Personal website: https://www.sibjor.se
    Author's email: sixten@sibjor.se, sixteen610@gmail.com

---

GENERAL SYNTAX:

This is my take on a syntax design. The current implementation is limited and will expand as the project evolves.
Data types provide a structured way to store data, ordered or keyed in specific patterns.

DATA TYPES:

* NULL (NULL):
    - Represents the absence of a value.
    - Example: 1 + a = NULL;

* Integer (int):
    - Stores whole numbers without decimals.
    - Example: int a = 160;

* Floating points (float):
    - Stores numbers with decimal points.
    - Example: float a = 19.204;

* Character (char):
    - Stores a single character.
    - Example: char a = 'q';

* Name (name):
    - A string-like type restricted to letters only; no numbers or symbols allowed.
    - The length is determined by encountering a non-name character such as whitespace or line start.
    - Example: name a = "Sixten";

* String (string):
    - A sequence of characters, capable of storing text of arbitrary length.
    - Example: string a = "Hello World!";

* Boolean (bool):
    - Stores one of two values: true or false. Defaults to false if unset.
    - Example: bool a = true;

* Array ([], []{}, [][]):
    - Stores multiple values of the same type in one or more dimensions.
    - Indexed starting at zero.
    - Examples:
        int[5] a = [1, 2, 3, 4, 5];                 # One-dimensional array of integers
        int[2][3] matrix = [[1, 2, 3], [4, 5, 6]];  # Two-dimensional array (matrix)
        bool[4] flags = [true, false, true, false]; # Array of booleans
        string[3] names = ["Anna", "Bob", "Cleo"];  # Array of strings

* Collection (coll):
    - Flexible container allowing mixed data types with indexed access.
    - Supports complex indexing schemes.
    - Examples:
        coll a = { 0: 42, "name": "Sixten", 2: true };
        coll matrix = { [0,0]: 1, [0,1]: 2, [1,0]: 3, [1,1]: 4 };

* Hash maps (map):
    - Stores key-value pairs with efficient lookup using hashing.
    - Keys are unique; values may be any type.
    - Internally uses hash functions to map keys to storage locations.
    - Collision resolution methods ensure reliable access.
    - Supports nesting of maps.
    - Examples:
        map<string, int> ages = { "John": 31, "Anna": 36 };
        map<int, map<string, float>> scores = {
            1: { "math": 95.5, "english": 88.0 },
            2: { "math": 78.0, "english": 91.2 }
        };
        map<string, map<string, bool>> permissions = {
            "admin": { "read": true, "write": true },
            "guest": { "read": true, "write": false }
        };

* Pointer (ptr<T>) (T*):
    - Stores the memory address of a value of type T.
    - Enables indirect access and manipulation of data.
    - Requires careful memory management to avoid errors.
    - Example: ptr<int> p = &a;   # Generic style
    - Example: int* p = &a;       # Classic C-style pointer syntax

* Reference (ref<T>) (T&):
    - Represents an alias to an existing value of type T.
    - Provides direct access without copying, safer and easier to use than pointers.
    - Cannot be null and must be initialized when declared.
    - Example: ref<int> r = a;    # Generic style
    - Example: int& r = a;        # Classic C++ reference syntax

* Function (func):
    - Represents executable code blocks that can be passed and invoked.
    - Example: func add = (int a, int b) -> int { return a + b; };

* Tuple:
    - Fixed-size ordered collection of elements of potentially different types.
    - Example: tuple<int, string, bool> person = (25, "Sixten", true);

* Enum:
    - Collection of named constant values.
    - Example: enum Color { Red, Green, Blue };

* Struct:
    - Aggregates related data fields into a single compound type.
    - Example: struct Point { int x; name y; name z;};

END OF GENERAL SYNTAX

---