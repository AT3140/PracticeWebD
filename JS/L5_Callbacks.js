//Callback Functions

function display(num){
    console.log(num)
}

function display1(num){
    console.log(num*2)
}

function calc(a, b, myFunc) {
    var res = a + b
    myFunc(res)
}

calc(3, 5, display); //display is a callback function here passed as argument
calc(3, 5, display1); //similarly display1 is the callback function here
calc(3, 5, (x) => console.log(x * 3)) //arrow function as callback here
