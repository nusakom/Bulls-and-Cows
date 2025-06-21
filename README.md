# 🐂 Bulls and Cows 猜数字游戏（C语言实现）

Welcome to the **Bulls and Cows** number guessing game written in C.  
欢迎来到使用 C 语言编写的 **“猜数字游戏”（Bulls and Cows）**！

---

## 🎮 Game Overview 游戏概览

> 🧠 This is a classic guessing game:  
> You must guess a secret number within a limited number of tries, and get hints like:
> - **"Bull"**: Correct digit and correct position  
> - **"Cow"**: Correct digit but wrong position  
>
> 🧩 你要猜一个随机生成的数字，通过每次输入获得提示：
> - **"Bull"（公牛）**：数字和位置都对
> - **"Cow"（奶牛）**：数字对但位置错

---

## 📦 Repository 仓库信息

- 🔗 GitHub: [nusakom/Bulls-and-Cows](https://github.com/nusakom/Bulls-and-Cows)
- 📁 Language / 语言: C
- 🎯 Target: Terminal / 控制台游戏

---

## 🛠️ Requirements 编译环境

- ✅ GCC / Clang Compiler
- ✅ Works on Windows / Linux / macOS
- ✅ Makefile (optional)

---

## 🧰 Build Instructions 编译方法

### 💻 使用 gcc 编译：

```bash
gcc -o bulls_and_cows bulls_and_cows.c
./bulls_and_cows
````

### 💡 或使用 Makefile：

```bash
make
./bulls_and_cows
```

---

## 🚀 How to Play 游戏规则

1. The computer randomly generates a secret number (e.g., 4 digits, no repeats)
2. You input a guess
3. The program tells you how many **Bulls** and **Cows** you got
4. You win if you guess all digits and positions right!

---

### 🎯 示例输出 Sample Output

```text
[7] Please enter your guess: 1234
Your guess: 1234.
Result: 1 Bull(s), 2 Cow(s)
[6] Please enter your guess: 4321
Your guess: 4321.
Result: 0 Bull(s), 4 Cow(s)
...
Guess == reward! You win!
```

---

## 🌟 Features 特性

* 🎲 Random number generation
* 🔄 Replayable structure
* 📉 Number of tries limited (e.g., 7)
* ✅ Input validation (optional)
* 🧹 Cross-platform terminal support

---

## 📌 Optional Enhancements 可选扩展

* [ ] 自定义数字长度（如 3 位或 5 位）
* [ ] 显示历史猜测
* [ ] 多语言支持
* [ ] 输入错误提示优化

---

## 📜 License 开源许可

MIT License
自由使用、学习、修改、分发。

---

## 👤 Author 作者

**（nusakom）**
📫 GitHub: [@nusakom](https://github.com/nusakom)

---

> 🤝 Pull requests and issues are welcome! 欢迎 PR 和 Issue！

```

 ✅ 你可以这样使用：

1. 将内容保存为项目根目录的 `README.md`
2. Push 到 GitHub 后，自动在首页展示



如果你已经加上了“牛和牛的判断逻辑”，我也可以帮你在 README 中详细讲解规则。如果你还没有实现“牛和牛”机制，需要我补一个完整的 `bulls_and_cows.c` 代码模板也可以告诉我。要吗？
```
