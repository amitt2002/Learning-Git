let unclickable = document.querySelector(".unclickable");

const len = 200;

function moveButton() {
  const randomX = Math.floor(Math.random() * (innerWidth - len));
  const randomY = Math.floor(Math.random() * (innerHeight - len));
  this.style.top = `${randomY}px`;
  this.style.left = `${randomX}px`;
}


for (const eventName of ["mouseover", "mousemove"]) {
  unclickable.addEventListener(eventName, moveButton);
}

unclickable.addEventListener("click", function(){
  alert("You clicked the button MR Bruce Lee");
});

document.addEventListener("contextmenu", (event)=>event.preventDefault());