function start(x) {
	return (((1.875 * x) + (-8.75 * ((x * x) * x))) + (7.875 * ((((x * x) * x) * x) * x)));
}
function end(x) {
	return (((1.875 * x) + (-8.75 * ((x * x) * x))) + (7.875 * ((math.pow((1.0 / x), -3.0) * x) * x)));
}
