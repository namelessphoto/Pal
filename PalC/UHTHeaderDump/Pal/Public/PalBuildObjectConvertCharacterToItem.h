#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectConvertCharacterToItemVisualProcessInfo.h"
#include "PalBuildObjectConvertCharacterToItem.generated.h"

class UPalMapObjectConvertCharacterToItemModel;
class UPalMapObjectConvertCharacterToItemParameterComponent;

UCLASS()
class PAL_API APalBuildObjectConvertCharacterToItem : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UPalMapObjectConvertCharacterToItemParameterComponent* ConvertCharacterToItemParameter;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_VisualProcessInfos)
    TArray<FPalBuildObjectConvertCharacterToItemVisualProcessInfo> VisualProcessInfos;
    
public:
    APalBuildObjectConvertCharacterToItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_VisualProcessInfos(const TArray<FPalBuildObjectConvertCharacterToItemVisualProcessInfo> OldVisualProcessInfos);
    
    UFUNCTION()
    void OnProceedConvertProcess_ServerInternal(UPalMapObjectConvertCharacterToItemModel* ConvertCharacterToItemModel);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UpdateConvertProcessVisual();
    
};

