#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalLocationPoint.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalLocationPoint_MapObject.generated.h"

class UPalMapObjectModel;

UCLASS()
class UPalLocationPoint_MapObject : public UPalLocationPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid MapObjectModelId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FVector InitialLocationCache;
    
public:
    UPalLocationPoint_MapObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnDisposeTarget(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetMapObjectName(FName& MapObjectName) const;
    
};

