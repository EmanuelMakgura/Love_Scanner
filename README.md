# ❤️ Love Scanner (C++)

## 📌 Description

Love Scanner is a simple C++ console application that calculates a "love percentage" between two people based on their names. It uses ASCII values of characters to generate a fun compatibility score.

> ⚠️ Note: This is just for fun and entertainment purposes.

---

## 🚀 Features

* Takes two names as input
* Calculates a love percentage using a custom algorithm
* Displays relationship status based on the result:

  * Friend zone 😅
  * Getting interested 😉
  * Love is in the air ❤️
  * True love 💖
  * Soulmates 💍

---

## 🛠️ Tech Stack

* Language: C++
* Compiler: g++, MinGW, or any C++ compiler

---

## ▶️ How to Run

### 🔧 Compile

```bash
g++ Scanner.cpp -o Scanner
```

### ▶️ Execute

```bash
./Scanner
```

*(On Windows use `Scanner.exe`)*

---

## 💡 Example Output

```
Enter your name: John
Enter your partner's name: Jane
Your love percentage is: 78%
True love!
```

---

## 🧠 How It Works

* Each character in the names is converted to its ASCII value
* Values are summed separately for both names
* The total is taken modulo 100 to get a percentage

---

## 📂 Project Structure

```
Love Scanner/
│── Scanner.cpp
│── Scanner.exe
│── README.md
```

---

## 👤 Author

**Emanuel M. Makgura**

---

