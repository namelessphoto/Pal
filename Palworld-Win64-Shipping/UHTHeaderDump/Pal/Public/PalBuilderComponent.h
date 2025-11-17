#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalMapObjectOperationResult.h"
#include "PalBuildObjectData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBuilderComponent.generated.h"

class APalBuildObject;
class APalBuildObjectInstallChecker;
class APalDismantleObjectChecker;
class UCameraComponent;
class UPalBaseCampModel;
class UPalBuilderComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalBuilderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastReturnSelfDelegate, UPalBuilderComponent*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FMulticastReturnSelfDelegate OnUpdatePossessMaterials;
    
    UPROPERTY(BlueprintAssignable)
    FMulticastReturnSelfDelegate OnStartBuildingMode_Local;
    
    UPROPERTY(BlueprintAssignable)
    FMulticastReturnSelfDelegate OnEndBuildingMode_Local;
    
    UPROPERTY(BlueprintAssignable)
    FMulticastReturnSelfDelegate OnStartDismantlingMode_Local;
    
    UPROPERTY(BlueprintAssignable)
    FMulticastReturnSelfDelegate OnEndDismantlingMode_Local;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstallDistanceNormalFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstallableRange;
    
private:
    UPROPERTY(Instanced, Transient)
    UCameraComponent* OwnerCamera;
    
    UPROPERTY(Transient)
    APalBuildObjectInstallChecker* InstallChecker;
    
    UPROPERTY(Transient)
    APalDismantleObjectChecker* DismantleChecker;
    
public:
    UPalBuilderComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnExitBaseCamp(UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION()
    void OnEnterBaseCamp(UPalBaseCampModel* BaseCampModel);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSnapMode() const;
    
private:
    UFUNCTION(BlueprintPure)
    bool IsInstallAtReticle() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsExistsMaterialForBuildObject(const FPalBuildObjectData& BuildObjectData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsExecuting() const;
    
private:
    UFUNCTION(BlueprintPure)
    bool IsEnableDismantle() const;
    
    UFUNCTION(BlueprintPure)
    EPalMapObjectOperationResult IsEnableBuild() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDismantling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChangedMode() const;
    
private:
    UFUNCTION(BlueprintPure)
    void GetSelectedBuildObjectId(FName& OutSelectedBuildObjectId) const;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetMaxBuildingLimitNum() const;
    
    UFUNCTION(BlueprintPure)
    APalBuildObject* GetDismantleTargetObject();
    
    UFUNCTION(BlueprintPure)
    int32 GetBuildingNum() const;
    
    UFUNCTION(BlueprintPure)
    void CollectItemInfoEnableToUseMaterial(TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos) const;
    
private:
    UFUNCTION(BlueprintPure)
    EPalMapObjectOperationResult CanRequestDismantle() const;
    
};

