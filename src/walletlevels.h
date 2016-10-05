enum WalletLevel { Platinum, Gold, Silver, Standard };
class WalletLevels
{
public:
    static int64_t GetStakeInterest(CTxDestination address, int height);
	static int64_t GetStakeInterestV2(CTxDestination address, int height);
	static int64_t GetStakeInterestV3(CTxDestination address, int height);
	static int64_t GetStakeInterestV4(CTxDestination address, int height);
	static WalletLevel GetWalletLevel(CTxDestination address);
	static WalletLevel GetWalletLevel2(CTxDestination address);
	static std::string GetWalletLevelName(WalletLevel walletLevel);
};
