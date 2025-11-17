#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldCullingOperationType -FallbackName=EFieldCullingOperationType
#include "FieldNodeBase.h"
#include "CullingField.generated.h"

class UCullingField;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UCullingField : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UFieldNodeBase* Culling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UFieldNodeBase* Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldCullingOperationType> Operation;
    
    UCullingField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UCullingField* SetCullingField(const UFieldNodeBase* NewCulling, const UFieldNodeBase* NewField, TEnumAsByte<EFieldCullingOperationType> NewOperation);
    
};

