function start(x) {
	return (((-0.3125 + (6.5625 * (x * x))) + (-19.6875 * (((x * x) * x) * x))) + (14.4375 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((x * 6.5625) * x) + -0.3125) + ((14.4375 * math.pow(x, 6.0)) - (19.6875 * math.pow(x, 4.0))));
}
