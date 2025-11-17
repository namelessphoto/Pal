#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalMapObjectItemConverterParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemConverterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalItemTypeA> TargetTypesA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalItemTypeB> TargetTypesB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TargetRankMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalItemTypeA> MaterialTypesA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalItemTypeB> MaterialTypesB;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoWorkAmountBySec;
    
    UPROPERTY(EditDefaultsOnly)
    float WorkSpeedAdditionalRate;
    
    UPalMapObjectItemConverterParameterComponent(const FObjectInitializer& ObjectInitializer);

};

