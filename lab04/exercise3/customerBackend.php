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

$username = $_POST["username"];
$password = $_POST["password"];
$whiteReam = $_POST["whiteReam"];
$whiteCase = $_POST["whiteCase"];
$cardReam = $_POST["cardReam"];
$ship = $_POST["ship"];

$whiteReamCost = itemCost($whiteReam, 4);
$whiteCaseCost = itemCost($whiteCase, 35);
$cardReamCost = itemCost($cardReam, 7);

if ($ship == "free") {
  $shipCost = 0;
}
else if ($ship == "threeDay") {
  $shipCost = 5;
}
else if ($ship == "overnight") {
  $shipCost = 50;
}

echo "<p>Thanks for shopping with Dunder Mifflin!<br>";
echo "Your username: " . $username . "<br>";
echo "Your password: " . $password . "<br><br><br>";
echo "Order summary:<br><br>";
echo "<table><tr><th></th><th>Quantity</th><th>Cost per item</th>";
echo "<th>Sub Total</th></tr>";
echo "<tr><th>White Copy Paper, Single Ream</th>";
echo "<td>" . $whiteReam . "</td><td>$4.00</td>";
echo "<td>" . $whiteReamCost . "</td></tr>";
echo "<tr><th>White Copy Paper, Case of 10 Reams</th>";
echo "<td>" . $whiteCase . "</td><td>$35.00</td>";
echo "<td>" . $whiteCaseCost . "</td></tr>";
echo "<tr><th>Card Stock, Single Ream</th>";
echo "<td>" . $cardReam . "</td><td>$7.00</td>";
echo "<td>" . $cardReamCost . "</td></tr>";
echo "<tr><th>Shipping</td><td>" . $ship . "</td><td>" . $shipCost . "</td></tr>";
echo "<tr><th>Total Cost</th>";
echo "<th>" . totalCost($whiteReamCost, $whiteCaseCost, $cardReamCost, $shipCost) . "</th>";
echo "</tr></table>";

 ?>
