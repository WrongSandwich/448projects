<?php

$rows = 100;
$columns = 100;

function multiply($x, $y) {
  $z = $x*$y;
  return $z;
}

echo "<table><tr><th></th>";
for ($i = 1; $i <= 100; $i++)
{
  echo "<th>" . $i . "</th>";
}
echo "</tr>";
for ($i = 1; $i <= 100; $i++)
{
  echo "<tr><th>" . $i . "</th>";
  for ($j = 1; $j <= 100; $j++)
  {
    echo "<td>" . multiply($i, $j) . "</td>";
  }
  echo "</tr>";
}
echo "</table>";



 ?>
