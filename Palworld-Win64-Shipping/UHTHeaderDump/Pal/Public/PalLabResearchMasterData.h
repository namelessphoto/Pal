#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalLabCategorySubType.h"
#include "EPalPassiveSkillEffectTargetItemType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalWorkSuitability.h"
#include "PalLabResearchMasterData.generated.h"

class APalBuildObjectLabResearchSpace;

USTRUCT(BlueprintType)
struct PAL_API FPalLabResearchMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TextId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWorkSuitability LabCategoryWorkSuitability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalLabCategorySubType LabCategorySubType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AssignDefineId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredWorkAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ResearchSpaceBlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalBuildObjectLabResearchSpace> ResearchSpaceClassPath;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequiredResearchId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material1_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material1_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material2_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material2_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material3_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material3_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Material4_Id;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Material4_Count;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectType EffectType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWorkSuitability EffectOptionWorkSuitability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectTargetItemType EffectOptionItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName EffectDescriptionTextIdOverwrite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsEssential;
    
    FPalLabResearchMasterData();
};

