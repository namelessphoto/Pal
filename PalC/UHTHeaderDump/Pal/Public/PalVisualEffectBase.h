#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalVisualEffectID.h"
#include "PalVisualEffectDynamicParameter.h"
#include "PalVisualEffectBase.generated.h"

class AActor;
class APalCharacter;
class UMaterialInstanceDynamic;
class UPalVisualEffectBase;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UPalVisualEffectBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComplete, UPalVisualEffectBase*, VisualEffect);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEndVisualEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanDeleteInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FOnComplete OnCompleteDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalVisualEffectID> ConflictIDList;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EPalVisualEffectID VisualEffectID;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalVisualEffectDynamicParameter DynamicParameter;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsCallEndOnComponentEndPlay;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsEnableForDedicatedServer;
    
    UPalVisualEffectBase();

    UFUNCTION(BlueprintNativeEvent)
    void TickVisualEffect(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void TerminatingTickVisualEffect(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndVisualEffect();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDeleteInstance();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBreakVisualEffect(bool bByConflict);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginVisualEffect();
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsEndVisualEffect();
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetPlayerHeadMesh() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetMonsterRideNPCMesh() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainMeshMaterials() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainAndRideNPCMeshMaterials() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainAndHeadMeshMaterials() const;
    
    UFUNCTION(BlueprintPure)
    float GetFloatParameter(FName Name, float DefaultValue);
    
    UFUNCTION(BlueprintPure)
    TArray<EPalVisualEffectID> GetConflictIDList() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    void GetAllMesh(TArray<USceneComponent*>& OutComponent) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanDeleteInstance();
    
};

