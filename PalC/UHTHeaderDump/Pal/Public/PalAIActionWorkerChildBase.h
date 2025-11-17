#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAIActionBase.h"
#include "PalAIActionWorkerChildBase.generated.h"

class UPalAIActionCompositeWorker;

UCLASS(EditInlineNew)
class UPalAIActionWorkerChildBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
    UPalAIActionWorkerChildBase();

protected:
    UFUNCTION(BlueprintCallable)
    void LookToTarget(const float TurnSpeed, const float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsTargetWorkable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetAssignable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedToTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetWorkLookAtLocation() const;
    
public:
    UFUNCTION(BlueprintPure)
    UPalAIActionCompositeWorker* GetParent() const;
    
};

