#pragma once



bool * generateUsedCards()
{
	bool usedCards[52];

	for (int i = 0; i < 52; i++)
	{
		usedCards[i] = false;
	}

	return usedCards;
}

