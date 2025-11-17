#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalContainerOperationRestrictType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalMapObjectItemChestParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemChestParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalItemTypeA> TargetTypesA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPalItemTypeB> TargetTypesB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalContainerOperationRestrictType OperationRestrictType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoDestroyIfEmpty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CorruptionMultiplier;
    
    UPalMapObjectItemChestParameterComponent(const FObjectInitializer& ObjectInitializer);

};

