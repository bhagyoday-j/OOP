//In constructor function code becomes big so clases are introdused
//typeof(class) -> function

//class CreateUser {} 

//CreateUser() -> ❌
//new CreateUser() ->✔️

/*
We can also do this , but we have to avoid this thats why classes comes in js
CreateUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
}
*/

class CreateUser {
  constructor(a, b, c) {
    this.firstName = a;
    this.lastName = b;
    this.age = c;
  }

  getBirthYear () {
    return new Date().getFullYear() - this.age;
  }
}

const user1 = new CreateUser('Bhagyoday', 'Jadhv', 20); 








// // In constructor function approach, code becomes long and less readable.
// // So ES6 introduced "classes" to make OOP syntax cleaner.

// // Note: Behind the scenes, a class is STILL a function.
// // typeof CreateUser → "function"

// // You must use 'new' with classes:
// // CreateUser()       ❌
// // new CreateUser()   ✔️

// class CreateUser {
//   constructor(firstName, lastName, age) {
//     // This constructor runs automatically when an object is created using 'new'
//     this.firstName = firstName;
//     this.lastName = lastName;
//     this.age = age;
//   }

//   // Methods inside class are automatically added to the prototype
//   getBirthYear() {
//     return new Date().getFullYear() - this.age;
//   }
// }

// // Creating an object using the class
// const user1 = new CreateUser("Bhagyoday", "Jadhav", 20);
