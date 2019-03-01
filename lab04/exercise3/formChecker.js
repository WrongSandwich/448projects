//User name must be in the form of an email address (name@domain.com)
function formChecker() {
  //checking for blank inputs
  let inputs = document.getElementsByTagName('input');
  for (i = 0; i < inputs.length; i++) {
    // only validate the inputs that have the required attribute
    if(inputs[i].hasAttribute("required")){
        if(inputs[i].value == ""){
            // found an empty field that is required
            alert("Please fill all required fields");
            return false;
        }
    }
  }
  //checking for negative quantity inputs
  let whiteReam = document.getElementById("whiteReam").value;
  let whiteCase = document.getElementById("whiteCase").value;
  let cardReam = document.getElementById("cardReam").value;
  if (whiteReam < 0 || whiteCase < 0 || cardReam < 0) {
    //negative number present
    alert("Please enter only nonnegative quantities");
    return false;
  }
  //check that username is in form of email address



  return true;
}
