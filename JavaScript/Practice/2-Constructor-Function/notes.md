# JavaScript OOP Notes --- Constructor, Prototype, this, new

## 1. Constructor Function

A constructor function is used to create multiple similar objects.

``` js
function CreateUser(firstName, lastName, age) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;
}
```

### What happens when using `new`?

1.  A new empty object `{}` is created.
2.  `this` keyword points to that object.
3.  The object is linked to `CreateUser.prototype`.
4.  The function returns the new object automatically.

------------------------------------------------------------------------

## 2. Prototype

Every function in JavaScript automatically has a `prototype` property.

Methods added inside `.prototype` are shared by all objects created
using `new`.

``` js
CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};
```

### Why prototype?

-   Saves memory
-   No duplicate methods inside every object

------------------------------------------------------------------------

## 3. Why NOT use Arrow Functions for Prototype Methods?

Arrow functions do not have their own `this`.

❌ Wrong:

``` js
CreateUser.prototype.getBirthYear = () => {
  return new Date().getFullYear() - this.age; // this ❌ not object
};
```

✔ Correct:

``` js
CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};
```

------------------------------------------------------------------------

## 4. `__proto__` vs `prototype`

  Term          Belongs To   Meaning
  ------------- ------------ ------------------------------------
  `prototype`   Function     Blueprint object for all instances
  `__proto__`   Object       Points to function's prototype

Example:

    CreateUser.prototype === user1.__proto__  // true

------------------------------------------------------------------------

## 5. Example Code (Clean Version)

``` js
function CreateUser(firstName, lastName, age) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;
}

CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};

const user1 = new CreateUser("Bhagyoday", "Jadhav", 20);
console.log(user1.getBirthYear());
```

------------------------------------------------------------------------

## 6. Notes Summary

-   `new` creates object + sets `this` + links prototype + returns
    object.
-   Use **normal functions** in prototype, not arrow functions.
-   All objects created using `new` share the same prototype.
-   `prototype` is for functions; `__proto__` is inside objects.
-   Prototype reduces memory usage.

------------------------------------------------------------------------

## 7. OOP Concepts Covered

-   **Encapsulation** → Keeping related data & functions together.
-   **Abstraction** → Hiding details like prototype chaining.
-   **Inheritance** → Achieved through prototype.
-   **Polymorphism** → Same method name but different behaviors in
    objects.
