function editCSS() {
  let borderRed = document.getElementById("borderRed").value;
  let borderGreen = document.getElementById("borderGreen").value;
  let borderBlue = document.getElementById("borderBlue").value;
  if (borderRed > 255 || borderGreen > 255 || borderBlue > 255)
  {
    alert("Please enter a valid color value (0-255)");
  }
  else if (borderRed < 0 || borderGreen < 0 || borderBlue < 0) {
    alert("Please enter a valid color value (0-255)");
  }
  else {
    let newBorderColor = "rgb(" + borderRed + ", " + borderGreen + ", " + borderBlue + ")";
    document.getElementById("darth").style.borderColor = newBorderColor;
  }
  let backgroundRed = document.getElementById("backgroundRed").value;
  let backgroundGreen = document.getElementById("backgroundGreen").value;
  let backgroundBlue = document.getElementById("backgroundBlue").value;
  if (backgroundRed > 255 || backgroundGreen > 255 || backgroundBlue > 255)
  {
    alert("Please enter a valid color value (0-255)");
  }
  else if (backgroundRed < 0 || backgroundGreen < 0 || backgroundBlue < 0) {
    alert("Please enter a valid color value (0-255)");
  }
  else {
    let newBackgroundColor = "rgb(" + backgroundRed + ", " + backgroundGreen + ", " + backgroundBlue + ")";
    document.getElementById("darth").style.backgroundColor = newBackgroundColor;
    //Base font color on background color; //(r * 0.299) + (g * 0.587) + (b * 0.114)) > 186
    if ((Number(backgroundRed)*0.299) + (Number(backgroundGreen)*0.587) + (Number(backgroundBlue)*0.114) <= 150)
    {
      document.getElementById("darth").style.color = "tan";
    }
    else {
      document.getElementById("darth").style.color = "black";
    }
  }
  return(false); //Why tf do i have to return false for this to work
}
