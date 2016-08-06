var fs = require('fs');
var cp = require('child_process');
var i = 5;
/* comment outside */
(function main() {
	if (i <= 0)
		return (0);
	i--;
	fs.writeFileSync("Sully_" + i + ".js", "var fs = require('fs');\nvar cp = require('child_process');\nvar i = " + i + ";\n/* comment outside */\n(" + main.toString() + ")()");
	cp.execSync("node Sully_" + i + ".js");;
})()