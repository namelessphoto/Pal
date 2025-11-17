#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalLocationType.h"
#include "PalLocationBase.generated.h"

class UPalLocationPoint;

UCLASS(Abstract, BlueprintType)
class UPalLocationBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid CalledPlayerUId;
    
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid ID;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bShouldDisplay;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bShowInMap;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bShowInCompass;
    
public:
    UPalLocationBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool ShouldDisplay() const;
    
    UFUNCTION(BlueprintPure)
    UPalLocationPoint* LocationPoint();
    
    UFUNCTION(BlueprintPure)
    bool IsShowInMap() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowInCompass() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRequestedPlayer(const FGuid& LocalPlayerUId);
    
    UFUNCTION(BlueprintPure)
    EPalLocationType GetType() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetLocationId() const;
    
};

