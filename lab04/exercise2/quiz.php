<?php

function calcScore($x) {
  $z = $x / 5 * 100;
  return $z;
}

$levels = $_POST["levels"];
$checkLevels = "3";
$team = $_POST["team"];
$checkTeam = "Mac + Charlie";
$mac = $_POST["mac"];
$checkMac = "Flip the game board";
$gameName = $_POST["gameName"];
$checkGameName = "CharDee MacDennis 2: Electric Boogaloo";
$blackCard = $_POST["blackCard"];
$checkBlackCard = "Flip a coin";
$count = 0;

echo "<p>Question 1: How many levels are in CharDee MacDennis?<br>";
echo "You answered: " . $levels . "<br>";
echo "Correct answer: " . $checkLevels . "<br><br>";
echo "<p>Question 2: What team has always lost the game?<br>";
echo "You answered: " . $team . "<br>";
echo "Correct answer: " . $checkTeam . "<br><br>";
echo "<p>Question 3: What will Mac always try to do at some point during the game?<br>";
echo "You answered: " . $mac . "<br>";
echo "Correct answer: " . $checkMac . "<br><br>";
echo "<p>Question 4: What does Frank temporarily change the name of the game to?<br>";
echo "You answered: " . $gameName . "<br>";
echo "Correct answer: " . $checkGameName . "<br><br>";
echo "<p>Question 5: What does the black card say teams must do in the event of a tie?<br>";
echo "You answered: " . $blackCard . "<br>";
echo "Correct answer: " . $checkBlackCard . "<br><br></p>";

if ($levels == $checkLevels) {
  $count++;
}
if ($team == $checkTeam) {
  $count++;
}
if ($mac == $checkMac) {
  $count++;
}
if ($gameName == $checkGameName) {
  $count++;
}
if ($blackCard == $checkBlackCard) {
  $count++;
}

if ($count == 1) {
  echo "<h3>You got " . $count . " correct answer!<h3>";
}
else {
  echo "<h3>You got " . $count . " correct answers!<h3>";
}
echo "<p>Score: " . calcScore($count) . "%</p>";


?>
