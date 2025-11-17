#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBoneInfo.generated.h"

UCLASS()
class PAL_API UPalBoneInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Length;
    
    UPROPERTY(Transient)
    float Radius;
    
    UPalBoneInfo();

};

