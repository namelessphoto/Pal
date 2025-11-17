#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_DroppedChest.generated.h"

UCLASS()
class PAL_API UPalLocationPoint_DroppedChest : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
public:
    UPalLocationPoint_DroppedChest();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    FGuid GetOwnerPlayerUId() const;
    
};

