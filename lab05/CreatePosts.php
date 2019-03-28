<?php

$username = $_POST["username"];
$content = $_POST["content"];

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

$query = "SELECT User_id FROM Users WHERE User_id = '$username'";

if (!$result = $mysqli->query($query)) {
  echo '<script language="javascript">';
  echo 'alert("ERROR: User does not exist")';
  echo '</script>';
}
else {
  $query = "INSERT INTO Posts (Content, Author_id) VALUES ('$content', '$username')";
  $mysqli->query($query);
  echo '<p>Post successfully created!</p>';
}



?>
