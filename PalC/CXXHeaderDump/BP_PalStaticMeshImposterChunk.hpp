#ifndef UE4SS_SDK_BP_PalStaticMeshImposterChunk_HPP
#define UE4SS_SDK_BP_PalStaticMeshImposterChunk_HPP

class ABP_PalStaticMeshImposterChunk_C : public APalStaticMeshImposterChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void Dev_SetChunkVisible(const bool bVisible);
    void OnSetChunkGridSize(const int32 NewChunkGridSize);
    void ExecuteUbergraph_BP_PalStaticMeshImposterChunk(int32 EntryPoint);
};

#endif
