var backdrop = document.querySelector('.backdrop');
var modal = document.querySelector('.modal');
var modalNoButton = document.querySelector(".modal__action--negative");
var selectPlanButton = document.querySelectorAll('.plan button');
var toggleButton = document.querySelector('.toggle-button');
var mobileNav = document.querySelector('.mobile-nav');


// back.style.display = 'block'


for (var i = 0; i < selectPlanButton.length; i++) {
  selectPlanButton[i].addEventListener('click',function() {
    // modal.style.display = 'block';
    // backdrop.style.display = 'block';

    //using css
    // modal.className = 'open';//This will actually overwrite the complete class List
    modal.classList.add('open');
    backdrop.classList.add('open');
  })
}


backdrop.addEventListener("click", function() {
    // mobileNav.style.display = 'none';
    mobileNav.classList.remove('open');
    closeModal();
});

if (modalNoButton) {
  modalNoButton.addEventListener("click", closeModal);
}

function closeModal() {
  // backdrop.style.display = "none";
  // modal.style.display = "none";
  if (modal) {
    modal.classList.remove('open');
  }
  backdrop.classList.remove('open');
}


toggleButton.addEventListener('click', function() {
    // mobileNav.style.display = 'block';
    // backdrop.style.display = 'block';

    mobileNav.classList.add('open');
    backdrop.classList.add('open');
});
