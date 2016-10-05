#include "main.h"
#include "base58.h"
#include "walletlevels.h"
#include <boost/assign/list_of.hpp>

std::string WalletLevels::GetWalletLevelName(WalletLevel walletLevel)
{
	switch(walletLevel)
	{
		case Platinum:
			return "Platinum";
		case Gold:
			return "Gold";
		case Silver:
			return "Silver";
		default:
			return "Standard";
	}	
}

WalletLevel WalletLevels::GetWalletLevel(CTxDestination address)
{
	//Platinum wallet list
	std::map<CTxDestination, std::string> platinumList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("xLCXwwH81EiYc1o2Hwm7pRgvpHfvzx6Duj").Get()), "Platinum1")
	(CTxDestination(CBitcoinAddress("xPXuZNkLM3Q4QfE8nE9f2qy1NC84HvhbpC").Get()), "Platinum2")
	(CTxDestination(CBitcoinAddress("xQvNsgihpvPwYwi8Gqij4X4sR9j5QwC3Y8").Get()), "Platinum3")
	(CTxDestination(CBitcoinAddress("xGVXBBxSjrubr7QSBwuXKbmyG89yGdFjut").Get()), "Platinum4")
	(CTxDestination(CBitcoinAddress("x9J86i6hPhscv1HWU3UNf1S6o5at48aBfC").Get()), "Platinum5")
	(CTxDestination(CBitcoinAddress("xMErPU5nDWhdAtGwBZsaC5xP4XzsJpsCNJ").Get()), "Platinum6")
	(CTxDestination(CBitcoinAddress("xNApUfouAU4CKqM721umxSNJ2vxVHNLN9X").Get()), "Platinum7");	
 
	if (platinumList.count(address))
		return Platinum;
	 
	//Gold wallet list 
	std::map<CTxDestination, std::string> goldList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("xW8n21Fk5EdUQvganihZAWbrzESew1SkS7").Get()), "Gold1")
	(CTxDestination(CBitcoinAddress("xL9DkSheLbg2w1wxa9yxMhnmhvcYYko4Vd").Get()), "Gold2")
	(CTxDestination(CBitcoinAddress("xHaCssNKbRvRAdf74zw8MYtrr4guGh4i3J").Get()), "Gold3")
	(CTxDestination(CBitcoinAddress("xBQ5VwuZpxgBTPuPomBEGkiJLaMaRRFHv3").Get()), "Gold4")
	(CTxDestination(CBitcoinAddress("xLmNY5LL8ezcuUw6njZGpAic6kVSYvSXsT").Get()), "Gold5");
	
	if (goldList.count(address))
		return Gold;

	//Silver wallet list 
	std::map<CTxDestination, std::string> silverList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("x8tf4nhfv9LPUjZ2ogbojU6dT74UmZXyL7").Get()), "Silver1")
	(CTxDestination(CBitcoinAddress("xS25MtTrVq4UENPun53k9op4occyZGSksH").Get()), "Silver2")
	(CTxDestination(CBitcoinAddress("x93PtgiyVJ9HXxkR6qgK22LDCT9o6PFvfX").Get()), "Silver3")
	(CTxDestination(CBitcoinAddress("xAR1MuKJ1CS5mzw8mxeQVdTh7URqBK93ws").Get()), "Silver4")
	(CTxDestination(CBitcoinAddress("xKgXtWZTZx5GKyQQZNm8K1rMgwQ7MaQDuU").Get()), "Silver5")
	(CTxDestination(CBitcoinAddress("xQYAiPPcr9Ec7pMCQsa2YtFPo3FcuRo7rj").Get()), "Silver6")
	(CTxDestination(CBitcoinAddress("xTqsA675w2f6ybR1ExCbni61CqKfGGdK87").Get()), "Silver7")
	(CTxDestination(CBitcoinAddress("xEjtm19n8oLDfXqUwmVLYoeXBe2TJXXQPw").Get()), "Silver8")
	(CTxDestination(CBitcoinAddress("xWhg4kHaocvdEGauUyTJ3atxjeMYdxXz1y").Get()), "Silver9")
	(CTxDestination(CBitcoinAddress("xVEMq89PH3jXuGtAZ5acbFtw9goRE9SvhE").Get()), "Silver10");	
	
	if (silverList.count(address))
		return Silver;	
	
	return Standard;
}

WalletLevel WalletLevels::GetWalletLevel2(CTxDestination address)
{
	//Platinum wallet list // New addresses from vegas 15-07-2016
	std::map<CTxDestination, std::string> platinumList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("xMUMhEL3nJFcZcdyf5tHWNQwkQzwuHW6pB").Get()), "Platinum1")
	(CTxDestination(CBitcoinAddress("xKsyDoD1KBYDy7bTNwxZV5Qt2K5LUBW2vq").Get()), "Platinum2")
	(CTxDestination(CBitcoinAddress("xEr9x5z4FbVaMPdrD3xGJENUQ66H3oyfLA").Get()), "Platinum3")
	(CTxDestination(CBitcoinAddress("xR8VhPYkcTRgEuEr7CfcCG5uJ7GMkNFLuT").Get()), "Platinum4")
	(CTxDestination(CBitcoinAddress("xDy1AnXMh6y6kS6JhbS3AxmXnc3Ec7pqXC").Get()), "Platinum5");	
 
	if (platinumList.count(address))
		return Platinum;
	 
	//Gold wallet list 
	std::map<CTxDestination, std::string> goldList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("xW8n21Fk5EdUQvganihZAWbrzESew1SkS7").Get()), "Gold1")
	(CTxDestination(CBitcoinAddress("xL9DkSheLbg2w1wxa9yxMhnmhvcYYko4Vd").Get()), "Gold2")
	(CTxDestination(CBitcoinAddress("xHaCssNKbRvRAdf74zw8MYtrr4guGh4i3J").Get()), "Gold3")
	(CTxDestination(CBitcoinAddress("xBQ5VwuZpxgBTPuPomBEGkiJLaMaRRFHv3").Get()), "Gold4")
	(CTxDestination(CBitcoinAddress("xLmNY5LL8ezcuUw6njZGpAic6kVSYvSXsT").Get()), "Gold5");
	
	if (goldList.count(address))
		return Gold;

	//Silver wallet list 
	std::map<CTxDestination, std::string> silverList = boost::assign::map_list_of
	(CTxDestination(CBitcoinAddress("x8tf4nhfv9LPUjZ2ogbojU6dT74UmZXyL7").Get()), "Silver1")
	(CTxDestination(CBitcoinAddress("xS25MtTrVq4UENPun53k9op4occyZGSksH").Get()), "Silver2")
	(CTxDestination(CBitcoinAddress("x93PtgiyVJ9HXxkR6qgK22LDCT9o6PFvfX").Get()), "Silver3")
	(CTxDestination(CBitcoinAddress("xAR1MuKJ1CS5mzw8mxeQVdTh7URqBK93ws").Get()), "Silver4")
	(CTxDestination(CBitcoinAddress("xKgXtWZTZx5GKyQQZNm8K1rMgwQ7MaQDuU").Get()), "Silver5")
	(CTxDestination(CBitcoinAddress("xQYAiPPcr9Ec7pMCQsa2YtFPo3FcuRo7rj").Get()), "Silver6")
	(CTxDestination(CBitcoinAddress("xTqsA675w2f6ybR1ExCbni61CqKfGGdK87").Get()), "Silver7")
	(CTxDestination(CBitcoinAddress("xEjtm19n8oLDfXqUwmVLYoeXBe2TJXXQPw").Get()), "Silver8")
	(CTxDestination(CBitcoinAddress("xWhg4kHaocvdEGauUyTJ3atxjeMYdxXz1y").Get()), "Silver9")
	(CTxDestination(CBitcoinAddress("xVEMq89PH3jXuGtAZ5acbFtw9goRE9SvhE").Get()), "Silver10");	
	
	if (silverList.count(address))
		return Silver;	
	
	return Standard;
}
 
// 39orebla: GetStakeInterest does need to know block height due to the PoS reward change
int64_t WalletLevels::GetStakeInterest(CTxDestination address, int height)
{
	if (height >= FORK_HEIGHT_5)
		return GetStakeInterestV4(address, height);
	
	if (height >= FORK_HEIGHT_4)
		return GetStakeInterestV3(address, height);
	
	if (height >= FORK_HEIGHT_3)
		return GetStakeInterestV2(address, height);
	
	WalletLevel walletLevel = GetWalletLevel(address);
	
	switch(walletLevel)
	{
		case Platinum:
            return height < FORK_HEIGHT_2 ? 30 * COIN : 15 * COIN; 	// Platinum 300%/150% annual interest
		case Gold:
            return height < FORK_HEIGHT_2 ? 25 * COIN : 12.5 * COIN; 	// Gold 250%/125% annual interest
		case Silver:
            return height < FORK_HEIGHT_2 ? 22.5 * COIN : 11.25 * COIN; // Silver 225%/112.5% annual interest
		default:
            return height < FORK_HEIGHT_2 ? 20 * COIN : 10 * COIN; // Standard 200%/100% annual interest
	}
}


int64_t WalletLevels::GetStakeInterestV2(CTxDestination address, int height)
{
	WalletLevel walletLevel = GetWalletLevel(address);
	
	switch(walletLevel)
	{
		case Platinum:
            return 100 * COIN; 	// Platinum 1000% annual interest
		case Gold:
            return 75 * COIN; // Gold 750% annual interest
		case Silver:
            return 61.225 * COIN; // Silver 612.25% annual interest
		default:
            return 50 * COIN; // Standard 500% annual interest
	}
}
//BitSendDev 15-07-2016
int64_t WalletLevels::GetStakeInterestV3(CTxDestination address, int height)
{
	WalletLevel walletLevel = GetWalletLevel2(address);
	
	switch(walletLevel)
	{
			
		case Platinum:
            return 40; 	// Platinum 400% annual interest
		case Gold:
            return 30; // Gold 300% annual interest
		case Silver: 
            return 20; // Silver 200% annual interest
		default:
            return 10; // Standard 100% annual interest
		
	}
}

int64_t WalletLevels::GetStakeInterestV4(CTxDestination address, int height)
{
	WalletLevel walletLevel = GetWalletLevel2(address);
	
	switch(walletLevel)
	{
			
		case Platinum:
            return 40 * COIN; 	// Platinum 400% annual interest
		case Gold:
            return 30 * COIN; // Gold 300% annual interest
		case Silver: 
            return 20 * COIN; // Silver 200% annual interest
		default:
            return 10 * COIN; // Standard 100% annual interest
		
	}
}