function start(x) {
	return (((((((((1.0 + (-9.0 * x)) + (18.0 * (x * x))) + (-14.0 * ((x * x) * x))) + (5.25 * (((x * x) * x) * x))) + (-1.05 * ((((x * x) * x) * x) * x))) + (0.116667 * (((((x * x) * x) * x) * x) * x))) + (-0.007143 * ((((((x * x) * x) * x) * x) * x) * x))) + (0.000223 * (((((((x * x) * x) * x) * x) * x) * x) * x))) + (-3e-06 * ((((((((x * x) * x) * x) * x) * x) * x) * x) * x)));
}
function end(x) {
	return ((((((x * x) * (x * x)) * ((x * x) * 0.116667)) + ((x * -9.0) + 1.0)) + ((((x * x) * (x * x)) * ((-1.05 * x) + 5.25)) + ((x * x) * ((-14.0 * x) + 18.0)))) + (((math.pow(x, (2.0 + 2.0)) * math.pow(x, (2.0 + 2.0))) * ((-3e-06 * x) + 0.000223)) + (((-0.007143 * x) * (x * x)) * ((x * x) * (x * x)))));
}