function start(x) {
	return (((((((1.0 + (-7.0 * x)) + (10.5 * (x * x))) + (-5.833333 * ((x * x) * x))) + (1.458333 * (((x * x) * x) * x))) + (-0.175 * ((((x * x) * x) * x) * x))) + (0.009722 * (((((x * x) * x) * x) * x) * x))) + (-0.000198 * ((((((x * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((x * x) * (x * x)) * (1.458333 + (-0.175 * x))) + ((math.pow(x, 3.0) * math.pow(x, 3.0)) * (0.009722 + (-0.000198 * x)))) + ((((x * -5.833333) * (x * x)) + 1.0) + (x * ((10.5 * x) + -7.0))));
}
