#pragma once
#include "CoreMinimal.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniNodeSyncComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniNodeSyncComponent : public UHoudiniAssetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString FetchNodePath;
    
    UPROPERTY()
    bool bLiveSyncEnabled;
    
public:
    UHoudiniNodeSyncComponent(const FObjectInitializer& ObjectInitializer);

};

