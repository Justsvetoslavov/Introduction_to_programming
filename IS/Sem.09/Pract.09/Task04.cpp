bool IsRising(const float* seq, int size)
{
	if (size < 2) {
		return true;
	}
	
	if (*seq > *(seq+1)) { //Same as if(seq[0]>seq[1])
		return false;
	}
	
	return IsRising(++seq, size - 1);
}
