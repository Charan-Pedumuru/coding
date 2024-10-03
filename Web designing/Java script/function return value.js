function num(num) {
  return num - 6;
}
console.log(num(10))

function mul(num) {
  return num * 5;
}
console.log(mul(2)) //used to show the returned value from a function

var sum = 0;

function change(num) {
  return (num + 5) / 3;
}
sum = change(10);
console.log(change(10))
console.log(sum)
