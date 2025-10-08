# Linked List – Basic Theory

## 1. Introduction
A **Linked List** is a **linear data structure** where elements, called **nodes**, are linked together using **pointers**.  
Unlike arrays that store data in continuous memory locations, linked lists store data in separate nodes connected by references (or links).  

Each node generally contains:
- **Data** – the actual information to be stored.  
- **Pointer (Next)** – a reference to the next node in the list.

---

## 2. Structure of a Node
A node in a linked list can be represented as:

`[ Data | Next ]`


- **Data** → stores the value or information.  
- **Next** → points to the next node in the sequence.  
The last node’s `Next` pointer is set to `NULL`, marking the end of the list.

---

## 3. Types of Linked Lists

### 3.1 Singly Linked List
- Each node has **data** and a **pointer to the next node**.
- The last node points to `NULL`.
- Traversal is **one-way** (forward direction only).

**Example:**
`Head → [A | *] → [B | *] → [C | NULL]`


**Advantages:**
- Simple structure.
- Easy insertion and deletion at the beginning.

**Disadvantages:**
- Cannot be traversed backward.
- Requires sequential access.

---

### 3.2 Doubly Linked List
- Each node contains **three fields**:
  1. **Prev** – pointer to the previous node.
  2. **Data** – value stored in the node.
  3. **Next** – pointer to the next node.
- Can be traversed **both forward and backward**.

**Example:**
`NULL ← [* | A | ] ↔ [ | B | ] ↔ [ | C | *] → NULL`


**Advantages:**
- Easier to traverse in both directions.
- Deletion is simpler if the node pointer is given.

**Disadvantages:**
- Requires more memory (two pointers per node).
- More complex to manage.

---

### 3.3 Circular Linked List
- The **last node** connects back to the **first node**, forming a circle.
- There is **no NULL pointer**.

Two types:
1. **Circular Singly Linked List** – last node’s `Next` points to the first node.  
2. **Circular Doubly Linked List** – last node’s `Next` points to the first, and the first node’s `Prev` points to the last.

**Advantages:**
- Useful for continuous or cyclic tasks (e.g., round-robin scheduling).
- Can start from any node and traverse the entire list.

---

## 4. Basic Operations
1. **Traversal** – Visiting every node to access data.  
2. **Insertion** – Adding a new node (at beginning, middle, or end).  
3. **Deletion** – Removing a node from the list.  
4. **Searching** – Finding a node containing a given value.

---

## 5. Advantages
- **Dynamic size** – Can grow or shrink at runtime.  
- **Efficient insertion/deletion** – No shifting of elements required.  
- **Memory flexibility** – Allocates memory only when needed.

---

## 6. Disadvantages
- **Sequential access** – Cannot directly access elements by index.  
- **Extra memory usage** – Each node stores pointer(s).  
- **Complex implementation** – Requires careful pointer management.

---

## 7. Applications
- Implementing **stacks**, **queues**, and **graphs**.  
- Managing **dynamic memory**.  
- Used in **CPU scheduling**, **undo features**, and **music playlists**.

---

## 8. Comparison with Arrays

| Feature | Array | Linked List |
|----------|--------|-------------|
| Memory Allocation | Static | Dynamic |
| Access | Direct (index-based) | Sequential |
| Insertion/Deletion | Costly (requires shifting) | Easy (no shifting) |
| Memory Layout | Contiguous | Non-contiguous |

---

## 9. Conclusion
A **Linked List** provides an efficient way to handle dynamic data storage.  
It allows easy insertion and deletion but sacrifices random access.  
Understanding linked lists forms the foundation for more advanced data structures like **stacks**, **queues**, and **graphs**.
