int abs(int num1, int num2)
{
    return ((num1 - num2) >= 0 ? (num1 - num2) : (num2 - num1));
}

double fabs(double &num)
{
	return num > 0.0 ? num : -num;	
}