
// let a=10;
// a=a+10;
// outputResult(a,'');


// function add(num1,num2){
//   const result =num1+num2;
//   alert('The result is :'+result);
//   return result;
// }
// const a=add(5,6);

const pig=0;
let currResult = pig;

//array
let ar=[];

function inn(){
  return parseInt(usrInput.value);
}

function des(op,res,ca){
  const desc = `${res}  ${op}  ${ca}`; //It will Print txt
  outputResult(currResult,desc);
}

function o(op,res,ca,res){
  const pg = {
    operation : op,
    prevResult : res,
    number : ca,
    result : res
  };
  const b =pg;
  console.log(b);

}

// function add(){
//   const previouscalc= `${currResult} + ${usrInput.value}`;
//   currResult += parseInt(usrInput.value);
  // outputResult(currResult,previouscalc);
// }

function add(){
  let entr = inn();
  const ini = currResult;
  currResult = currResult + entr;
  des('+',ini,entr);
  // ar.push(pg);//push will add to array
  // console.log(ar);
  //console.log(pg.operation)
  o('ADD',ini,entr,currResult);
}

function sub(){
  const entr= inn();
  const ini = currResult;
  currResult -= entr;
  des('-',ini,entr);
  o('SUBTRACT',ini,entr,currResult);
}

function div(){
  const entr= inn();
  const ini = currResult;
  currResult /= entr;
  des('/',ini,entr);
  o('DIVIDE',ini,entr,currResult);
}

function mul(){
  const entr= inn();
  const ini = currResult;
  currResult *= entr;
  des('*',ini,entr);
  o('MULTICATION',ini,entr,currResult);
}

addBtn.addEventListener('click',add);
subtractBtn.addEventListener('click',sub);
multiplyBtn.addEventListener('click',mul);
divideBtn.addEventListener('click',div);
