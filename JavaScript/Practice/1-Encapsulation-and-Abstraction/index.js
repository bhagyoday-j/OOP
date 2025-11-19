/*
Pillars of Object Oriented Programming 
1)Encapsulation
2)Abstraction
3)Inheritance
4)Polymorphism
*/

/*
const user = {
  firstName : 'Bhagyoday',
  lastName : 'Jadhav',
  age : 25,
  //Way 1
  // getBirthYear : function () {
  //   return new Date().getFullYear() - user.age;
  // }
  
  //Way 2
  getBirthYear () {
    return new Date().getFullYear() - user.age;
  }
}
*/

//Functional Programing
// function getBirthYear(age) {
//   return new Date().getFullYear() - age;
// }

//Factory Functions
function createUser(firstName, lastName, age) {
  const user = {
    firstName,
    lastName,
    age,
    getBirthYear () {
      return new Date().getFullYear() - user.age;
    }
  }

  return user;
}

const user1 = createUser("abc", "cyz", 20);

//When we creat more users in each user getBirthYear same function get store and it consumes more memory
//So to avoid this constructor function comes in 

//e.g without constructor function  => user1.getBirthYear === user2.getBirthYear -> false
// With constructor function        => user1.getBirthYear === user2.getBirthYear -> true









// /* 
// ----------------------------------------------------
// Pillars of Object-Oriented Programming (OOP)
// ----------------------------------------------------
// 1) Encapsulation  → Grouping related data & functions together
// 2) Abstraction    → Hiding complex details, showing only important parts
// 3) Inheritance    → Reusing properties & methods
// 4) Polymorphism   → Same function name, different behavior in objects
// ----------------------------------------------------
// */


// /* 
// ----------------------------------------------------
// Factory Functions
// ----------------------------------------------------
// A factory function is a normal function that returns an object.
// */

// function createUser(firstName, lastName, age) {
//   const user = {
//     firstName,
//     lastName,
//     age,

//     // Method inside object
//     getBirthYear() {
//       // here 'user' refers to the object created by createUser
//       return new Date().getFullYear() - user.age;
//     }
//   };

//   return user;
// }

// const user1 = createUser("abc", "cyz", 20);
// const user2 = createUser("hij", "klm", 30);

// /*
// Problem with Factory Functions:
// ---------------------------------
// Each time we create a new user, JavaScript creates a new copy of
// getBirthYear() inside every object.

// This increases memory usage.

// Example:
// user1.getBirthYear === user2.getBirthYear → false  (different copies)
// */


// /*
// ----------------------------------------------------
// Constructor Functions (Solution)
// ----------------------------------------------------
// To avoid duplicate methods, we use constructor functions and prototype.
// */


// function CreateUser(firstName, lastName, age) {

//   // When called with 'new':
//   // 1. A new empty object {} is created
//   // 2. 'this' points to that object
//   // 3. After execution, the object is returned automatically
//   this.firstName = firstName;
//   this.lastName = lastName;
//   this.age = age;
// }

// // Add shared methods to prototype
// CreateUser.prototype.getBirthYear = function () {
//   // Now 'this' refers to the object created by 'new'
//   return new Date().getFullYear() - this.age;
// };

// const u1 = new CreateUser("Bhagyoday", "Jadhav", 20);
// const u2 = new CreateUser("John", "Doe", 40);

// /*
// Now:
// u1.getBirthYear === u2.getBirthYear → true (same method shared)
// ---------------------------------------------------------------
// Why?
// Because both objects use CreateUser.prototype.getBirthYear
// instead of creating separate copies.
// */
