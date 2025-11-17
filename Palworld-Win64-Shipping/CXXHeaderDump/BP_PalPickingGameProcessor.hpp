#ifndef UE4SS_SDK_BP_PalPickingGameProcessor_HPP
#define UE4SS_SDK_BP_PalPickingGameProcessor_HPP

class UBP_PalPickingGameProcessor_C : public UPalPickingGameProcessor
{
    TMap<class EPalPickingGameDifficultyType, class FDataTableRowHandle> SettingDataRowNameMap;

    void GetSettingDataByDifficultyType(EPalPickingGameDifficultyType DifficultyType, FPalPickingGameSettingData& OutSettingData);
};

#endif
