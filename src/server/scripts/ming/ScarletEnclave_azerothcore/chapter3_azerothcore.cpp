//#include "Player.h"
//#include "ScriptMgr.h"
//#include "SpellInfo.h"
//#include "SpellScript.h"
//
//class spell_q12779_an_end_to_all_things : public SpellScript
//{
//    PrepareSpellScript(spell_q12779_an_end_to_all_things);
//
//    void HandleScriptEffect(SpellEffIndex /*effIndex*/)
//    {
//        if (GetHitUnit())
//            GetHitUnit()->CastSpell(GetCaster(), GetEffectValue(), true);
//    }
//
//    void Register() override
//    {
//        OnEffectHitTarget += SpellEffectFn(spell_q12779_an_end_to_all_things::HandleScriptEffect, EFFECT_0, SPELL_EFFECT_SCRIPT_EFFECT);
//    }
//};
//
//void AddSC_the_scarlet_enclave_c3()
//{
//    RegisterSpellScript(spell_q12779_an_end_to_all_things);
//}
