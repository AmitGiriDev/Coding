// const arr1 = [1, 2, 5, 3];
// const arr2 = [1, 2, 5, 33];

// // console.log(arr1.sort());
// // console.log(arr2.sort((a, b) => a - b)); //better explanation

// // You are given an array of objects representing people:
// const people = [
//   { name: "Alice", age: 30 },
//   { name: "Bob", age: 25 },
//   { name: "Charlie", age: 30 },
//   { name: "David", age: 20 },
// ];

// // Sort this array:
// // Primarily by age in ascending order

// // If ages are the same, sort by name in alphabetical order

// // console.log(
// //   people.sort((a, b) => {
// //     if (a.age !== b.age) {
// //       return a.age - b.age;
// //     } else {
// //       return a.name - b.name;
// //     }
// //   })
// // );

// // Expected Output:
// // [
// //   { name: "David", age: 20 },
// //   { name: "Bob", age: 25 },
// //   { name: "Alice", age: 30 },
// //   { name: "Charlie", age: 30 }
// // ]

// Given the following code, what will be the output in each case? Please explain why.
// Case 1:

// for (var i = 0; i < 3; i++) {
//   setTimeout(() => {
//     console.log(i);
//   }, 2000);
// }

// 3, 3, 3;

// Case 2:
// for (let i = 0; i < 3; i++) {
//   setTimeout(() => console.log(i), 5000);
// }

// // 0,1,2

// Case 3:
// for (var i = 0; i < 3; i++) {
//   function XY(i) {
//     setTimeout(() => console.log(i), 100);
//   }
//   XY(i);
// }

// // 3, 3, 3;

// // What will this print and why?
// // console.log([1, 2] + [3, 4]); // learn coercion
// // // [4,6]

// In JavaScript, consider the following code:
// let a = 0.1;
// let b = 0.2;
// let c = 0.3;

// let A = 0.3;
// let B = 0.4;

// console.log(a + b == A); // What will this output?
// console.log(a + c == B); // And this?

// // Explain the reason behind the output and how to fix such issues.

// class company {
//   constructor(employeeName) {
//     this.employee = employeeName;
//   }
//   layoff() {
//     console.log("gand marao employee " + this.employee);
//   }
// }
// class company2 extends company {
//   constructor(employeeName) {
//     this.employee = employeeName;
//   }
// }

// const tata = new company("rupesh");
// console.log(tata.employee);
// tata.layoff();

// let birla = new company2("Vishal");
// birla.layoff();

// let a = { n: 1 };
// let b = a;
// a.x = a = { n: 2 };
// console.log(a); // ?
// console.log(b); // ?
