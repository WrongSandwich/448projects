function compare() {
  var password1 = document.getElementById("pass1").value;
  var password2 = document.getElementById("pass2").value;
  console.log(password1);
  console.log(password2);
  if (password1 != password2) {
    alert("ERROR: Passwords do not match.");
  }
  else if (password1.length < 8) {
    alert("ERROR: Passwords must be at least 8 characters long.");
  }
  else {
    alert("congraterladins");
  }
}
