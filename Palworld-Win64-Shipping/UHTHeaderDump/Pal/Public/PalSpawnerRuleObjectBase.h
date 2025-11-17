#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalSpawnerRuleObjectBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalSpawnerRuleObjectBase : public UObject {
    GENERATED_BODY()
public:
    UPalSpawnerRuleObjectBase();

    UFUNCTION(BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    bool Validate(const UObject* WorldContextObject, const FGuid& PlayerUId) const;
    
};

