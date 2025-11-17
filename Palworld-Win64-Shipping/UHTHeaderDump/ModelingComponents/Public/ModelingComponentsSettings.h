#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "ModelingComponentsSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class MODELINGCOMPONENTS_API UModelingComponentsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableRayTracingWhileEditing;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableRayTracing;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableCollision;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> CollisionMode;
    
    UModelingComponentsSettings();

};

