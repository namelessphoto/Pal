#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFilterType -FallbackName=EFieldFilterType
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldObjectType -FallbackName=EFieldObjectType
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldPositionType -FallbackName=EFieldPositionType
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataFilter.generated.h"

class UFieldSystemMetaDataFilter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataFilter : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFilterType> FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldObjectType> ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldPositionType> PositionType;
    
    UFieldSystemMetaDataFilter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType, TEnumAsByte<EFieldObjectType> NewObjectType, TEnumAsByte<EFieldPositionType> NewPositionType);
    
};

