<!DOCTYPE html>
<html lang="en">
<head>
	<title>Got a Cookie!</title>
	<meta charset="UTF-8">
</head>
<body>
<p>
<?php
	echo "Hello, " . $_COOKIE['first_name'] . ' ' . $_COOKIE['last_name'] . "\n";
?>
</p>
</body>
</html>
