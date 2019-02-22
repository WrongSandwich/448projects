let images = ["pbj.jpg", "grilledCheese.jpg", "frenchDip.jpg", "breakfast.jpg", "cheeseburger.jpg"];
let curPic = 0;

function NextPic() {
  let pic = document.getElementById("pagePic");
  curPic++;
  if (curPic == images.length) {
    curPic = 0;
  }
  pic.src = images[curPic];
}

function PreviousPic() {
  let pic = document.getElementById("pagePic");
  curPic--;
  if (curPic < 0) {
    curPic = images.length - 1;
  }
  pic.src = images[curPic];
}
