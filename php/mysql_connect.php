<?php

$serverName = 'localhost';
$userName = 'root';
$password = '';
$dbName = 'prova';

$conn = new mysqli($serverName, $userName, $password, $dbName);	// connect

if ($conn->connect_error) {
	die('Connection Failed: ' . $conn->connect_error);
}

echo "Connected successfully\n";

$sql = 'SELECT * FROM manga';

$result = $conn->query($sql);

if ($result->num_rows > 0) {
	while ($row = $result->fetch_assoc()) {
		echo 'ID: ' . $row["id"] . ' TITLE: ' . $row['title'] . "\n";
	}
}

?>
