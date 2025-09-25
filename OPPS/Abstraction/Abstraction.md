# Abstraction in C++

## 1. What is Abstraction?
Abstraction is one of the four fundamental principles of Object-Oriented Programming (OOP) (along with **Encapsulation, Inheritance, and Polymorphism**).  
It refers to **hiding implementation details and showing only the essential features** of an object.  

In simple words:
- **What** an object does → shown to the user.  
- **How** it does → hidden from the user.  

👉 In C++, abstraction is mainly achieved using:
1. **Abstract Classes (using pure virtual functions)**  
2. **Interfaces (achieved via abstract classes with only pure virtual functions)**

---

## 2. Why Abstraction?
- Provides **security** by hiding unnecessary details.  
- Improves **code reusability** and **readability**.  
- Helps in **reducing complexity**.  
- Supports **loose coupling** between objects.  

---

## 3. Abstraction in C++

### (A) Using Abstract Classes
An **abstract class** is a class that contains at least one **pure virtual function**.  
A **pure virtual function** is declared by assigning `= 0` in its declaration.

**Syntax:**
```cpp
class AbstractClass {
public:
    virtual void display() = 0;  // Pure virtual function
};

```
### (B) Using Interfaces (Pure Abstract Classes)

In C++, interfaces can be created using classes that only contain pure virtual functions.

---

## 4. Key Points

- Abstract class **cannot** be instantiated.  
- Must provide implementations for all **pure virtual functions** in derived classes.  
- Abstract classes can contain **both implemented and abstract (pure virtual) functions**.  
- Helps to enforce a **contract** for derived classes.  

---

## 5. Real-Life Analogy

Think of a **Car**:

- You just use methods like `drive()`, `brake()`, `accelerate()`.  
- You **don’t care how** the engine works internally.  
- The **complex implementation** is hidden from the user → that’s **abstraction**.  


