function start(x) {
	return ((((((((1.0 + (-8.0 * x)) + (14.0 * (x * x))) + (-9.333333 * ((x * x) * x))) + (2.916667 * (((x * x) * x) * x))) + (-0.466667 * ((((x * x) * x) * x) * x))) + (0.038889 * (((((x * x) * x) * x) * x) * x))) + (-0.001587 * ((((((x * x) * x) * x) * x) * x) * x))) + (2.5e-05 * (((((((x * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((math.pow(x, (2.0 * 3.0)) * (2.5e-05 * (x * x))) + (math.pow(x, (2.0 * 3.0)) * ((-0.001587 * x) + 0.038889))) + ((((x * x) * ((-9.333333 * x) + 14.0)) + (((x * x) * (x * x)) * (2.916667 + (-0.466667 * x)))) + ((x * -8.0) + 1.0)));
}
