#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolsContext.generated.h"

class UContextObjectStore;
class UInputRouter;
class UInteractiveGizmoManager;
class UInteractiveToolManager;
class UToolTargetManager;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolsContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInputRouter* InputRouter;
    
    UPROPERTY()
    UToolTargetManager* TargetManager;
    
    UPROPERTY()
    UInteractiveToolManager* ToolManager;
    
    UPROPERTY()
    UInteractiveGizmoManager* GizmoManager;
    
    UPROPERTY()
    UContextObjectStore* ContextObjectStore;
    
protected:
    UPROPERTY()
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;
    
public:
    UInteractiveToolsContext();

};

