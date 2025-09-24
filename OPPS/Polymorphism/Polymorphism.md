
# Polymorphism in C++

## 1. What is Polymorphism?

**Definition**: Polymorphism means *"many forms"*.  
In C++, it allows one interface (function or operator) to represent different underlying forms (behaviors).

It enables the same function name or operator to perform differently depending on the context (compile-time or run-time).

👉 In short: **Same function name, different implementations.**

---

## 2. When to Use Polymorphism?

- When you want **code reusability** with different implementations.  
- To implement **inheritance with method overriding**.  
- For designing systems with **extensibility** (e.g., base class `Shape` → derived classes `Circle`, `Rectangle`).

---

## 3. Advantages

- ✅ Improves **code readability** and maintainability.  
- ✅ Encourages **code reusability**.  
- ✅ Supports **extensibility** (new classes can be added without changing existing code).  
- ✅ Useful in implementing **real-world scenarios** (e.g., multiple shapes, animals, payment systems).  

---

## 4. Disadvantages

- ❌ Slight **performance overhead** in runtime polymorphism (due to virtual table lookup).  
- ❌ **Code complexity** increases (harder debugging if misused).  
- ❌ Requires careful design to avoid misuse (too much abstraction can confuse).  

---

## 🔹 Types of Polymorphism in C++

Polymorphism is broadly divided into:

### **Compile-Time Polymorphism (Static Binding / Early Binding)**
- Function Overloading  
- Operator Overloading  

### **Run-Time Polymorphism (Dynamic Binding / Late Binding)**
- Function Overriding (via virtual functions)  

---

## 🔹 Summary

| Type | Binding Time | Example | Key Point |
|------|-------------|---------|------------|
| **Function Overloading** | Compile-time | `add(int,int)` vs `add(double,double)` | Based on parameter list |
| **Operator Overloading** | Compile-time | `c1 + c2` for `Complex` class | Define operators for objects |
| **Function Overriding** | Run-time | `Animal* a; a->sound();` | Achieved via **virtual functions** |

---
