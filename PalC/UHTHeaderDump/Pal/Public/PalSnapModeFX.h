#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalSnapModeFX.generated.h"

UCLASS()
class PAL_API APalSnapModeFX : public AActor {
    GENERATED_BODY()
public:
    APalSnapModeFX(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSnap(FVector Location, FRotator Rotation, FVector BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCenterSnap(FVector Location, FRotator Rotation, FVector BoxExtent, FVector SnapStart, FVector SnapEnd, bool IsAttachWall);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
};

