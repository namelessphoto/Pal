#ifndef UE4SS_SDK_BP_PalMapObjectSpawner_SkillFruits_Sakura_HPP
#define UE4SS_SDK_BP_PalMapObjectSpawner_SkillFruits_Sakura_HPP

class ABP_PalMapObjectSpawner_SkillFruits_Sakura_C : public APalMapObjectSpawnerMultiItem
{
    class UNiagaraComponent* NS_SkillFruitsTree;
    class UStaticMeshComponent* SM_FlowerMerge;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_SkillFruitsTree;
    class UPalMapObjectSpawnerDamageReactionComponent* DamageReaction;
    class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* LocationComponent_SkillFruits2;
    class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* LocationComponent_SkillFruits1;
    class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* LocationComponent_SkillFruits;

};

#endif
