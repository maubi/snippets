<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>
<form action="session.php" method="GET">
	<input type="submit" name="count" value="count">
</form>
<?php
if(!isset($_SESSION['counter'])) {
	$_SESSION['counter'] = 0;
} else {
	$_SESSION["counter"]++;
}
echo "<h1>", $_SESSION['counter'], "</h1>";
?>
</body>
</html>
