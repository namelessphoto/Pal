#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "ControlRigControlActor.generated.h"

class UControlRig;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class CONTROLRIG_API AControlRigControlActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    AActor* ActorToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bRefreshOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bIsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FString ColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bCastShadows;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* ActorRootComponent;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UControlRig> ControlRig;
    
    UPROPERTY(Transient)
    TArray<FName> ControlNames;
    
    UPROPERTY(Transient)
    TArray<FTransform> ShapeTransforms;
    
    UPROPERTY(Instanced, Transient)
    TArray<UStaticMeshComponent*> Components;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(Transient)
    FName ColorParameterName;
    
public:
    AControlRigControlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetControlActor();
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

