<?php

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

$query = "SELECT * FROM Users";
if ($roster = $mysqli->query($query)) {
  echo "<h1>List of Users</h1><br>";
  /* fetch associative array */
  while ($row = $roster->fetch_assoc()) {
    $username = $row["User_id"];
    echo $username . "<br>";
  }
}

$mysqli->close();

?>
