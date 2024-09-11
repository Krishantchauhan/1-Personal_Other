// const div = document.createElement('div');
// div.className="my-element";
// div.id='my-element';

// const txt = document.createTextNode("Hello");
// div.appendChild(txt);

// console.log(div);

// const ul = document.querySelector('ul').appendChild(div);

// const createNewItem = (item) => {
//   const li = document.createElement('li');
//   const newText = document.createTextNode(item);
//   li.appendChild(newText);

//   const button = createButton('remove-item btn-link text-red');
//   li.appendChild(button);

//   const items = document.querySelector('.items');
//   items.appendChild(li);
// };

// const createButton = (classes) => {
//   const button = document.createElement('button');
//   button.className = classes;

//   const icon = createIcon('fa-solid fa-xmark');
//   button.appendChild(icon);

//   return button;
// };

// const createIcon = (classes) => {
//   const icon = document.createElement('i');
//   icon.className = classes;
//   return icon;
// };

// createNewItem('cheese');

//

//Button Clear Click

// const clearBtn = document.getElementById('clear');
// const list = document.querySelectorAll('ul');

// const clearList = () => {
//   list.forEach((element) => {
//     element.remove();
//   });
// };

// clearBtn.addEventListener('click', clearList);

//

// console.log(list);

// window.addEventListener('keydown', (e) => {
//   const insert = document.getElementById('insert');
//   insert.innerHTML = `
//         <div class="key"> ${e.key} <small>e. key</small></div>
//       <div class="key">
//         ${e.keyCode}
//         <small>e. keyCode</small>
//       </div>
//       <div class="key">
//         ${e.key}
//         <small>e. code</small>
//       </div>
//     `;
// });

//keys

// const showKeys = (e) => {
//   const insert = document.getElementById('insert');
//   insert.innerHTML = '';
//   const keyCodes = {
//     'e.key ': e.key,
//     'e.keyCode ': e.keyCode,
//     'e.code ': e.code,
//   };

//   for (const key in keyCodes) {
//     const div = document.createElement('div');

//     const keyText = document.createTextNode(key);
//     const keyValue = document.createTextNode(keyCodes[key]);

//     div.appendChild(keyText);
//     div.appendChild(keyValue);

//     insert.appendChild(div);

//     // console.log(keyValue);
//   }

//   console.log(keyCodes);
// };

// window.addEventListener('keydown', showKeys);

// const showKeys = (e) => {
//   const insert = document.getElementById('insert');

//   const codes = {
//     'e.keys :': e.key,
//     'e.keyCodes :': e.keyCode,
//     'e.code :': e.code,
//   };

//   for (const key in codes) {
//     const div = document.createElement('div');

//     const keyCode = document.createTextNode(key);
//     const keyText = document.createTextNode(codes[key]);

//     div.appendChild(keyCode);
//     div.appendChild(keyText);

//     insert.appendChild(div);
//   }
// };

// window.addEventListener('keydown', showKeys);

// const arr = ['apples', 'oranges', 'banana', 'sugarcane', ['pie', 'berry'], 'peach', 1, 2, 3];

// for (const i of arr) {
//   console.log(i);
// }
// console.log('************************************');

// for (const i in arr) {
//   console.log(arr[i]);
// }
// console.log('************************************');

// arr.forEach((i) => {
//   console.log(i);
// });

// const flatenArray = arr.flat();
// console.log('************************************');

// flatenArray.forEach((i) => {
//   console.log(i);
// });

// const convertToString = arr.toString().split(',');
// console.log(convertToString);
// console.log(arr);

// const Vegies = {
//   fruits: ['apples', 'oranges', 'banana'],
//   dryfruits: ['almonds', 'cashews', 'munakka', 'rasins', 'pitachoes'],
//   pizza: 'fastfood',
//   burger: 'fastfood',
//   sandwitch: 'fastfood',
//   vegitables: {
//     Green: ['cabbage', 'califlower', 'beans', 'capsicum', 'ladyfingure'],
//     smellVegies: ['onion', 'garlic', 'Ginger'],
//   },
// };

// Object.keys(Vegies).forEach((key) => {
//   console.log(key, Vegies[key]);
// });

// for (const item in Vegies) {
//   console.log(`${item} : ${Vegies[item]}`);
// }

// console.log(Vegies);

// Vegies.fruits.push('grapes');
// Vegies.pizza = 'junkfood';

// Vegies.drinks = ['AfterDark', 'signature', 'moktail', 'coktail'];

// const fruitsKeys = Object.keys(Vegies);
// const fruitsValues = Object.values(Vegies);

// for (const item in Vegies) {
//   console.log(`${item} : ${Vegies[item]} \n`);
// }

// fruitsKeys.forEach((item ,index) => {
//   console.log(`${item} : ${fruitsValues[index]}`);
// });

// console.log(fruitsKeys);
// console.log(fruitsValues);

// for (let item in Vegies) {
//   console.log(`${item} : ${Vegies[item]}`);
// }

// for (let item in Vegies) {
//   console.log(Vegies[item]);
// }

// const fruitsAll = fruitsValues.flat();
// console.log(fruitsAll);

// Vegies.forEach((item) => {
//   console.log(item);
// });
