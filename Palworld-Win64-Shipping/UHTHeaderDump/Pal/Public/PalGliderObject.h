#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalGliderObject.generated.h"

class UAnimMontage;
class UMaterialInterface;
class UPalSkeletalMeshComponent;
class UPalSoundPlayerComponent;
class USceneComponent;

UCLASS()
class PAL_API APalGliderObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GliderMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GliderSP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GliderAirControl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GliderGravityScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator OffsetRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseLeftHand;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseRightHand;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName attachBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* GliderStartAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* GliderLoopAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* GliderStartPlayerAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* GliderLoopPlayerAnimation;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPalSoundPlayerComponent* SoundPlayerComponent;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalGliderObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void RefreshSkin(FName PalCharacterID);
    
    UFUNCTION(BlueprintNativeEvent)
    UPalSkeletalMeshComponent* GetMainMesh() const;
    
private:
    UFUNCTION()
    USceneComponent* GetAkOwnerComponent();
    
};

