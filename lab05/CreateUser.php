<?php

$username = $_POST["username"];

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

$query = "INSERT INTO Users (User_id) VALUES ('" . $username . "')";

if ($mysqli->query($query) === TRUE) {
  echo "User created successfully!";
} else {
  echo "Error: User already exists.";
}

$mysqli->close();

?>
