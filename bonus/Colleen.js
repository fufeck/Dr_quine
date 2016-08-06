/* comment outside */

function a() {}

(function main() {
	/* comment outside */
	console.log("/* comment outside */\n\n" + a.toString() + "\n\n(", main.toString() + ")()")
})()