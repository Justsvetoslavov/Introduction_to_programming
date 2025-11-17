int calculate(int a, int b, char action = '+')
{
	switch (action)
	{
		case '+': return a + b;
		
		case '-': return a - b;
		
		case '*': return a * b;
		
		case '/': 
			if(b == 0) {
				return 0;
			}
			return a / b;
		
		case '%': 
			if(b == 0) {
				return 0;
			}
			return a % b;
		
		default:
			return a + b;
	}
}

