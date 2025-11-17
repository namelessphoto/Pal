#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FlagContainer.h"
#include "PalUVEyeComponent.generated.h"

class UMaterialInstanceDynamic;
class UPalSkeletalMeshComponent;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalUVEyeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator EyeBoneRotatorOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EyeMaterialIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D EyeUVOffsetLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D EyeAngleLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName UVOffsetParameterName;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    USceneComponent* Target;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName TargetBoneName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMaterialInstanceDynamic* EyeMaterial;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UPalSkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsEnabled;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer UVEyeDisableFlag;
    
public:
    UPalUVEyeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUVEyeDisableFlag(FName flagName, bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationDirect(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(USceneComponent* InTarget, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeCurve(float InX, float InY);
    
    UFUNCTION(BlueprintCallable)
    void ResetEyeCurve();
    
    UFUNCTION(BlueprintPure)
    bool IsEyeMovementEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUVEyeDisableFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableEyeMovement(bool bEnable);
    
};

