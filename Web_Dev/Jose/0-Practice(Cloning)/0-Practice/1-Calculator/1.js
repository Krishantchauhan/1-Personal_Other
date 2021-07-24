
function addition(){
  check('add');
}
function subtraction(){
  check('sub');
}
function multiply(){
  check('multiply');
}
function div(){
  check('divide');
}

function check(operator){
  if (operator === 'add'){
    let sum=0;
    sum = parseInt(num_one.value) + parseInt(num_two.value);
    out(sum);
  }
  else if (operator === 'sub') {
    let sum=0;
    sum = parseInt(num_one.value) - parseInt(num_two.value);
    out(sum);
  } else if (operator === 'multiply') {
      let sum=0;
      sum = parseInt(num_one.value) * parseInt(num_two.value);
      out(sum);
    }else if (operator === 'divide') {
      let sum=0;
      sum = parseInt(num_one.value) / parseInt(num_two.value);
      out(sum);
    }
}

add.addEventListener('click',addition);
sub.addEventListener('click',subtraction);
mul.addEventListener('click',multiply);
divide.addEventListener('click',div);
