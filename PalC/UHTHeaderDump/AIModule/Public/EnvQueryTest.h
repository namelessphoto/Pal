#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderBoolValue.h"
#include "AIDataProviderFloatValue.h"
#include "EEQSNormalizationType.h"
#include "EEnvQueryTestClamping.h"
#include "EEnvTestFilterOperator.h"
#include "EEnvTestFilterType.h"
#include "EEnvTestPurpose.h"
#include "EEnvTestScoreEquation.h"
#include "EEnvTestScoreOperator.h"
#include "EnvQueryNode.h"
#include "EnvQueryTest.generated.h"

UCLASS(Abstract)
class AIMODULE_API UEnvQueryTest : public UEnvQueryNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TestOrder;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestPurpose> TestPurpose;
    
    UPROPERTY(EditDefaultsOnly)
    FString TestComment;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<EEnvTestFilterOperator> MultipleContextFilterOp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TEnumAsByte<EEnvTestScoreOperator> MultipleContextScoreOp;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestFilterType> FilterType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue BoolValue;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloatValueMin;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloatValueMax;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestScoreEquation> ScoringEquation;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryTestClamping> ClampMinType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryTestClamping> ClampMaxType;
    
    UPROPERTY(EditDefaultsOnly)
    EEQSNormalizationType NormalizationType;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ScoreClampMin;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ScoreClampMax;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ScoringFactor;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue ReferenceValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDefineReferenceValue;
    
private:
    UPROPERTY()
    uint8 bWorkOnFloatValues: 1;
    
public:
    UEnvQueryTest();

};

