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
  return `${strings[0]} ${verdict}, ${action_needed}`
}

let age = 17
let model = 'WagonR'
console.log(mytag`My car is ${age} years old, model is ${model}`)
//O/P: My car is  old, needed to be sold
