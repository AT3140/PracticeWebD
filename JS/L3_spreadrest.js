/*
 * Spread and Rest 
 * - Similar Syntax
 * - Contextual
 */

//Spread
function sum(a, b, c){
    return a + b + c;
}
let arr = [2, 3, 5];
console.log(sum(...arr));

//Rest
function mult(...operands){
    let retVal = 1;
    operands.forEach((num) => {
	retVal *= num;
    });
    return retVal;
}
console.log(mult(2, 3, 4))
