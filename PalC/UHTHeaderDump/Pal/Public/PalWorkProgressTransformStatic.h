#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalWorkProgressTransformBase.h"
#include "PalWorkProgressTransformStatic.generated.h"

UCLASS()
class UPalWorkProgressTransformStatic : public UPalWorkProgressTransformBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FTransform Transform;
    
public:
    UPalWorkProgressTransformStatic();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

