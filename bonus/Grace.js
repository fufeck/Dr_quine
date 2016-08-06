var fs = require('fs');
/* comment outside */
(function funk() {
	fs.writeFileSync("Grace_kid.js", "var fs = require('fs');\n/* comment outside */\n(" + funk.toString() + ")()"); 
})()