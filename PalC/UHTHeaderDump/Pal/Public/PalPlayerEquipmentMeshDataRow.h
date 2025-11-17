#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalPlayerBodyShape.h"
#include "PalPlayerEquipmentMeshDataRow.generated.h"

class UAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPalPlayerEquipmentMeshDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, TSoftObjectPtr<USkeletalMesh>> SkeletalMeshMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, TSoftClassPtr<UAnimInstance>> ABPAssetMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsHairAttachAccessory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FName> HairAttachSocketNameMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCustomDepthPass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalPlayerBodyShape BodyShape;
    
    PAL_API FPalPlayerEquipmentMeshDataRow();
};

