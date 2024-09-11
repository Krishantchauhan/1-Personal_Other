const companies = [
  { name: 'Company One', category: 'Finance', start: 1981, end: 2004 },
  { name: 'Company Two', category: 'Retail', start: 1992, end: 2008 },
  { name: 'Company Three', category: 'Auto', start: 1999, end: 2007 },
  { name: 'Company Four', category: 'Retail', start: 1989, end: 2010 },
  { name: 'Company Five', category: 'Technology', start: 2009, end: 2014 },
  { name: 'Company Six', category: 'Finance', start: 1987, end: 2010 },
  { name: 'Company Seven', category: 'Auto', start: 1986, end: 1996 },
  { name: 'Company Eight', category: 'Technology', start: 2011, end: 2016 },
  { name: 'Company Nine', category: 'Retail', start: 1981, end: 1989 },
];

// const one = companies.forEach((item)=>{
//     item.category;
// })

const maping = companies.map((item) => item.category);
// console.log(maping);

// for (const item of companies) {
//   console.log(item.category);
// }

// for (let item in companies){
//   console.log(companies[item])
// }

// const flag=5;
// let a =flag<0||3;

// console.log(a);

// const Finances = companies.filter((items)=>{
//   return items.category =='Auto';
// })

// console.log(Finances);

// const Retails = companies.filter(items => items.name == "Company One")
// console.log(Retails)

// const Decade = companies.filter((items)=> items.end - items.start >= 10)
// console.log(Decade);

const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const sq = nums.map((item) => Math.sqrt(item)).map((sqrt) => sqrt * 2);
console.log(sq);
