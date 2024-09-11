const resultEl = document.getElementById('result');
const lengthEl = document.getElementById('length');
const uppercaseEl = document.getElementById('uppercase');
const lowercaseEl = document.getElementById('lowercase');
const numbersEl = document.getElementById('numbers');
const symbolsEl = document.getElementById('symbols');
const generateEl = document.getElementById('generate');
const clipboardEl = document.getElementById('clipboard');

const getUpper = () => {
  const num = Math.round(Math.random() * 26) + 65;
  return String.fromCharCode(num);
};

const getLower = () => {
  const num = Math.round(Math.random() * 26) + 97;
  return String.fromCharCode(num);
};

const getNumber = () => {
  const num = Math.round(Math.random() * 9) + 48;
  return String.fromCharCode(num);
};

const getSymbol = () => {
  const symbolsArray = '!@#$%^&*(){}[]=<>/,.';
  return symbolsArray[Math.round(Math.random() * symbolsArray.length)];
};

const generatePassword = () => {
  const passwordLength = lengthEl.value;

  console.log(passwordLength);
};

const randomFunc = {
  lower: getLower,
  upper: getUpper,
  number: getNumber,
  symbols: getSymbol,
};

generate.addEventListener('click', () => {
  const length = +lengthEl.value;
  const hasUpper = uppercaseEl.checked;
  const hasLower = lowercaseEl.checked;
  const hasNumber = numbersEl.checked;
  const hasSymbol = symbolsEl.checked;

  resultEl.innerText = genratePassword(length, hasUpper, hasLower, hasNumber, hasSymbol);
});

const genratePassword = (length, upper, lower, number, symbol) => {
  let generatedPassword = '';

  const typesCounts = upper + lower + number + symbol;
  const typeArr = [{ lower }, { upper }, { number }, { symbols }].filter((item) => Object.values(item)[0]);
  console.log(typeArr);

  if (typesCounts === 0) {
    return '';
  }

  for (let i = 0; i < length; i += typesCounts) {
    typeArr.forEach((index) => {
      const funcName = Object.keys(index)[0];
      generatedPassword += randomFunc[funcName]();
    });
  }

  const finalPassword = generatedPassword.slice(0, length);

  return finalPassword;
};
