#ifndef UE4SS_SDK_BP_PalBaseCampWorkerEvent_TurnFoodBox_HPP
#define UE4SS_SDK_BP_PalBaseCampWorkerEvent_TurnFoodBox_HPP

class UBP_PalBaseCampWorkerEvent_TurnFoodBox_C : public UPalBaseCampWorkerEvent_TurnFoodBox
{

    FText CreateNotifyMessageText(const FText& LocalizedFormatText, class APalCharacter* Character);
};

#endif
