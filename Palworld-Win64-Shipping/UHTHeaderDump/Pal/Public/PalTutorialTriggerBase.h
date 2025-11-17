#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EPalTutorialTriggerType.h"
#include "PalTutorialTriggerBase.generated.h"

UCLASS(Abstract, BlueprintType)
class PAL_API UPalTutorialTriggerBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool Checked;
    
    UPROPERTY(BlueprintReadWrite)
    bool CanTriggerMultiple;
    
    UPROPERTY(BlueprintReadWrite)
    FDataTableRowHandle TutorialMsgID;
    
    UPalTutorialTriggerBase();

    UFUNCTION(BlueprintPure)
    EPalTutorialTriggerType GetType() const;
    
};

