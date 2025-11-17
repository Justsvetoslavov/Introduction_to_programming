double fabs(double num)
{
	const double epsilon = 0.000001;
	return num >= 0.0 ? num : -num;	
}
