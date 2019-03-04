<?php
//Process purchase
//Print welcome message to user and display their password
//Print a receipt

function itemCost($qty, $price) {
  $total = $qty * $price;
  return $total;
}

function totalCost($w, $x, $y, $z) {
  $total = $w + $x + $y + $z;
  return $total;
}

$username = $_POST["email"];
$password = $_POST["password"];
$whiteReam = $_POST["whiteReam"];
$whiteCase = $_POST["whiteCase"];
$cardReam = $_POST["cardReam"];
$ship = $_POST["ship"];

$whiteReamCost = itemCost($whiteReam, 4.00);
$whiteCaseCost = itemCost($whiteCase, 35.00);
$cardReamCost = itemCost($cardReam, 7.00);

if ($ship == "Free") {
  $shipCost = 0.00;
}
else if ($ship == "3-Day") {
  $shipCost = 5.00;
}
else if ($ship == "Overnight") {
  $shipCost = 50.00;
}


echo "<html><head><link href='style.css' type='text/css' rel='stylesheet'";
echo "</head><body>";
echo "<p>Thanks for shopping with Dunder Mifflin!<br>";
echo "Your email: " . $username . "<br>";
echo "Your password: " . $password . "<br><br><br>";
echo "Order summary:<br><br>";
echo "<table><tr><th></th><th>Quantity</th><th>Cost per item</th>";
echo "<th>Sub Total</th></tr>";
echo "<tr><th>White Copy Paper, Single Ream</th>";
echo "<td>" . $whiteReam . "</td><td>$4.00</td>";
echo "<td>$" . $whiteReamCost . ".00</td></tr>";
echo "<tr><th>White Copy Paper, 10 Ream Case</th>";
echo "<td>" . $whiteCase . "</td><td>$35.00</td>";
echo "<td>$" . $whiteCaseCost . ".00</td></tr>";
echo "<tr><th>Card Stock, Single Ream</th>";
echo "<td>" . $cardReam . "</td><td>$7.00</td>";
echo "<td>$" . $cardReamCost . ".00</td></tr>";
echo "<tr><th>Shipping</td><td colspan='2'>" . $ship . "</td><td>$" . $shipCost . ".00</td></tr>";
echo "<tr><th>Total Cost</th>";
echo "<th colspan='3'>$" . totalCost($whiteReamCost, $whiteCaseCost, $cardReamCost, $shipCost) . ".00</th>";
echo "</tr></table></body></html>";

 ?>
