# clsUtil - Utility Functions in C++ 🛠️

The **`clsUtil`** class provides a wide collection of **helper and utility functions** in C++.  
It covers **random generation 🎲, encryption 🔒, swapping ↔️, validation ✅, shuffling 🔀, Fibonacci sequence 🌀, and more!**

---

## 📌 Features

- 🎲 **Random utilities**  
  - Generate random numbers within a range  
  - Get random characters of different types (letters, digits, symbols)  
  - Generate random words and keys  

- 🔒 **Encryption & Decryption**  
  - Simple character shifting for text encryption and decryption  

- 🛠️ **Array & Value Manipulation**  
  - Swap values of different types (`int`, `float`, `short`, `double`, `long long`, `string`, `clsDate`)  
  - Shuffle arrays of numbers and strings  
  - Fill arrays with random numbers, words, or keys  

- ✅ **Validation**  
  - Verify numeric input (int, float, double, etc.)  
  - Prevent invalid inputs in console apps  

- 🔢 **Math Helpers**  
  - Fibonacci sequence generation (using recursion)  
  - Operator and level mapping helpers  

- 🎨 **Console Utilities**  
  - Reset console screen and colors  

---

## 📂 File Structure

- **`clsUtil.h`** → Main header file containing the `clsUtil` class.  
- **`clsDate.h`** → Dependency used for swapping `clsDate` objects.  
- **`main.cpp`** → Example usage and test file.  

---

## 🚀 Example Usage

### Example 1: Generate a Random Number

```cpp
#include <iostream>
#include "clsUtil.h"

int main() {
    clsUtil::Srand();
    std::cout << "Random Number: " << clsUtil::RandomNumber(1, 100) << std::endl;
    return 0;
}
```

**Output (example run):**
```
Random Number: 57
```

---

### Example 2: Generate Random Key

```cpp
#include <iostream>
#include "clsUtil.h"

int main() {
    std::string key = clsUtil::GenerateKey();
    std::cout << "Generated Key: " << key << std::endl;
    return 0;
}
```

**Output (example run):**
```
Generated Key: XJDP-FGHK-QWER-TYUI
```

---

### Example 3: Encrypt and Decrypt Text

```cpp
#include <iostream>
#include "clsUtil.h"

int main() {
    std::string text = "Hello";
    std::string encrypted = clsUtil::EncryptText(text, 3);
    std::string decrypted = clsUtil::DecryptText(encrypted, 3);

    std::cout << "Original: " << text << std::endl;
    std::cout << "Encrypted: " << encrypted << std::endl;
    std::cout << "Decrypted: " << decrypted << std::endl;
    return 0;
}
```

**Output:**
```
Original: Hello
Encrypted: Khoor
Decrypted: Hello
```

---

### Example 4: Shuffle an Array

```cpp
#include <iostream>
#include "clsUtil.h"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    clsUtil::ShuffleArray(arr, 5);
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}
```

**Output (example run):**
```
3 1 5 4 2
```

---

### Example 5: Fibonacci Using Recursion

```cpp
#include <iostream>
#include "clsUtil.h"

int main() {
    std::cout << "Fibonacci Sequence: ";
    clsUtil::PrintFibonacciUsingRecursion(7, 0, 1);
    return 0;
}
```

**Output:**
```
Fibonacci Sequence: 1 2 3 5 8 13 21
```

---

## 🔧 Requirements

- C++ compiler supporting **C++11 or later**

---

## 📜 License

This project is licensed under the MIT License.  
Feel free to use, modify, and share it with proper attribution 🙌

---

## 🤝 Contribution

Contributions are welcome!  
Fork 🍴 the repo, create a branch 🌱, and submit a pull request 🔀.

