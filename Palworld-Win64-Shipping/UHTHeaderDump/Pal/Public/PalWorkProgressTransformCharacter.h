#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalInstanceID.h"
#include "PalWorkProgressTransformBase.h"
#include "PalWorkProgressTransformCharacter.generated.h"

UCLASS()
class UPalWorkProgressTransformCharacter : public UPalWorkProgressTransformBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalInstanceID IndividualId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform TransformCache;
    
public:
    UPalWorkProgressTransformCharacter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

