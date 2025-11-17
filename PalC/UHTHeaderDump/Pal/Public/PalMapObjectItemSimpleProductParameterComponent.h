#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDataTableRowName_ItemProductData.h"
#include "PalMapObjectItemSimpleProductParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemSimpleProductParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemProductData ItemProductId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SlotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float WorkSpeedAdditionalRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsGainExp;
    
    UPalMapObjectItemSimpleProductParameterComponent(const FObjectInitializer& ObjectInitializer);

};

