<?php

$username = $_POST["username"];

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

$query = "SELECT User_id FROM Users WHERE User_id = '$username'";

if ($result = $mysqli->query($query)) {
  echo '<script language="javascript">';
  echo 'alert("ERROR: User already exists")';
  echo '</script>';
}
else {
  $query = "INSERT INTO Users (User_id) VALUES ('$username')";
  $mysqli->query($query);
  echo '<p>User successfully created!</p>';
}

$mysqli->close();

?>
