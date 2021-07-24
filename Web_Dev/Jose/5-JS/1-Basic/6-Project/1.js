var first=prompt("Enter the first Name");
var last=prompt("Enter the last Name");
var age=prompt("What's Your age :");
var height=prompt("What's Your Height (in cm)");
var pet=prompt("Enter Your Pet Name");
alert("ThankYou So much for inormation");

var name;
if (first[0]===last[0]) {
  name=true;
} else {
  name=false;
}

var pe;
if (pet[pet.length-1] ==="y") {
  pe=true;
} else {
pe=false;
}

var a;
if (age>20&&age<30) {
  a=true;
}else {
  a=false;
}

var h;
if (height>170) {
  h=true;
}else {
  h=false;
}


if ( name && pe && a && h){

  console.log("Yeepii :)");

}
  else {
    console.log(":(");
  }
