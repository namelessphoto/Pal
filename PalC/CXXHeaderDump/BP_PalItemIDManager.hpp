#ifndef UE4SS_SDK_BP_PalItemIDManager_HPP
#define UE4SS_SDK_BP_PalItemIDManager_HPP

class UBP_PalItemIDManager_C : public UPalItemIDManager
{
    TMap<class EPalElementType, class FPalItemPalEggDataHandle> PalEggStaticItemIdMap;
    FDataTableRowHandle DefaultPalEggStaticItemId;

    void GetPalEggRank(int32 PalRarity, class UObject* WorldContextObject, int32& PalEggRank);
    FName GetStaticItemIdPalEgg(const class UObject* WorldContextObject, const FName CharacterID);
};

#endif
