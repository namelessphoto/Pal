#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalBaseCampWorkerWalkAroundDynamicInfo.h"
#include "PalBaseCampWorkerWalkAroundSettings.h"
#include "PalAIActionBaseCampDodgeWork.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalAIActionBaseCampDodgeWork : public UPalAIActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FPalBaseCampWorkerWalkAroundSettings WalkAroundSettings;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBaseCampWorkerWalkAroundDynamicInfo WalkAroundDynamicInfo;
    
public:
    UPalAIActionBaseCampDodgeWork();

};

