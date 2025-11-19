// This key word point to object from which this function is called

/*
function getBirthYear() { //Polymorphism -> One function different forms

  return new Date().getFullYear() - this.age; //here this is pointing to object from which function is called
}



function createUser(firstName, lastName, age) {
  const user = {
    firstName,
    lastName,
    age,
    getBirthYear
  }

  return user;
}

const user1 = createUser("abc", "cyz", 20);
const user2 = createUser("hij", "klm", 55);

*/


/*

//Polymorphism, Encapsulation, Abstraction

function createUser(firstName, lastName, age) {
  const user = {
    firstName,
    lastName,
    age,
    getSelection: createUser.commomMethods.getBirthYear
  }

  return user;
}

createUser.commomMethods = {
  getBirthYear () { 
    return new Date().getFullYear() - this.age; 
  }
}

const user1 = createUser("abc", "cyz", 20);
const user2 = createUser("hij", "klm", 55);

*/

/*
//When we called function using 'new' key word it return bydefault one object

function sayHi() {
  console.log("Hi");
}

new sayHi();//Called in console
*/


//Inheritance
function createUser(firstName, lastName, age) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;
}

createUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
}

const user1 = new createUser('Bhagyoday', 'Jadhv', 20); //user1 will be object with lable createUser {firstName: 'Bhagyoday', lastName: 'Jadhv', age: 20}
const user2 = createUser("hij", "klm", 55); //user2 will be undefined

//Note :- Each function having prototype property, when we create object with function then this porotype propety get attage with thay object with name __proto__ e.g createUser.prototype and user1.__proto__ are same



// ---------------------------------------------
// Constructor Function + Prototype Inheritance
// ---------------------------------------------

// 1. Constructor Function
// When we call createUser with the 'new' keyword,
// JavaScript automatically creates an empty object,
// sets 'this' to that object, and returns it.

/*
function createUser(firstName, lastName, age) {
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;
}

// 2. Adding a method using prototype
// IMPORTANT: Use normal function, NOT arrow function.
// Arrow functions do NOT have their own 'this' – they take 'this' from outer scope.
createUser.prototype.getBirthYear = function () {
  return new Date().getFullYear() - this.age;
};

// Creating objects using 'new'
const user1 = new createUser("Bhagyoday", "Jadhav", 20);

// ❌ NOT using 'new' → this = undefined → function returns undefined
const user2 = createUser("hij", "klm", 55);
// user2 is undefined because createUser doesn't explicitly return anything.

*/


// -------------------------------------------------------------
// Explanation of __proto__ and prototype
// -------------------------------------------------------------
/*
Every function in JavaScript automatically gets a 'prototype' property.
This prototype object is shared by all objects created using 'new'.

Example:
createUser.prototype === user1.__proto__  → true

So, user1 can access the methods inside createUser.prototype,
like user1.getBirthYear()
*/

/*
// Check output
console.log(user1.getBirthYear());  // Works
console.log(user2);                 // undefined

*/