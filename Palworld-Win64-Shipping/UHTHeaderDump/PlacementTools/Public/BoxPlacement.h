#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "Directions.h"
#include "PlacementToolBase.h"
#include "BoxPlacement.generated.h"

class UBoxComponent;

UCLASS()
class PLACEMENTTOOLS_API ABoxPlacement : public APlacementToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(Instanced)
    UBoxComponent* BoxBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirections FadeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> NotPlaceOnActorTags;
    
public:
    ABoxPlacement(const FObjectInitializer& ObjectInitializer);

};

