# Cpp-Util-Library
A lightweight collection of reusable C++ helper functions for randomization, encryption, swapping, validation, arrays, and more.

clsUtil – A Handy C++ Utility Library
=====================================

A lightweight collection of reusable C++ helper functions for randomization, encryption, swapping, validation, arrays, and more.  
Perfect for students and developers who want ready-made utilities to speed up coding projects.  

------------------------------------------------------------
Features
------------------------------------------------------------
- Random number and character generation
- Text encryption and decryption
- Key and word generation
- Swap support for multiple types
- Array filling and shuffling
- Safe input validation for numbers
- Console utilities (clear screen, color reset)
- Fibonacci sequence printing with recursion

------------------------------------------------------------
File Structure
------------------------------------------------------------
project/
│── clsUtil.h     # Utility class header
│── clsDate.h     # (Required dependency for Swap function)
│── main.cpp      # Example usage

------------------------------------------------------------
Installation & Usage
------------------------------------------------------------
1. Clone the repository:
   git clone https://github.com/Faresincode/clsUtil.git
   cd clsUtil

2. Include the header file in your project:
   #include "clsUtil.h"

3. Initialize random seed before using random functions:
   clsUtil::Srand();

4. Compile with any modern C++ compiler:
   g++ main.cpp -o program
   ./program

------------------------------------------------------------
Example Applications and Outputs
------------------------------------------------------------

[Example 1] Random Number & Key Generation
------------------------------------------
Code:
    clsUtil::Srand();
    cout << "Random number: " << clsUtil::RandomNumber(1, 100) << endl;
    cout << "Generated Key: " << clsUtil::GenerateKey() << endl;

Sample Output:
    Random number: 57
    Generated Key: AXKD-ZPLQ-MNBV-QWER


[Example 2] Encryption & Decryption
-----------------------------------
Code:
    string msg = "Hello";
    string enc = clsUtil::EncryptText(msg, 3);
    string dec = clsUtil::DecryptText(enc, 3);
    cout << "Original: " << msg << endl;
    cout << "Encrypted: " << enc << endl;
    cout << "Decrypted: " << dec << endl;

Sample Output:
    Original: Hello
    Encrypted: Khoor
    Decrypted: Hello


[Example 3] Fibonacci Sequence
-------------------------------
Code:
    cout << "Fibonacci: ";
    clsUtil::PrintFibonacciUsingRecursion(5, 0, 1);
    cout << endl;

Sample Output:
    Fibonacci: 1 2 3 5 8


[Example 4] Array Shuffle
--------------------------
Code:
    int arr[5] = {1, 2, 3, 4, 5};
    clsUtil::ShuffleArray(arr, 5);
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";

Sample Output:
    3 1 5 2 4


------------------------------------------------------------
License
------------------------------------------------------------
This project is open-source and available under the MIT License.
