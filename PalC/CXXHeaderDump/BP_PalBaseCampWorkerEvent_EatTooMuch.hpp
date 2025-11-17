#ifndef UE4SS_SDK_BP_PalBaseCampWorkerEvent_EatTooMuch_HPP
#define UE4SS_SDK_BP_PalBaseCampWorkerEvent_EatTooMuch_HPP

class UBP_PalBaseCampWorkerEvent_EatTooMuch_C : public UPalBaseCampWorkerEvent_EatTooMuch
{

    FText CreateNotifyMessageText(const FText& LocalizedFormatText, class APalCharacter* Character);
};

#endif
