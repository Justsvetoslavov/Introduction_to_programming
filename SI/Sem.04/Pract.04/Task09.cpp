int calculate(int a, int b, char action = '+')
{
	switch (action)
	{
		case '+': return a + b;
		
		case '-': return a - b;
		
		case '*': return a * b;
		
		case '/': 
			if(b == 0) {
				std::cout << "Cannot divide by 0\n";
				return -1;
			}
			return a / b;
		
		case '%': 
			if(b == 0) {
				std::cout << "Cannot divide by 0\n";
				return -1;
			}
			return a % b;
		
		default:
			std::cout << "Error\n";
			return -1;
	}
}
