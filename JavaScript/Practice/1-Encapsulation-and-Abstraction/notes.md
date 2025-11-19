
# JavaScript OOP Notes — Factory Functions, Constructor Functions, Prototype

## 1. Pillars of Object-Oriented Programming (OOP)
1. **Encapsulation** – Grouping related data and functions together  
2. **Abstraction** – Hiding internal details and showing only required features  
3. **Inheritance** – Reusing properties & methods from other objects  
4. **Polymorphism** – Same method name, different behavior in different objects  

---

## 2. Factory Functions

A factory function returns a new object every time it is called.

```js
function createUser(firstName, lastName, age) {
  const user = {
    firstName,
    lastName,
    age,
    getBirthYear() {
      return new Date().getFullYear() - user.age;
    }
  };

  return user;
}

const user1 = createUser("abc", "cyz", 20);
const user2 = createUser("hij", "klm", 30);
```

### Problem with factory functions:
Each object gets its own copy of `getBirthYear()` → **more memory usage**.

```
user1.getBirthYear === user2.getBirthYear  // false
```

---

## 3. Constructor Functions

Constructor functions solve memory issues.  
They work with the `new` keyword.

```js
function CreateUser(firstName, lastName, age) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;
}
```

### What happens when using `new`?
1. A new empty object `{}` is created  
2. `this` points to the new object  
3. The object is linked to `CreateUser.prototype`  
4. The object is returned automatically  

---

## 4. Prototype

To avoid duplicate functions, methods are added to `.prototype`.

```js
CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};
```

Now all objects share the same method:

```
u1.getBirthYear === u2.getBirthYear  // true
```

✔ Memory-efficient  
✔ Standard OOP behavior in JavaScript  

---

## 5. Example Code (Full Working)

```js
function CreateUser(firstName, lastName, age) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;
}

CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};

const u1 = new CreateUser("Bhagyoday", "Jadhav", 20);
const u2 = new CreateUser("John", "Doe", 40);

console.log(u1.getBirthYear());
```

---

## 6. Key Takeaways

- Factory functions duplicate methods → wastes memory  
- Constructor + Prototype shares methods → efficient  
- `prototype` belongs to functions  
- `__proto__` belongs to objects  
- Arrow functions should **not** be used with prototypes  
- OOP pillars apply naturally with constructor functions  
