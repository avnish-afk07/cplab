// // // // // // console.log("Name: Avnish");
// // // // // // console.log("Roll No: 2510991376");
// // // // // // console.log("--------------");
// // // // // // // var keyword
// // // // // // // can redeclare and reassign
// // // // // // // not block scoped
// // // // // // var a = 10; // variable created
// // // // // // console.log(a);
// // // // // // var a = 20; // redeclared
// // // // // // a = 30; // reassigned
// // // // // // if(true){
// // // // // // var a = 40; // changes outside also
// // // // // // console.log(a); // prints 40
// // // // // // }
// // // // // // console.log(a); // still 40 outside
// // // // // // console.log("--------------");
// // // // // // // let keyword
// // // // // // // cannot redeclare
// // // // // // // can reassign
// // // // // // // block scoped
// // // // // // let b = 50; // variable created
// // // // // // console.log(b);
// // // // // // b = 70; // reassigned
// // // // // // if(true){
// // // // // // let b = 80; // new variable only inside block
// // // // // // console.log(b); // prints 80
// // // // // // }
// // // // // // console.log(b); // outside still 70
// // // // // // console.log("--------------");
// // // // // // // const keyword
// // // // // // // cannot redeclare or reassign
// // // // // // // block scoped
// // // // // // const c = 100; // constant created
// // // // // // console.log(c);
// // // // // // if(true){
// // // // // // const c = 200; // new constant in block
// // // // // // console.log(c); // prints 200
// // // // // // }
// // // // // // console.log(c); // outside still 100





// // // // // console.log("Name: Avnish");
// // // // // console.log("Roll No: 2510991376");
// // // // // console.log("--------------");
// // // // // // Number type
// // // // // let num = 25; // number value
// // // // // console.log(num);
// // // // // console.log(typeof num); // shows type
// // // // // // String type
// // // // // let str = "Hello"; // text value
// // // // // console.log(str);
// // // // // console.log(typeof str); // shows type
// // // // // // Boolean type
// // // // // let isTrue = true; // true or false
// // // // // console.log(isTrue);
// // // // // console.log(typeof isTrue); // shows type
// // // // // // Undefined type
// // // // // let x; // declared but no value
// // // // // console.log(x);
// // // // // console.log(typeof x); // undefined
// // // // // // Null type
// // // // // let y = null; // empty value
// // // // // console.log(y);
// // // // // console.log(typeof y); // object (js behavior)
// // // // // // Symbol type
// // // // // let sym = Symbol("id"); // unique value
// // // // // console.log(sym);
// // // // // console.log(typeof sym); // symbol
// // // // // // BigInt type
// // // // // let big = 12345678901234567890n; // large number
// // // // // console.log(big);
// // // // // console.log(typeof big); // bigint








// // // // console.log("Name: Avnish");
// // // // console.log("Roll No: 2510991376");
// // // // console.log("--------------");
// // // // // values for operations
// // // // let a = 10; // first number
// // // // let b = 5; // second number
// // // // // arithmetic operators
// // // // console.log(a + b); // addition
// // // // console.log(a - b); // subtraction
// // // // console.log(a * b); // multiplication
// // // // console.log(a / b); // division
// // // // console.log(a % b); // modulus (remainder)
// // // // console.log(a ** b); // power
// // // // console.log("--------------");
// // // // // comparison operators
// // // // console.log(a > b); // greater than
// // // // console.log(a < b); // less than
// // // // console.log(a >= b); // greater or equal
// // // // console.log(a <= b); // less or equal
// // // // console.log(a == b); // equal value only
// // // // console.log(a === b); // equal value and type
// // // // console.log(a != b); // not equal value
// // // // console.log(a !== b); // not equal value or type
// // // // console.log("--------------");
// // // // // logical operators
// // // // let x = true; // boolean true
// // // // let y = false; // boolean false
// // // // console.log(x && y); // AND both must be true
// // // // console.log(x || y); // OR one true is enough
// // // // console.log(!x); // NOT reverses value
// // // // console.log("--------------");
// // // // // ternary operator
// // // // let age = 18; // age value
// // // // let result = (age >= 18) ? "Adult" : "Minor"; // condition ? true : false
// // // // console.log(result);
// // // // console.log("--------------");
// // // // // expressions
// // // // let sum = a + b; // arithmetic expression
// // // // let complex = (a + b) * 2 - 3; // mixed arithmetic expression
// // // // let check = (a > b) && (age >= 18); // logical expression
// // // // console.log(sum);
// // // // console.log(complex);
// // // // console.log(check);



// // // console.log("Name: Avnish");
// // // console.log("Roll No: 2510991376");
// // // console.log("--------------");
// // // // if / else example
// // // let marks = 75; // student marks
// // // if(marks >= 90){
// // // console.log("Grade A"); // condition true if 90 or more
// // // }
// // // else if(marks >= 60){
// // // console.log("Grade B"); // condition true if 60-89
// // // }
// // // else{
// // // console.log("Grade C"); // condition if below 60
// // // }
// // // console.log("--------------");
// // // // switch example
// // // let day = 3; // number of day
// // // switch(day){
// // // case 1:
// // // console.log("Monday");
// // // break;
// // // case 2:
// // // console.log("Tuesday");
// // // break;
// // // case 3:
// // // console.log("Wednesday");
// // // break;
// // // case 4:
// // // console.log("Thursday");
// // // break;
// // // case 5:
// // // console.log("Friday");
// // // break;
// // // default:
// // // console.log("Invalid Day"); // if no case matches
// // // }





// // console.log("Name: Avnish");
// // console.log("Roll No: 2510991376");
// // console.log("--------------");
// // // for loop
// // for(let i = 1; i <= 5; i++){ // start, condition, increment
// // console.log("For Loop:", i); // prints 1 to 5
// // }
// // console.log("--------------");
// // // while loop
// // let w = 1; // initialization
// // while(w <= 5){ // condition check
// // console.log("While Loop:", w);
// // w++; // increment
// // }
// // console.log("--------------");
// // // do while loop
// // let d = 1; // initialization
// // do{
// // console.log("Do While Loop:", d);
// // d++; // increment
// // }while(d <= 5); // condition after execution
// // console.log("--------------");
// // // for...in loop (objects)
// // let obj = {a:1, b:2, c:3}; // object
// // for(let key in obj){ // iterates keys
// // console.log("For In:", key, obj[key]);
// // }
// // console.log("--------------");
// // // for...of loop (arrays)
// // let arr = [10,20,30]; // array
// // for(let value of arr){ // iterates values
// // console.log("For Of:", value);
// // }







// console.log("Name: Avnish");
// console.log("Roll No: 2510991376");
// console.log("--------------");
// // creating object (reference type)
// let student = {
// name: "Avnish",
// roll: 2510991376,
// age: 17
// };
// // property access
// console.log(student.name); // dot notation
// console.log(student["roll"]); // bracket notation
// console.log("--------------");
// // updating property
// student.age = 18; // change value
// console.log(student.age);
// // adding dynamic property
// let key = "course"; // dynamic key
// student[key] = "BE"; // property added
// console.log(student.course);
// // deleting property
// delete student.age; // remove property
// console.log(student);






console.log("Name: Avnish");
console.log("Roll No: 2510991376");
console.log("--------------");
// hoisting with function declaration
greet(); // calling before definition works
function greet(){
console.log("Hello from Function Declaration");
}
console.log("--------------");
// function expression
// calling before definition will give error if uncommented
// sayHi();
let sayHi = function(){
console.log("Hello from Function Expression");
};
sayHi(); // calling after definition
console.log("--------------");
// hoisting difference
// declaration is fully hoisted
// expression variable is hoisted but not the function value


