<?php

$checklist = $_POST["postForm"];

$mysqli = new mysqli("mysql.eecs.ku.edu", "e106t851", "kahHohv3", "e106t851");

/* check connection */
if ($mysqli->connect_errno) {
  printf("Connect failed: %s\n", $mysqli->connect_error);
  exit();
}

if(!empty($checklist)) {
  $N = count($checklist);
  echo "You selected " . $N . " posts for deletion.<br>";
  for($i = 0; $i < $N; $i++)
  {
    echo $checklist[$i] . "<br>";
  }
}

$mysqli->close();

?>
