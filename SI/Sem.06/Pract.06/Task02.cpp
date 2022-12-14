int countOnes(int number) {
    int numberOfOnes = 0;
    while (number != 0) {
        if ((number & 1) == 1) {
            numberOfOnes++;
        }
        number >>= 1;
    }

    return numberOfOnes;
}
