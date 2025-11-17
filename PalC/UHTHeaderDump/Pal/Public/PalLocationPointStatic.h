#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalLocationPoint.h"
#include "PalLocationPointStatic.generated.h"

UCLASS()
class PAL_API UPalLocationPointStatic : public UPalLocationPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FVector Location;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float RotationZ;
    
public:
    UPalLocationPointStatic();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

