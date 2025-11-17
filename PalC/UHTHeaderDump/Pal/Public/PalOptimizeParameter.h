#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterImportanceType.h"
#include "EPalSpwnerImportanceType.h"
#include "PalOptimizeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalOptimizeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FoliageISMDistance_Meters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetFPS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinFPS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxFPS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CharacterImportance_CheckNumberPerFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CharacterImportance_NearestCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterImportance_NearDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterImportance_FarDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterImportance_FarthestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Actor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Movement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Mesh_Update;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Mesh_Evaluation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Action;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Status;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_LookAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_VisualEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Shooter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_FlyMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_Controller;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_AIAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_AISensor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalCharacterImportanceType, float> CharacterImportance_TickInterval_PathFollowing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnerImportance_NearDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnerImportance_FarDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EPalSpwnerImportanceType, float> SpawnerImportance_TickInterval_NPCSpawner;
    
    PAL_API FPalOptimizeParameter();
};

