const firstEl = document.querySelector('#first');
const lastEl = document.querySelector('#last');
const ageEl = document.querySelector('#age');
const genderEl = document.querySelector('#gender');
const output = document.querySelectorAll('.output');

const showFirst = (e) => {
  const first = e.target.value;
  output[0].innerText = first;
};
const focusInput = () => {
  firstEl.style.outlineColor = 'green';
  firstEl.style.outlineStyle = 'solid';
  firstEl.style.outlineWidth = '1px';
};
const blurInput = () => {
  firstEl.style.outlineStyle = 'none';
};
const showLast = (e) => {
  const last = e.target.value;
  output[1].innerText = last;
};
const showAge = (e) => {
  const age = e.target.value;
  output[2].innerText = age;
};
const showGender = (e) => {
  const gender = e.target.value;
  output[3].innerText = gender;
};

firstEl.addEventListener('input', showFirst);
firstEl.addEventListener('focus', focusInput);
firstEl.addEventListener('blur', blurInput);
lastEl.addEventListener('input', showLast);
ageEl.addEventListener('input', showAge);
genderEl.addEventListener('change', showGender);
