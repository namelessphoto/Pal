#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDynamicItemId.h"
#include "PalDynamicItemDataBase.generated.h"

UCLASS(BlueprintType)
class UPalDynamicItemDataBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FPalDynamicItemId ID;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FName StaticId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIgnoreOnSave;
    
public:
    UPalDynamicItemDataBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    FName GetStaticId() const;
    
    UFUNCTION(BlueprintPure)
    FPalDynamicItemId GetId() const;
    
};

