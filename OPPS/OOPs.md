# 📚 **Constructors (Theory Only)**

## 🔹 **Constructors**

A **constructor** is a **special member function** of a class that is **automatically called** whenever an object is created.
It is mainly used to **initialize the data members** of a class.

---

### ✅ **Key Features of Constructors**

- Has the **same name as the class**
- **No return type** (not even `void`)
- **Called automatically** when an object is created
- Can be **overloaded** (multiple constructors with different parameters)
- Can have **default arguments**
- Improves **readability** and **automatic initialization**

---

### 🔧 **Types of Constructors**

1️⃣ **Default Constructor**
Initializes objects with default values (no parameters).

2️⃣ **Parameterized Constructor**
Takes arguments to initialize objects with custom values.

3️⃣ **Copy Constructor**
Creates a new object as a **copy** of an existing object.

4️⃣ **Constructor Overloading**
More than one constructor in the same class but with **different parameter lists**.

5️⃣ **Constructor with Default Arguments**
Constructor parameters have **default values**, allowing flexibility.

---

### 🟢 **Advantages of Constructors**

- **Automatic Initialization** – no need to call separate functions
- **Improves Code Quality** – objects are properly initialized
- **Flexibility** – supports multiple ways to create objects (overloading)
- **Consistency** – avoids uninitialized data members

---

---

# 💊 **Encapsulation**

Encapsulation is one of the **four pillars of OOP** (others are Inheritance, Polymorphism, Abstraction).
It refers to **bundling data (variables) and methods (functions)** that work on the data into a **single unit (class)**, while **restricting direct access** to some of the data.

---

### ✅ **Key Points about Encapsulation**

- Achieved using **classes** in C++
- **Data Hiding** is done by marking variables as **private/protected**
- **Controlled Access** is given using **public methods** (getters & setters)
- Protects data from accidental changes

---

### 🟢 **Advantages of Encapsulation**

- **Security** – hides sensitive data
- **Control** – data can be accessed only through controlled methods
- **Maintainability** – changes inside class do not affect outside code
- **Flexibility** – we can change implementation without affecting users of the class

---

### 🔄 **Encapsulation vs Abstraction**

| **Encapsulation**                                | **Abstraction**                                                                       |
| ------------------------------------------------ | ------------------------------------------------------------------------------------- |
| Focuses on **how data is hidden and protected**  | Focuses on **hiding implementation details** and showing only essential functionality |
| Achieved using **classes and access specifiers** | Achieved using **abstract classes and interfaces**                                    |
| Deals with **data hiding**                       | Deals with **design-level hiding**                                                    |

---

## 📝 **Quick Summary**

### 🔑 **Constructor**

- **What it is:** Special function for initializing objects
- **Key points:** Auto-called, no return type, same name as class
- **Types:** Default, Parameterized, Copy, Overloaded, With Default Arguments
- **Use:** To avoid uninitialized objects and ensure proper setup

### 🔑 **Encapsulation**

- **What it is:** Wrapping data + functions into a single unit (class)
- **Key points:** Uses private/protected for data hiding, public for access
- **Use:** Provides security, controlled access, and easy maintenance

---

---

# 📚 **Inheritance**

## 🔹 **What is Inheritance?**

Inheritance is one of the **four main pillars of Object-Oriented Programming (OOP)** (the others are Encapsulation, Abstraction, Polymorphism).
It allows us to **create a new class (child/derived class)** from an **existing class (parent/base class)**.
The derived class **inherits data members (variables) and member functions (methods)** from the base class.

In short: **Reuse old code and add new features without rewriting everything.**

---

## 🔹 **Why Use Inheritance?**

✅ **Code Reusability** – Write code once (in base class) and use it in multiple derived classes.
✅ **Easy Maintenance** – If we change base class code, derived classes automatically get the update.
✅ **Organized Code** – Helps build logical relationships (e.g., Car → ElectricCar).
✅ **Extensibility** – We can add new features to existing classes without breaking old code.

---

## 🔹 **Access Modifiers in Inheritance**

Access modifiers control **visibility and accessibility** of class members (variables & functions).

| **Access Modifier** | **Meaning**                                  | **Accessible in Same Class** | **Accessible in Derived Class** | **Accessible Outside Class** |
| ------------------- | -------------------------------------------- | ---------------------------- | ------------------------------- | ---------------------------- |
| **public**          | Openly accessible                            | ✅                           | ✅                              | ✅                           |
| **private**         | Hidden (only class itself can use)           | ✅                           | ❌                              | ❌                           |
| **protected**       | Like private, but available to derived class | ✅                           | ✅                              | ❌                           |

---

### 🔹 **Access Specifiers in Inheritance**

When inheriting, we can specify **how base class members are inherited** using **public / protected / private inheritance**:

| **Inheritance Type**      | **Public Members in Base** | **Protected Members in Base** | **Private Members in Base** |
| ------------------------- | -------------------------- | ----------------------------- | --------------------------- |
| **Public Inheritance**    | Stay **public** in child   | Stay **protected** in child   | **Not inherited**           |
| **Protected Inheritance** | Become **protected**       | Stay **protected**            | Not inherited               |
| **Private Inheritance**   | Become **private**         | Become **private**            | Not inherited               |

---

## 🔹 **Types of Inheritance**

### 1️⃣ **Single Inheritance**

One child class inherits from one base class.
📌 **Example:**
`Person → Student`
(Student gets name, age from Person)

---

### 2️⃣ **Multiple Inheritance**

One child class inherits from **two or more base classes**.
📌 **Example:**
`Teacher + Researcher → Professor`
(Professor has both teaching and research ability)

---

### 3️⃣ **Multilevel Inheritance**

Inheritance in a **chain** (class derived from another derived class).
📌 **Example:**
`Person → Student → GraduateStudent`

---

### 4️⃣ **Hierarchical Inheritance**

One base class is inherited by **multiple child classes**.
📌 **Example:**
`Shape → Rectangle, Triangle, Circle`

---

### 5️⃣ **Hybrid Inheritance**

A **combination** of two or more inheritance types (e.g., Multiple + Multilevel).
📌 **Example:**
`Person → Student` and `Sports → Result (inherits from both Student and Sports)`

---

## 🔹 **Difference Between Inheritance Types**

| **Type**         | **Structure** | **When to Use**                                      |
| ---------------- | ------------- | ---------------------------------------------------- |
| **Single**       | A → B         | When you just need one parent-child relation         |
| **Multiple**     | A + B → C     | When one class needs features from multiple classes  |
| **Multilevel**   | A → B → C     | When you want step-by-step inheritance               |
| **Hierarchical** | A → B, C, D   | When multiple classes share the same parent class    |
| **Hybrid**       | Mix of above  | Complex systems combining multiple inheritance types |

---

## 🔹 **Advantages of Inheritance**

✅ **Code Reuse:** Avoids rewriting same code again and again.
✅ **Easy to Maintain:** Fixing code in base class fixes it for all derived classes.
✅ **Clear Hierarchy:** Shows “is-a” relationship (Student **is a** Person).
✅ **Polymorphism Support:** Helps in function overriding (runtime polymorphism).

---

## 🔹 **Disadvantages of Inheritance**

⚠️ **Tight Coupling:** If base class changes, it may affect child classes.
⚠️ **Complexity:** Deep multilevel inheritance can make code hard to read.
⚠️ **Diamond Problem:** (in Multiple Inheritance) — Ambiguity if two parents have same function.
(Solved using **virtual inheritance**).

---

## 🔹 **Example: Access Modifiers**

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    int a;       // public → accessible everywhere
protected:
    int b;       // protected → accessible in derived class only
private:
    int c;       // private → accessible only inside Base class
};

class Derived : public Base {
public:
    void show() {
        a = 10;   // ✅ allowed
        b = 20;   // ✅ allowed (protected becomes available)
        // c = 30; // ❌ not allowed (private not inherited)
    }
};

int main() {
    Derived d;
    d.a = 50;   // ✅ public member accessible
    // d.b = 60; // ❌ protected not accessible outside class
    // d.c = 70; // ❌ private not accessible outside class
    return 0;
}
```

---

## 📝 **Summary (Easy to Remember)**

- **Inheritance = Reuse + Extend existing class**
- **Types:** Single, Multiple, Multilevel, Hierarchical, Hybrid
- **Access Modifiers:**

  - **public:** open
  - **protected:** for class + child only
  - **private:** hidden completely

- **Use inheritance:** when there is an **IS-A** relationship (Dog **is a** Animal).
- **Avoid inheritance:** when relationship is **HAS-A** (Car **has a** Engine → use composition instead).

---

