var backdrop = document.querySelector('.backdrop');
var modal = document.querySelector('.modal');
var selectPlanButton = document.querySelectorAll('.plan button');


// back.style.display = 'block'


for (var i = 0; i < selectPlanButton.length; i++) {
  selectPlanButton[i].addEventListener('click',function() {
    modal.style.display = 'block';
    backdrop.style.display = 'block';
  })
}
