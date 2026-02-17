// let FirstName = "Avnish";
// let str = `Hi,\n${FirstName}`;
// console.log(str);
// let ns = null;
// console.log(ns);
// console.log(typeof(ns));
// let n1 = 1.5; //float
// let n2 = 0o10; //octal
// console.log(n2);
// let n3 = 0xA1; //hexadecimal
// console.log(n3);
// let ne = 10 + 1e-5; //exponential
// console.log(ne);
// let z = BigInt(123);
// console.log(z / 10n); //can only perform arithmetic operations on same data type i.e BigInt to BigInt in this case.
// //BigInt data type trincated the floating point part i.e if 123n/10n is 12n, as it removed the decimal point part.
// console.log(10n === 10);
// console.log(10n == 10);
// console.log(10n > 5);
// let strs1 = 'Hi';
// let strs2 = 'Hi';
// console.log(strs1 == strs2); //true
// let strs3 = Symbol('hi');
// let strs4 = Symbol('hi');
// console.log(strs3 == strs4); //false
// // let sym1 = Symbol();
// // console.log(sym1);
// // let sym2 = Symbol('abc');
// // console.log(sym2);
// let n1 = 10;
// let n2 = 3;
// let res = n1 % n2;
// console.log(`${n1} % ${n2} = ${n1 % n2}`);

//Creating an Object using const keyword:

// const student = {
//     fname: "Avnish",
//     lname: "Saini",
//     age: 18,
//     roll: 2510991376,
//     cgpa: 10,
//     isPass: true,

//     // We can also define methods (functions) inside
//     fullName: function() {
//         return this.fname + " " + this.lname;
//     }
// };
// Accessing properties
// console.log(student.fname);
// console.log(student["roll"]);
// console.log(student.fullName());

// Type Coercion:
// let s = "str";
// let n = 2;
// console.log(s - n); //NaN

// let s1 = "4";
// let n1 = 2;
// let sn1 = Number(s);
// console.log(sn1);
// console.log(n1*s1); //JS tries to convert string to number first
// console.log(typeof(s1));
// console.log(typeof(n1));
// console.log(s1 + String(n1));
// console.log(Number(s1) + n1)
// console.log(typeof(s1));
// console.log(typeof(n1));

// Unary Operators: Increment and Decrement (Prefix and Postfix):

// let a = 2;
// ++a;
// console.log(a++);
// console.log(a);
// console.log(--a);
// console.log(a--);
// console.log(a);

// let a = 10;
// let b = 20;
// let c = 30;
// a += b;
// a /= c;
// c %= b;
// console.log(a);
// console.log(b);
// console.log(c);


// function persistentAlert() {
//     alert("You can't visit this website.");
//     setTimeout(persistentAlert, 100); 
// };

// let x = prompt("Enter your age: ");
// // window.alert("This is a warning alert!");
// (x>=18)? window.alert("You can visit this website.") : persistentAlert();

// console.log(~1);

// let y = prompt("Enter a Character to check if it's vowel or not: ");
// let char = y.toLowerCase(); 
// let v = "aeiou";
// if ("aeiou".includes(char)) {
//     console.log(`${y} is a vowel.`);
// } else {
//     console.log(`${y} is not a vowel.`);
// }

// switch (y.toLowerCase()) {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         console.log(`${y} is a vowel.`);
//         break;
//     default:
//         console.log(`${y} is not a vowel.`);
//         break;
// }
// const q = 1;
// switch (q){
//     case "1":
//         console.log('one');
//     case 1:
//         console.log(1);
//     default:
//         console.log('default');
// }
// let a = 1;
// while(a <= 10){
//     console.log(a++);
// }

// do{
//     console.log(a++);
// }while(a <= 10);

// for(a = 1; a <= 10; a++){
//     console.log(a);
// }

// do{
//     a = prompt("Enter a number: ");
// }while(a < 0 || a > 50);
// console.log(a);
// for(let i = 1; i <= 5; i++){
//     let row = "";
//     for(let j = 1; j <= i; ++j){
//         row += j+"";
//     }
//     console.log(row);
// }

// let count = 0;
// for(let i = 0; i <= 50; ++i) {
//     count += i;
// }
// console.log(`Using for loop: ${count}`);
// console.log(`Using formula: ${25*51}`);

// let w = 0;
// let sum = 0;

// while(w <= 50) {
//     sum += w++;
// }
// console.log(`Using while loop: ${sum}`);

// let dw = 0;
// let sum = 0
//  do{
//     sum += dw++;
//  } while(dw <= 50);
//  console.log(`Using do-while loop: ${sum}`);


// let n = 5;
// let pflag = true
// for(let i = 3; i <= n**(1/2) + 1; i++){
//     if(n % 2 == 0){
//         console.log("Not a Prime.");
//         pflag = false;
//         break;
//     } 
//     if(n % i == 0) {
//         console.log("Not a Prime.");
//         pflag=false;
//         break
//     }
// }
// (pflag)? console.log("Is a Prime.") : null;


// let se = 0;
// for (let i = 0; i <= 50 * 2; i++) {
//     se += i++;
// }
// console.log(`Sum of first 50 even numbers: ${se}`);
// //formula = n/2[2*a + (n-1)*d]
// let so = 0;
// for (let i = 1; i <= 50 * 2; i++) {
//     so += i++;
// }
// console.log(`Sum of first 50 odd numbers: ${so}`);

// let num = -136;
// if (num > 0) {
//     console.log("Positive");
// } else if (num < 0) {
//     console.log("Negative");
// } else {
//     console.log("Zero (neither positive nor negative)");
// }
// (num >= 0)? console.log("Positive") : console.log("Negative");


// WAP to find whether a no. is positive, negative or zero

// let n = prompt();
// if(n > 0){
//     console.log("Positive");
// }
// else if(n< 0){
//     console.log("Negative");
// }
// else{
//     console.log("Zero");
// }
// let result = (n > 0)? "Positive" : (n < 0)? "Negative" : "Zero";
// console.log(result)

// WAP to find whether a no. is pdivisible by five or not.

// let n = prompt("Enter a number: "); // Prompt the user to enter a number.
// (n % 5 == 0)? console.log("Divisible by 5") : console.log("Not divisible by 5"); // Check if number is divisible by 5 or not using ternary operator.

// WAP to find largest of three numbers.

// let a = Number(prompt("Enter 1st number: "));
// let b = Number(prompt("Enter 2nd number: ")); // Prompt the user to enter three numbers.
// let c = Number(prompt("Enter 3rd number: "));

// if(b == a && b == c){
//     console.log(`All are equal.`);
// }
// else if(a >= b && a >= c){
//     console.log(`${a} is greater.`);
// }
// else if(b >= a && b >= c){
//     console.log(`${b} is greater.`);
// }
// else {
//     console.log(`${c} is greater.`);
// }

// WAP to convert a negative number to positive number and WAP to find Quotient and Remainder.

// let a = Number(prompt("Enter a number: "));
// (a < 0)? console.log(-a) : console.log(a);

// let n1 = Number(prompt("Enter 1st number: "));
// let n2 = Number(prompt("Enter 2nd number: "));

// if (n2 === 0) {
//     console.log("Zero division error!");
// } else {
//     console.log(`Quotient : ${Math.floor(n1 / n2)}`);
//     console.log(`Remainder : ${Math.floor(n1 % n2)}`);
// }

// WAP to find sum of first 10 natural numbers.
// let sum1 = 0;
// for(let i = 1; i <= 10; i++){
//     sum1 += i;
// }
// console.log(sum1);

// let sum2 = 0;
// let a = 0;
// while(a <= 10){
//     sum2 += a++;
// }
// console.log(sum2);

// let sum3 = 0;
// a = 0
// do{
//     sum3 += a++;
// }while(a <= 10);
// console.log(sum3);

// WAP to find whether two  numbers has same last digit.

// let a = prompt("Enter 1st number: ")
// let b = prompt("Enter 2nd number: ")

// (n1 % 10 == n2 % 10)? console.log("Last digit is same.") : console.log("Lst digit is not same.")

// WAP to print the tab;le of a number.

// let n = Number(prompt("Enter a number: "));
// for(let i = 1; i <= 10;i++){
//     console.log(`${n}x${i}=${n*i}`);
// }

// WAP to convert celsius temperature to fahrenhiet.

// let c = Number(prompt("Enter temperature in elsius: "));
// console.log(`${c}ºC is ${((9/5*c) + 32).tofixCed(2)}ºF`);

// WAP to to print fibonacci series and addition of two floating point numbers factorial and area of triangle without functions.

// Fibonacci Series 
// let n = Number(prompt("Enter number of terms for Fibonacci: "));
// let a = 0, b = 1;

// console.log("Fibonacci Series:");
// for (let i = 1; i <= n; i++) {
//     console.log(a);
//     [a, b] = [b, a + b];
//     // let next = a + b;
//     // a = b;
//     // b = next;
// }


// // Addition of Two Floating Numbers
// let f1 = Number(prompt("Enter first float number: "));
// let f2 = Number(prompt("Enter second float number: "));
// let sum = f1 + f2;
// console.log("Sum of two floating numbers: " + sum);


// // Factorial
// let num = Number(prompt("Enter a number for factorial: "));
// let fact = 1;

// for (let i = 1; i <= num; i++) {
//     fact = fact * i;
// }
// console.log("Factorial is: " + fact);


// // Area of Triangle
// let base = Number(prompt("Enter base of triangle: "));
// let height = Number(prompt("Enter height of triangle: "));
// let area = 0.5 * base * height;

// console.log("Area of Triangle: " + area);

