#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ContentWidget.h"
#include "Templates/SubclassOf.h"
#include "Viewport.generated.h"

class AActor;
class UWorld;

UCLASS()
class UMG_API UViewport : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UViewport();

    UFUNCTION(BlueprintCallable)
    AActor* Spawn(TSubclassOf<AActor> actorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetViewLocation(FVector Location);
    
    UFUNCTION(BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintPure)
    UWorld* GetViewportWorld() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetViewLocation() const;
    
};

