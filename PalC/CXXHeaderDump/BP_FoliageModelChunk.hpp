#ifndef UE4SS_SDK_BP_FoliageModelChunk_HPP
#define UE4SS_SDK_BP_FoliageModelChunk_HPP

class ABP_FoliageModelChunk_C : public APalFoliageModelChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void OnReceivedChunkGridSize(const int32 NewChunkGridSize);
    void ExecuteUbergraph_BP_FoliageModelChunk(int32 EntryPoint);
};

#endif
