#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDeadBodyManager.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalDeadBodyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleInstanceOnly)
    TArray<UPalIndividualCharacterHandle*> DeadPalList;
    
public:
    UPalDeadBodyManager();

    UFUNCTION(BlueprintCallable)
    void GetDeadPalList(TArray<UPalIndividualCharacterHandle*>& OutArray);
    
};

