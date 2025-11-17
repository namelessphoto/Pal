#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PalMapObjectSpawnComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FName MapObjectId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid MapObjectInstanceId;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreSave;
    
public:
    UPalMapObjectSpawnComponent(const FObjectInitializer& ObjectInitializer);

};

