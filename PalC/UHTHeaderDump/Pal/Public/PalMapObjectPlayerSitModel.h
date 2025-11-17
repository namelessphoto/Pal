#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPlayerSitModel.generated.h"

UCLASS()
class PAL_API UPalMapObjectPlayerSitModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid SittingPlayerUId;
    
public:
    UPalMapObjectPlayerSitModel();

private:
    UFUNCTION()
    void RequestSitPlayer_ServerInternal(const int32 PlayerId);
    
    UFUNCTION()
    void RequestReleaseSitPlayer_ServerInternal(const int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestReleaseSitPlayer();
    
};

