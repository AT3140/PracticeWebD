/*
 * This code can be run by copying to test.js and running ../HTML_CSS/root.html
 * */

let myPromise = new Promise((resolve, reject) => {
    setTimeout(()=>{
        let success = false;
	if(success){
	    resolve("Successful!")
	}
	else {
	    reject("Failure!")
	}
    }, 2000);
});
myPromise.then(successMessage => {
    console.log(successMessage);
}, failureMessage => {
    console.log(`then : ${failureMessage}`);
}
).catch(errorMessage => {
    console.error(`catch : ${errorMessage}`)
});
setTimeout(() => {}, 3000)//.then(() => console.log("3000ms timeout"));
console.log("This message prints before time out")
//failure message prints from .then as first preference

/*
fetch('https://jsonplaceholder.typicode.com/users') //successful
    .then(response=>response.json())
    .then(data=>console.log(data))
    .catch(error => {
        console.log(error);
    });
*/
