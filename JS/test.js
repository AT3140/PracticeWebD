
let myPromise = new Promise((resolve, reject) => {
    setTimeout(()=>{
        let success = true;
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
}).catch(errorMessage => {
    console.error(errorMessage)
});

console.log("This message prints before time out")

//TODO: Following code not successful
//fetch("https://the-cocktail-db.p.rapidapi.com/search.php") //returned 401
fetch('https://jsonplaceholder.typicode.com/users') //successful
    .then(response=>response.json())
    //.then(data=>console.log(data[0].name))
    .then(data=>console.log(data))
    .catch(error => {
        console.log(error);
    });

