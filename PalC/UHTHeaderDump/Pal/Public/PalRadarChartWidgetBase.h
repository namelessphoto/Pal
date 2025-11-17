#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EPalRadarChartDrawType.h"
#include "PalCustomPrimitiveWidget.h"
#include "PalRadarChartWidgetBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalRadarChartWidgetBase : public UPalCustomPrimitiveWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalRadarChartDrawType drawType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 parameterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isMinMaxValuePerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> parameterValueMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> parameterValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor fillColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor maxValuefillColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor BorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float borderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isCheckParameterMaxValue;
    
public:
    UPalRadarChartWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetParameterValue(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMinValue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxValue(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void BuildVertexData();
    
};

