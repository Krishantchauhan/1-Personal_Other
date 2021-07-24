//Restart

var restart=document.querySelector("#b");



//Graball the square
var squares =document.querySelectorAll('td');

//clear all the square
function clearBoard(){
  for(var i = 0; i <squares.length; i++) {
    squares[i].textContent ='';
  }
}

restart.addEventListener('click',clearBoard);
//check the square marker
function changemarker(){
  if (this.textContent =='') {
    this.textContent='X';
  }
  else if (this.textContent==='X') {
    this.textContent='O';
  }
  else {
    this.textContent='';
  }
}

for(var i = 0; i < squares.length; i++) {
  squares[i].addEventListener('click',changemarker);
}

//For Loop to add event listeners to all the squares
