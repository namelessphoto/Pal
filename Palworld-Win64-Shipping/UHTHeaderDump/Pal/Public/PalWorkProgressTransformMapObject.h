#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalWorkProgressTransformBase.h"
#include "PalWorkProgressTransformMapObject.generated.h"

UCLASS()
class UPalWorkProgressTransformMapObject : public UPalWorkProgressTransformBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid MapObjectInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform TransformCache;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bCached;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bShouldSearchForFoliage;
    
public:
    UPalWorkProgressTransformMapObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

