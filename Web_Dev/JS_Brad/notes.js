//fix: Event

//todo: simple Button click
// const clearBtn = document.querySelector('#clear');

// clearBtn.addEventListener('click', () => {
//   console.log('All Clear');
// });

//todo: Remove Event Listener and SetTimeout

// const clearBtn = document.querySelector('#clear');

// const onClear = () => {
//   console.log('All Clear');
// };

// clearBtn.addEventListener('click', onClear);

// setTimeout(() => {
//   clearBtn.removeEventListener('click', onClear);
// }, 5000);

// console.log(clearBtn);

// todo:automatic click using SetTIMer
// const clearBtn = document.querySelector('#clear');

// const onClear = () => {
//   console.log('All Clear');
// };

// clearBtn.addEventListener('click', onClear);

// setTimeout(() => {
//   clearBtn.click();
// }, 5000);

// todo:Task Clear All item
// const clearBtn = document.querySelector('#clear');
// const listList = document.querySelectorAll('ul');
// const list = document.querySelectorAll('li');

// const getClear = function () {
//   for (const item of list) {
//     item.remove();
//   }

//   // list.forEach((item) => {
//   //   item.remove();
//   // });
// };

// clearBtn.addEventListener('click', getClear);

//todo: Keyboard project
// 'use strict';
// const insert = document.querySelector('#insert');

// const getKey = (e) => {
//   insert.innerHTML = '';
//   const keyList = {
//     'e.key': e.key,
//     'e.keyCode': e.keyCode,
//   };

//   for (let key in keyList) {
//     const div = document.createElement('div');
//     div.className = 'key';
//     const text = document.createElement('small');

//     const keyText = document.createTextNode(`${key}`);
//     const keyValue = document.createTextNode(`${keyList[key]} :`);

//     text.appendChild(keyText);
//     div.appendChild(keyValue);
//     div.appendChild(text);

//     insert.appendChild(div);
//   }
// };

// window.addEventListener('keydown', getKey);

// console.log(list);

//todo: Event bubbling
// button.addEventListener('click', (e) => {
//   alert('Button was clicked');
//   e.stopPropagation();
// });

const test = document.querySelector('.key');
const add ;

