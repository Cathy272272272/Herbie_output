function start(x) {
	return ((((((((((1.0 + (-11.0 * x)) + (27.5 * (x * x))) + (-27.5 * ((x * x) * x))) + (13.75 * (((x * x) * x) * x))) + (-3.85 * ((((x * x) * x) * x) * x))) + (0.641667 * (((((x * x) * x) * x) * x) * x))) + (-0.065476 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.004092 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-0.000152 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x))) + (3e-06 * (((((((((x * x) * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return (((((x * -11.0) + 1.0) + (((x * -0.065476) + 0.641667) * math.pow((x * x), 3.0))) + ((((-3.85 * x) + 13.75) * ((x * x) * (x * x))) + ((27.5 + (x * -27.5)) * (x * x)))) + (math.cbrt(math.pow(math.pow(x, 3.0), (3.0 + 1.0))) * (((0.004092 + (x * -0.000152)) * math.pow(x, 4.0)) + ((3e-06 * (x * x)) * math.pow(x, (2.0 + 2.0))))));
}
