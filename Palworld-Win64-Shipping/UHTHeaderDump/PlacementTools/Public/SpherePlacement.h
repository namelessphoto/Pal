#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EFadeAxis.h"
#include "PlacementToolBase.h"
#include "SpherePlacement.generated.h"

class USphereComponent;

UCLASS()
class PLACEMENTTOOLS_API ASpherePlacement : public APlacementToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(Instanced)
    USphereComponent* SphereBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFadeAxis> FadeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> NotPlaceOnActorTags;
    
public:
    ASpherePlacement(const FObjectInitializer& ObjectInitializer);

};

