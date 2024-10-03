var global=18;

function f(){
  var output="";
  if(global==18){
    output+="My global value is "+global;
  }
  else {
    output+="My global value is different";
  }
  console.log(output)
}
f();
