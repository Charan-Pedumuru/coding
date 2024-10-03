function wordblanks(noun,adjective, verb, adverb)
{
  var result="";
  result+="The "+adjective+" "+noun+" "+verb+" to the store "+adverb;
  return result;
}
console.log(wordblanks("dog","big","ran","quickly"))
