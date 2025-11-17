#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalLocationBase.h"
#include "PalLocationPoint.generated.h"

UCLASS(Abstract)
class UPalLocationPoint : public UPalLocationBase {
    GENERATED_BODY()
public:
    UPalLocationPoint();

    UFUNCTION(BlueprintPure)
    bool IsEnableFastTravel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDistanceXY() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeFastTravel();
    
    UFUNCTION(BlueprintPure)
    float GetRotationZ() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetRotation() const;
    
    UFUNCTION(BlueprintPure)
    void GetLocationAndRotationZ(FVector& OutLocation, float& OutRotationZ) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocation() const;
    
};

