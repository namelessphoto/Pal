#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalUIDisplayCharacter.generated.h"

class UPalSkeletalMeshComponent;
class USceneComponent;

UCLASS()
class PAL_API APalUIDisplayCharacter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPalSkeletalMeshComponent* PalSkeletalMeshComponent;
    
    APalUIDisplayCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GetHairBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetEyeBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetBrowBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetBodyBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterMakeInfoFromPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterMakeInfo(const FPalPlayerDataCharacterMakeInfo& MakeInfo);
    
};

