#pragma once
#include "CoreMinimal.h"
#include "TransformableHandle.h"
#include "TransformableComponentHandle.generated.h"

class USceneComponent;

UCLASS(BlueprintType)
class CONSTRAINTS_API UTransformableComponentHandle : public UTransformableHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintReadOnly)
    FName SocketName;
    
    UTransformableComponentHandle();

};

