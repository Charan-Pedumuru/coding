var myvar=18;           //global variable
function localscope(){
  var myvar=5;         // local variable
  console.log(myvar)
}
localscope();
console.log(myvar)
