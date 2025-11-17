#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "Templates/SubclassOf.h"
#include "PalAnimNotify_SpawnActor.generated.h"

class AActor;

UCLASS(CollapseCategories)
class UPalAnimNotify_SpawnActor : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnActorClass;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator SpawnRotationOffset;
    
    UPalAnimNotify_SpawnActor();

};

