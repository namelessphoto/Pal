#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPlayerInputOneFlameCommandList.generated.h"

class UPalPlayerInputOneFlameCommand;

UCLASS()
class PAL_API UPalPlayerInputOneFlameCommandList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UPalPlayerInputOneFlameCommand*> List;
    
    UPROPERTY()
    FName DebugName;
    
public:
    UPalPlayerInputOneFlameCommandList();

};

