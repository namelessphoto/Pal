#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCharacterCreationMeshPresetDataRow.generated.h"

class UAnimInstance;
class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPalCharacterCreationMeshPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh_MaleHead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UAnimInstance> ABPAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShiftUIDisplayEyeColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShiftUIDisplayBodyColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShiftUIDisplayBrowColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShiftUIDisplayHairColor;
    
    PAL_API FPalCharacterCreationMeshPresetDataRow();
};

