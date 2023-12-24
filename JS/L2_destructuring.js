// Array Destructuring
let a = [5,3,4,7,8]
let [b, ...c] = a //rest
console.log(b)
console.log(c)
console.log("===")

// Object Destructuring
let obj = { id : 1, grade : 'A', courses : ['Hindi', 'English'] }
let {id, ...vobj} = obj
let {id : vid, grade : vgrade} = obj //assigning to different var names
id = 3 //to show that id and vid are referencing different variables
console.log(`id : ${id}`)
console.log(`vid : ${vid}`)
console.log(vobj)
console.log("===")
