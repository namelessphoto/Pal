#ifndef UE4SS_SDK_BP_PalRandomIncidentSpawner_HPP
#define UE4SS_SDK_BP_PalRandomIncidentSpawner_HPP

class ABP_PalRandomIncidentSpawner_C : public APalRandomIncidentSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USphereComponent* EndCollision;
    class USphereComponent* ActionCollision;
    class USphereComponent* ExclusionCollision;
    class USphereComponent* SpawnCollision;
    class USceneComponent* DefaultSceneRoot;
    class UBP_PalIncidentNotifyListener_C* IncidentNotifyListener;
    TMap<class FName, class FF_NPC_PathWalkArray> WalkPathList;
    bool DisplayDebugArea;

    void CreateDebugShape(double Delta);
    void DestroyCollisionComponents();
    void SetAreaRadiuses();
    void AddWalkPath(const FName& PathName, const TArray<class AActor*>& PointList);
    void Create Walk Path(TArray<class AActor*>& PointArray, FF_NPC_PathWalkArray& PathArray);
    void Collect Walk Path Point(class USceneComponent* SceneRoot, TArray<class AActor*>& Actors);
    void EditorSetup_WalkPointRef();
    void ReleaseIncident();
    void SetupIncident(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* Parameter);
    void OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter);
    void OnIncidentNotify(class UPalIncidentNotifyListener* Listener, EPalIncidentState IncidentState, const FPalIncidentNotifyParameter& Parameter);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalRandomIncidentSpawner(int32 EntryPoint);
};

#endif
