#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectBulletLauncherParameterComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectBulletLauncherParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_ItemData BulletItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MxgazineSize;
    
    UPalMapObjectBulletLauncherParameterComponent(const FObjectInitializer& ObjectInitializer);

};

