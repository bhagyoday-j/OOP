# ✅ Clean & Explained Notes for JS Classes (copy-paste ready)

```js
// In constructor function approach, code becomes long and less readable.
// So ES6 introduced "classes" to make OOP syntax cleaner.

// Note: Behind the scenes, a class is STILL a function.
// typeof CreateUser → "function"

// You must use 'new' with classes:
// CreateUser()       ❌
// new CreateUser()   ✔️

class CreateUser {
  constructor(firstName, lastName, age) {
    // This constructor runs automatically when an object is created using 'new'
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
  }

  // Methods inside class are automatically added to the prototype
  getBirthYear() {
    return new Date().getFullYear() - this.age;
  }
}

// Creating an object using the class
const user1 = new CreateUser("Bhagyoday", "Jadhav", 20);
```

---

# 🚀 **How Classes Actually Work**

### ✔ Class is just syntactic sugar

This code:

```js
class CreateUser {
  constructor(a, b, c) {
    this.firstName = a;
    this.lastName = b;
    this.age = c;
  }
  getBirthYear() { ... }
}
```

Is internally converted by JavaScript into something like:

```js
function CreateUser(a, b, c) {
  this.firstName = a;
  this.lastName = b;
  this.age = c;
}

CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};
```

So **both are same**, but **class** syntax is:

✔ Cleaner
✔ Easier to understand
✔ Automatically puts methods into prototype
✔ Prevents calling without `new` (error thrown)

---

# 📌 Key Points to Remember

### 1️⃣ Class methods go to prototype automatically

Meaning:

```
user1.getBirthYear === user2.getBirthYear   ✔ true
```

No duplicate methods — memory efficient.

---

### 2️⃣ Class constructor runs automatically when using `new`

You don’t need to return anything.

---

### 3️⃣ Cannot call class like a normal function

This throws an error:

```js
CreateUser(); // ❌
```

Because JS forces you to use OOP properly.

