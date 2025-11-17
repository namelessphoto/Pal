#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
#include "EPalActionType.h"
#include "EPalWorkType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorkAssignDefineData.h"
#include "PalWorkAssignHandleId.h"
#include "PalWorldSubsystem.h"
#include "PalWorkProgressManager.generated.h"

class UPalWorkAssign;
class UPalWorkBase;

UCLASS(BlueprintType, Config=Game)
class UPalWorkProgressManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorkDelegate, UPalWorkBase*, Work);
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalWorkBase*> WorkMap_InServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, FPalWorkAssignDefineData> WorkAssignDefineMap;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineData NotWorkableAssignDefine;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkAssignDefineData BuildAssignDefine;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<EObjectTypeQuery>> SearchWorkObjectObjectTypes;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWorkType, EPalActionType> WorkCompleteActionMap;
    
    UPROPERTY(VisibleInstanceOnly)
    TMap<FName, FGuid> LevelObjectWorkIdMap;
    
private:
    UPROPERTY(Transient)
    TArray<UPalWorkBase*> MoveCheckWorkList_InServer_Async;
    
    UPROPERTY(Transient)
    TArray<UPalWorkBase*> MovedWorkList_InServer_Async;
    
    UPROPERTY(Transient)
    int32 MoveCheckProcessIndex;
    
    UPROPERTY()
    int32 MoveCheckMaxNumPerFrame;
    
    UPROPERTY(Config)
    int32 WorkTickInvokeMaxNumInOneTick;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalWorkType, int32> WorkTypeAssignPriorityMap;
    
public:
    UPalWorkProgressManager();

    UFUNCTION(BlueprintPure)
    UPalWorkBase* GetWorkByAssignId(const FPalWorkAssignHandleId& WorkAssignId) const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkAssign* GetWorkAssign(const FPalWorkAssignHandleId& WorkAssignId) const;
    
    UFUNCTION(BlueprintPure)
    UPalWorkBase* GetWork(const FGuid& WorkId) const;
    

    // Fix for true pure virtual functions not being implemented
};

