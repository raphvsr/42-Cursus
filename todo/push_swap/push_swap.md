# 🔄 Push_swap
> *Because Swap_push doesn’t feel as natural*

---

## 🎯 Overview
> [!abstract] Summary
> This project is a simple yet highly structured algorithmic challenge: you need to sort data. You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.
> 
> Your goal? Write a C program called `push_swap` that calculates and displays the shortest sequence of instructions needed to sort the given integers.

---

## 📜 The Rules
> [!info] Stacks
> - **Stack A**: Contains a random number of unique negative and/or positive integers.
> - **Stack B**: Is empty.
> - **Goal**: Sort numbers in stack **A** in ascending order.

> [!quote] Operations
> | Op | Action |
> | :--- | :--- |
> | **sa** | swap top 2 of A |
> | **sb** | swap top 2 of B |
> | **ss** | `sa` and `sb` at the same time |
> | **pa** | push top of B to top of A |
> | **pb** | push top of A to top of B |
> | **ra** | rotate A (first becomes last) |
> | **rb** | rotate B (first becomes last) |
> | **rr** | `ra` and `rb` at the same time |
> | **rra**| reverse rotate A (last becomes first) |
> | **rrb**| reverse rotate B (last becomes first) |
> | **rrr**| `rra` and `rrb` at the same time |

---

## 📈 Benchmarks
> [!check] Efficiency Goals
> - **3 numbers**: $\le 3$ operations.
> - **5 numbers**: $\le 12$ operations.
> - **100 numbers**:
>     - ⭐⭐⭐⭐⭐ < 700
>     - ⭐⭐⭐⭐ < 900
>     - ⭐⭐⭐ < 1100
>     - ⭐⭐ < 1300
>     - ⭐ < 1500
> - **500 numbers**:
>     - ⭐⭐⭐⭐⭐ < 5500
>     - ⭐⭐⭐⭐ < 7000
>     - ⭐⭐⭐ < 8500
>     - ⭐⭐ < 10000
>     - ⭐ < 11500

---

## 🛠️ Implementation Plan
- [ ] **Parsing**: Handle arguments, split strings, check for duplicates and non-integers.
- [ ] **Stack Logic**: Implement stack data structure (Linked List recommended).
- [ ] **Operations**: Implement all 11 operations.
- [ ] **Simple Sort**: Algorithm for 2, 3, and 5 numbers.
- [ ] **Complex Sort**: Algorithm for 100+ numbers (e.g., Turk Algorithm or Cost-based sort).
- [ ] **Optimization**: Reduce operation count.
- [ ] **Checker (Bonus)**: Verify if instructions actually sort the stack.
