function start(x) {
	return ((((((1.0 + (-6.0 * x)) + (7.5 * (x * x))) + (-3.333333 * ((x * x) * x))) + (0.625 * (((x * x) * x) * x))) + (-0.05 * ((((x * x) * x) * x) * x))) + (0.001389 * (((((x * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((x * ((0.001389 * x) * math.pow(x, (2.0 + 2.0)))) + ((x * -6.0) + 1.0)) + ((((x * x) * (x * x)) * (0.625 + (-0.05 * x))) + ((x * x) * ((-3.333333 * x) + 7.5))));
}
