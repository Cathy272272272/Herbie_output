function start(x) {
	return ((((((-2.707031 * x) + (58.652344 * ((x * x) * x))) + (-351.914062 * ((((x * x) * x) * x) * x))) + (854.648438 * ((((((x * x) * x) * x) * x) * x) * x))) + (-902.128906 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (344.449219 * ((((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((math.pow(x, 3.0) * (math.pow(x, 3.0) * math.pow(x, 3.0))) * ((x * (x * 344.449219)) + -902.128906)) + ((((854.648438 * x) * (x * x)) * math.cbrt(math.pow(math.pow(x, 3.0), (3.0 + 1.0)))) + (-2.707031 * x))) + ((x * x) * ((58.652344 * x) + ((x * -351.914062) * (x * x)))));
}
