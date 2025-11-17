#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraBoolParameterMetaData.h"
#include "NiagaraEnumParameterMetaData.h"
#include "NiagaraInputConditionMetadata.h"
#include "NiagaraVariableMetaData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraVariableMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(EditAnywhere)
    bool bAdvancedDisplay;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayInOverviewStack;
    
    UPROPERTY(EditAnywhere)
    int32 InlineParameterSortPriority;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor InlineParameterColorOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;
    
    UPROPERTY(EditAnywhere)
    bool bEnableBoolOverride;
    
    UPROPERTY(EditAnywhere)
    FNiagaraBoolParameterMetaData InlineParameterBoolOverride;
    
    UPROPERTY(EditAnywhere)
    int32 EditorSortPriority;
    
    UPROPERTY(EditAnywhere)
    bool bInlineEditConditionToggle;
    
    UPROPERTY(EditAnywhere)
    FNiagaraInputConditionMetadata EditCondition;
    
    UPROPERTY(EditAnywhere)
    FNiagaraInputConditionMetadata VisibleCondition;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> PropertyMetaData;
    
    UPROPERTY(EditAnywhere)
    FName ParentAttribute;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> AlternateAliases;
    
private:
    UPROPERTY()
    FGuid VariableGuid;
    
    UPROPERTY()
    bool bIsStaticSwitch;
    
    UPROPERTY()
    int32 StaticSwitchDefaultValue;
    
public:
    FNiagaraVariableMetaData();
};

