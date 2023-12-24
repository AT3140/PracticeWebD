/*
 * Literals delimited by backtick `` are called template literals
 * Features offered by template literals are as follows:
 * 1) Multi-line strings
 * 2) String Interpolation
 * 3) Tagged Templates
 * Illustrated as follows
 * */

//String Interpolation
console.log("===")
let str1 = 'This is '
console.log(str1 + "String Concatenation")
console.log(`${str1}String Interpolation`)

//multiline strings
console.log("===")
console.log(`This 
is multiline string`);

//Tagged Templates
console.log("===")
console.log("Tagged Template")
function mytag(strings, var1, var2){
  let verdict = '', action_needed = '';
  if(var1 > 15){
    verdict = 'old'
    action_needed = 'needed to be sold'
  }
  else {
    verdict = 'alright'
    action_needed = 'continue to use'
  }
  return `Modified : ${strings[0]}${verdict}, ${action_needed}`
}
let age = 13
let model = 'WagonR'
console.log(`Original : My car is ${age} years old, model is ${model}`)
console.log(mytag`My car is ${age} years old, model is ${model}`)
console.log("===")
