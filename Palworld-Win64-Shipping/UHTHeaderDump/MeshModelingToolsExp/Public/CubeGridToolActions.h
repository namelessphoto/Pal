#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "CubeGridToolActions.generated.h"

class AActor;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UCubeGridToolActions : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* GridSourceActor;
    
    UCubeGridToolActions();

    UFUNCTION()
    void SlideForward();
    
    UFUNCTION()
    void SlideBack();
    
    UFUNCTION()
    void ResetGridFromActor();
    
    UFUNCTION()
    void Push();
    
    UFUNCTION()
    void Pull();
    
    UFUNCTION()
    void Flip();
    
    UFUNCTION()
    void CornerMode();
    
};

