<?php
$aphorisms = [
	"Devo far accadere il mio bene.",
	"Resistere e preparare la contromossa e' la strategia migliore.",
	"Vedere la realtà nuda è il primo passo verso la vittoria.",
	"Inutile cercare la felicità, meglio vivere.",
	"Anch'io sono legittimo, nonostante in tanti abbiano provato a farmi sentire inadeguato.",
	"C'e' conforto nel non portare il peso del conformismo e della frenesia sociale.",
	"A ben guardare, niente è importante. Ci si può consolare in questa verità.",
	"Il rispetto è più importante dell'amore.",
	"Non scappare è un risultato importante.",
	"Solitudine è la condizione dell'essere umano. Si può trovare leggerezza in ciò.",
	"Abbandonata la morale, si allentano le catene della schiavitù verso il prossimo.",
	"C'è nella vita qualcosa per cui vale la pena combattere.",
	"Anche se si fallisce, si ha il permesso di continuare a vivere.",
	"Non sempre la saggezza basta a dormire con serenità.",
	"Non avere ciò che si desidera potrebbe essere una fortuna diversamente vestita.",
	"Per vincere, fingere è lecito, seppur si richieda di essere convincenti.",
	"Rubare al Cielo è una via per la serenità.",
	"Non curarsi della vita aiuta a vivere la vita.",
	"Tutto è nelle mani della Necessità.",
	"Ubbidienza è virtù degli schiavi.",
	"Ci vuole coraggio per vivere da vigliacchi.",
	"Le situazioni vanno e vengono.",
	"La saggezza abita nel cuore timoroso.",
	"Apparire è per gli altri, essere è per se stessi.",
	"Anche se tutto il mondo mi odia, io amo me stesso.",
	"Un'armatura di immoralità è la miglior protezione dagli strali del destino.",
	"Se riesci a sorridere, c'è ancora un presente.",
	"Disinteressarsi ai risultati rende il cuore fanciullesco.",
	"La pucciosità è salvifica.",
	"Piccoli passi sono grandi passi.",
	"Riuscire non esenta dal fallimento ultimo che è la morte.",
	"La bellezza può essere una ragione di vita.",
	"La conversazione più saliente si ha con se stessi.",
	"Vivere bene è sentire bene.",
	"Il cuore stabilisce quale sia la legge della propria esistenza.",
	"La sola pazienza fa marcire il sentimento.",
	"Essere caldi non vale quanto essere freddi.",
	"Amare non vale quanto essere equanimi.",
	"Se hai valore, corri il rischio di essere sfruttato.",
	"Se ti accontenti di ciò che non può essere percepito, il mondo ti appartiene.",
	"Il comando deve essere dato e prontamente rimesso.",
	"La morale è una malattia per l'essere umano vero.",
	"Trova grandezza nella tua piccolezza. Trova piccolezza nella loro grandezza.",
	"Fermati e il mondo smetterà di girare.",
	"Acquistare è pernicioso quanto perdere."
];

echo sizeof($aphorisms) . " aphorisms found.\n";

$res='';
for($i = 0; $i < 3; $i++) {
	echo "Press <ENTER> to cast bits";
	$input = fgets(STDIN);

	$now = microtime();
	$micro = explode(".",  explode(" ", $now)[0] )[1];
	$digits = str_split($micro);

	// odd is HEAD(3, Yang), even is TAIL(2, Yin)
	for($j = 0; $j < 2; $j++) {
		if($digits[$j] % 2 == 0) {
			$res .= '1';
		} else {
			$res .= '0';
		}
	}	
}

echo "DEBUG - res = $res\n";
$num = bindec($res) % sizeof($aphorisms);
echo "DEBUG - num = $num\n";
echo $aphorisms[$num] . "\n";
?>
