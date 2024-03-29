

//this code must be used with the app xampp and located on the folder htdocs with the name insert_temp.php

<?php

if(isset($_GET["user_id"]) && isset($_GET["temperature"]) && isset($_GET["humidity"]) && isset($_GET["weight"]) && isset($_GET["lastHumidityChange"]) && isset($_GET["lastTemperatureChange"]) ){
    $user_id = $_GET["user_id"]; // get user_id from HTTP GET
    $temperature = $_GET["temperature"]; // get temperature value from HTTP GET
    $humidity = $_GET["humidity"]; // get humidity value from HTTP GET
    $weight = $_GET["weight"]; // get weight value from HTTP GET
	$lastHumidityChange = $_GET["lastHumidityChange"];
	$lastTemperatureChange = $_GET["lastTemperatureChange"];

    $servername = "localhost";
    $username = "ESP32";
    $password = "esp32io.com";
    $database_name = "db_esp32";
	
	
	
	
	function fungus_growth_probability($temp, $humidity) {
	  if ($temp < 20.0 || $humidity < 50.0) {
		return 1;
	  }
	  else {
		$temp_factor = min(($temp - 20.0) / 10.0, 1.0);
		$humidity_factor = min(($humidity - 50.0) / 50.0, 1.0);

		return 1-($temp_factor * $humidity_factor);
	  }
	}
	$fungus_growth_prob = fungus_growth_probability($temperature, $humidity);


	
    // Create MySQL connection from PHP to MySQL server
    $connection = new mysqli($servername, $username, $password, $database_name);
    // Check connection
    if ($connection->connect_error) {
        die("MySQL connection failed: " . $connection->connect_error);
    }

    $sql = "INSERT INTO tbl_sensor_data (user_id, temperature, humidity, weight, lastHumidityChange, lastTemperatureChange, fungus_growth_prob) VALUES ('$user_id', $temperature, $humidity, $weight, $lastHumidityChange, $lastTemperatureChange, $fungus_growth_prob)";

    if ($connection->query($sql) === TRUE) {
        // Create a PHP array with the fungus_growth_prob value
        $responseArray = array("fungus_growth_prob" => $fungus_growth_prob);

        // Convert the PHP array to a JSON string
        $jsonResponse = json_encode($responseArray);

        // Send the JSON response
        echo $jsonResponse;
    } else {
        echo "Error: " . $sql . " => " . $connection->error;
    }

    $connection->close();
} else {
    echo "user_id, temperature, humidity, weight, lastHumidityChange, or lastTemperatureChange is not set in the HTTP request";
}
?>


