#pragma once
#include "CoreMinimal.h"
#include "AnimNode_MirrorBase.h"
#include "AnimNode_Mirror_Standalone.generated.h"

class UMirrorDataTable;

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bMirror;
    
    UPROPERTY(EditAnywhere)
    UMirrorDataTable* MirrorDataTable;
    
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    bool bResetChild;
    
    UPROPERTY(EditAnywhere)
    bool bBoneMirroring;
    
    UPROPERTY(EditAnywhere)
    bool bCurveMirroring;
    
    UPROPERTY(EditAnywhere)
    bool bAttributeMirroring;
    
public:
    FAnimNode_Mirror_Standalone();
};

