#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EMakeBoxDataTypeEnum.h"
#include "MakeBoxDataflowNode.generated.h"

USTRUCT()
struct FMakeBoxDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMakeBoxDataTypeEnum DataType;
    
    UPROPERTY(EditAnywhere)
    FVector Min;
    
    UPROPERTY(EditAnywhere)
    FVector Max;
    
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FVector Size;
    
    UPROPERTY()
    FBox Box;
    
    GEOMETRYCOLLECTIONNODES_API FMakeBoxDataflowNode();
};

