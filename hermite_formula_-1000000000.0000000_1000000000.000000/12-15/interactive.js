function start(x) {
	return ((((((((-518918400.0 * x) + (2421619200.0 * ((x * x) * x))) + (-2905943040.0 * ((((x * x) * x) * x) * x))) + (1383782400.0 * ((((((x * x) * x) * x) * x) * x) * x))) + (-307507200.0 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (33546240.0 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (-1720320.0 * ((((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x))) + (32768.0 * ((((((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((-307507200.0 + (33546240.0 * (x * x))) * math.pow(math.pow(x, 3.0), 3.0)) + ((math.pow(x, 15.0) * 32768.0) - (1720320.0 * math.pow(x, 13.0)))) + (((((1383782400.0 * x) * (x * x)) * ((x * x) * (x * x))) + (-518918400.0 * x)) + (((2421619200.0 * x) + ((x * -2905943040.0) * (x * x))) * (x * x))));
}
