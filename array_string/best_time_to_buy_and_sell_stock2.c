int maxProfit(int* prices, int pricesSize) {
	int res = 0;
	for (int i = 0; i < pricesSize - 1; i++)
		if (prices[i + 1] > prices[i])
			res += (prices[i + 1] - prices[i]);
	return (res);
}
