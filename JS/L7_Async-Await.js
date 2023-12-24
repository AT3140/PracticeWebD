async function myAsync() {
    let myPromise = new Promise((resolve) => {setTimeout(()=>{resolve('promise resolved')}, 2000)})
    console.log(await myPromise)
}
function mySync() {
    let myPromise = new Promise((resolve) => {setTimeout(()=>{resolve('promise resolved')}, 2000)})
    console.log(myPromise)
}
myAsync()
console.log("This prints before sync")
mySync()
console.log("This prints before async")
/*
 * await is used inside async functions
 * */
