function editCSS() {
  //still need to handle bad input
  let borderRed = document.getElementById("borderRed").value;
  let borderGreen = document.getElementById("borderGreen").value;
  let borderBlue = document.getElementById("borderBlue").value;
  let newBorderColor = "rgb(" + borderRed + ", " + borderGreen + ", " + borderBlue + ")";
  document.getElementById("fuck").style.borderColor = newBorderColor;
  let backgroundRed = document.getElementById("backgroundRed").value;
  let backgroundGreen = document.getElementById("backgroundGreen").value;
  let backgroundBlue = document.getElementById("backgroundBlue").value;
  let newBackgroundColor = "rgb(" + backgroundRed + ", " + backgroundGreen + ", " + backgroundBlue + ")";
  document.getElementById("fuck").style.backgroundColor = newBackgroundColor;
  return(false); //Why tf do i have to return false for this to work
}
