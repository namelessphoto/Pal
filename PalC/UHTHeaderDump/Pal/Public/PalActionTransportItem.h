#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalNetArchive.h"
#include "PalActionTransportItem.generated.h"

class AActor;

UCLASS()
class PAL_API UPalActionTransportItem : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemAttachSocketName;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    AActor* ItemActor;
    
public:
    UPalActionTransportItem();

    UFUNCTION(BlueprintCallable)
    static void WriteBlackboard(UPARAM(Ref) FPalNetArchive& BlackboardRef, const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable)
    void StartSetupItemActor(const FName StaticItemId);
    
    UFUNCTION(BlueprintPure)
    void ReadBlackboard(FName& StaticItemId) const;
    
};

