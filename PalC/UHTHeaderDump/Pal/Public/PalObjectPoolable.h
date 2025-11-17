#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalObjectPoolParameter.h"
#include "PalObjectPoolable.generated.h"

UINTERFACE(Blueprintable)
class PAL_API UPalObjectPoolable : public UInterface {
    GENERATED_BODY()
};

class PAL_API IPalObjectPoolable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void ReturnToPool();
    
    UFUNCTION(BlueprintNativeEvent)
    void InitializeFromPool();
    
    UFUNCTION(BlueprintNativeEvent)
    FPalObjectPoolParameter GetObjectPoolParameter() const;
    
};

