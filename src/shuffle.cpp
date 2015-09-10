// 给定N张扑克牌和一个随机函数，设计一个洗牌算法

void shuffle(int cards[], int n)
{
	if (cards == NULL || n <= 0)
		return ;

	srand(time(0));
	for (int i = 0; i < n - 1; ++i)
	{
		// 保证每次第i位的值不会涉及到第i位以前
		int index = i + rand() % (n -i);
		swap(cards[i], cards[index]);
	}
}
