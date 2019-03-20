<?php

echo "Select a language ";
$lang = trim(fgets(STDIN));

switch($lang) {
	case 'it':
		$locale = 'it_IT.utf8';
		break;
	case 'en':
		$locale = 'en_US.utf8';
		break;
	case 'ja':
		$locale = 'ja_JP.utf8';
}

if(defined('LC_MESSAGES')) {
	//echo "Setting localte to $locale\n";
	$ret = setlocale(LC_MESSAGES, $locale);
	//echo "setlocale: $ret\n";
	$ret = bindtextdomain('messages', './locale');
	//echo "bindtextdomain: $ret\n";
}

$ret = textdomain('messages');
//echo "textdomain: $ret\n";

echo _("Hello, world!"), "\n";
?>
