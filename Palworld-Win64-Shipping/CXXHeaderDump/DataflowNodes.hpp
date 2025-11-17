#ifndef UE4SS_SDK_DataflowNodes_HPP
#define UE4SS_SDK_DataflowNodes_HPP

struct FGetSkeletalMeshDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;
    FName PropertyName;

};

struct FGetStaticMeshDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;
    FName PropertyName;

};

struct FSkeletalMeshBoneDataflowNode : public FDataflowNode
{
    FName BoneName;
    class USkeletalMesh* SkeletalMesh;
    int32 BoneIndexOut;

};

#endif
