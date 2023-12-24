function display(){
    console.log("setTimeout callback executed")
}
//setInterval(() => console.log('setInterval running...'), 500)
setTimeout(display, 2000)
// setTimeout and setInterval are async functions
// setInterval ran indefinitely
async function myAsyncFunc() {
    return "hello"
}

function myAsyncFunc1() {
    return Promise.resolve("hey")
}
myAsyncFunc().then((retVal) => {console.log(retVal)})
myAsyncFunc1().then((retVal) => {console.log(retVal)})
// myAsyncFunc1 is semantically the same as myAsyncFunc
