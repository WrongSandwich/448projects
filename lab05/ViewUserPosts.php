<?php

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

$username = $_POST["user"];
echo "<b>List of Posts</b><br><br>";
echo $username;
echo "<br><br>";

$query = "SELECT * FROM Posts WHERE Author_id='$username'";
if ($roster = $mysqli->query($query)) {
  /* fetch associative array */
  while ($row = $roster->fetch_assoc()) {
    $Post_id = $row["Post_id"];
    $Content = $row["Content"];
    echo "Post_id: " . $Post_id . "<br>";
    echo "Content: " . $Content . "<br><br><br>";
  }
  $roster->free();
  echo "</body></html>";
}

$mysqli->close();

?>
