#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalTribeID.h"
#include "EPalWorkType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveRegeneParameter.h"
#include "PalPassivePartnerSkillParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DelayTime;
    
    UPROPERTY(EditAnywhere)
    int32 TriggerTypeFlags;
    
    UPROPERTY(EditAnywhere)
    EPalWorkType WorkType;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_MapObjectData> MapObjectId;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_ItemData> ItemId;
    
    UPROPERTY(EditAnywhere)
    bool AssignOthers;
    
    UPROPERTY(EditAnywhere)
    EPalElementType TargetElementType;
    
    UPROPERTY(EditAnywhere)
    TArray<FPalDataTableRowName_PalMonsterData> PalIds;
    
    UPROPERTY(EditAnywhere)
    TArray<EPalTribeID> PalTribeIds;
    
    UPROPERTY(EditAnywhere)
    bool bNotAssignSelf;
    
    UPROPERTY(EditAnywhere)
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    UPROPERTY(EditAnywhere)
    FPalPassiveRegeneParameter RegeneParam;
    
    PAL_API FPalPassivePartnerSkillParameters();
};

