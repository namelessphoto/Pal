#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalLocationPointStatic.h"
#include "PalLocationPointBaseCamp.generated.h"

class UPalBaseCampModel;

UCLASS()
class UPalLocationPointBaseCamp : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bIsAvailable;
    
public:
    UPalLocationPointBaseCamp();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetAvailable();
    
private:
    UFUNCTION()
    void OnDisposeTarget(UPalBaseCampModel* Model);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSameGuildWithPlayer(FGuid PlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampId() const;
    
};

