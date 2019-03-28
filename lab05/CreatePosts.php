<?php

$username = $_POST["username"];
$content = $_POST["content"];

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

/*Check if username already exists*/
$query = "SELECT * FROM Users WHERE User_id = '$username'";
$search = $mysqli->query($query);

if (mysqli_num_rows($search) > 0) {
  /*User exists! Continue normally*/
  $newPost = "INSERT INTO Posts (Content, Author_id) VALUES ('$content', '$username')";
  $result = $mysqli->query($newPost);
  if ($result === TRUE) {
    echo "Post created successfully!";
  } else {
    echo "Error: Post unsuccessful.";
  }
} else {
  echo "Error: User does not exist!";
}

$mysqli->close();

?>
