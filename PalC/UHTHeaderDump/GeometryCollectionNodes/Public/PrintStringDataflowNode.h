#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "PrintStringDataflowNode.generated.h"

USTRUCT()
struct FPrintStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool PrintToScreen;
    
    UPROPERTY(EditAnywhere)
    bool PrintToLog;
    
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FPrintStringDataflowNode();
};

