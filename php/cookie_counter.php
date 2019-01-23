<?php
if(!isset($_COOKIE['counter'])) {
	$count = 0;
} else {
	$count = $_COOKIE['counter'] + 1;
}
	setcookie('counter', $count);
?>

<!DOCTYPE html>
<html>
<body>
	<form action="cookie_counter.php" method="GET">
		<input type="submit" value="Counter">
	</form>
<?php
	echo "<h1>$count</h1>";
?>
</body>
</html>
