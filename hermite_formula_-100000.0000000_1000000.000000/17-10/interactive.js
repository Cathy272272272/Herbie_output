function start(x) {
	return (((((-30240.0 + (302400.0 * (x * x))) + (-403200.0 * (((x * x) * x) * x))) + (161280.0 * (((((x * x) * x) * x) * x) * x))) + (-23040.0 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (1024.0 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((x * x) * (x * x)) * ((161280.0 * x) * x)) + ((-23040.0 * math.pow(x, 8.0)) + ((x * -403200.0) * math.pow(x, 3.0)))) + ((((1024.0 * x) * math.pow(x, 3.0)) * (math.pow(x, 3.0) * math.pow(x, 3.0))) + (((x * x) * 302400.0) + -30240.0)));
}
