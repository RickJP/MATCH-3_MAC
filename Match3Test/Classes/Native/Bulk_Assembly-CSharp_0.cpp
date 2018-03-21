#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Board
struct Board_t3688305287;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// ParticleManager
struct ParticleManager_t4052332083;
// UnityEngine.Component
struct Component_t1923634451;
// BoardDeadlock
struct BoardDeadlock_t1667041069;
// BoardShuffler
struct BoardShuffler_t56952400;
// Tile
struct Tile_t2634157908;
// GamePiece
struct GamePiece_t2515063641;
// System.Collections.Generic.List`1<GamePiece>
struct List_1_t3987138383;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Object
struct Object_t631007953;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Transform
struct Transform_t3600365921;
// Bomb
struct Bomb_t3788669921;
// Board/StartingObject
struct StartingObject_t2785957559;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Collections.Generic.Queue`1<GamePiece>
struct Queue_1_t2361323135;
// System.Collections.Generic.IEnumerable`1<GamePiece>
struct IEnumerable_1_t1494916530;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// Board/<SwitchTilesRoutine>c__Iterator0
struct U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// GameManager
struct GameManager_t1536523654;
// TimeBonus
struct TimeBonus_t1511394491;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// Board/<ClearAndRefillBoardRoutine>c__Iterator1
struct U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871;
// Board/<ClearAndCollapseRoutine>c__Iterator2
struct U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387;
// Board/<RefillRoutine>c__Iterator3
struct U3CRefillRoutineU3Ec__Iterator3_t217515380;
// Collectible
struct Collectible_t2768877883;
// GamePiece[0...,0...]
struct GamePieceU5B0___U2C0___U5D_t3033866021;
// Board/<ShuffleBoardRoutine>c__Iterator4
struct U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Func`2<GamePiece,MatchValue>
struct Func_2_t3228517195;
// System.Func`2<System.Object,MatchValue>
struct Func_2_t3038590500;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<MatchValue,GamePiece>>
struct IEnumerable_1_t925746392;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<MatchValue,System.Object>>
struct IEnumerable_1_t1490788915;
// BoardDeadlock/<HasMoveAt>c__AnonStorey0
struct U3CHasMoveAtU3Ec__AnonStorey0_t2576215649;
// System.Predicate`1<GamePiece>
struct Predicate_1_t3340357765;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// CollectionGoal
struct CollectionGoal_t2812378701;
// UnityEngine.Sprite
struct Sprite_t280657092;
// FinishedGameMessageWindow
struct FinishedGameMessageWindow_t436455232;
// UnityEngine.UI.Image
struct Image_t2670269651;
// Singleton`1<GameManager>
struct Singleton_1_t2713370399;
// Singleton`1<System.Object>
struct Singleton_1_t4256952909;
// LevelGoalTimed
struct LevelGoalTimed_t3825364430;
// LevelGoal
struct LevelGoal_t786700456;
// ScoreMeter
struct ScoreMeter_t2365063754;
// UnityEngine.UI.Text
struct Text_t1901882714;
// GameManager/<ExecuteGameLoop>c__Iterator0
struct U3CExecuteGameLoopU3Ec__Iterator0_t2406473199;
// GameManager/<StartGameRoutine>c__Iterator1
struct U3CStartGameRoutineU3Ec__Iterator1_t4159889866;
// GameManager/<PlayGameRoutine>c__Iterator2
struct U3CPlayGameRoutineU3Ec__Iterator2_t2151299077;
// GameManager/<WaitForBoardRoutine>c__Iterator3
struct U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383;
// GameManager/<EndGameRoutine>c__Iterator4
struct U3CEndGameRoutineU3Ec__Iterator4_t4094244610;
// ScoreManager
struct ScoreManager_t3621325103;
// SoundManager
struct SoundManager_t2102329059;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// RectXFormMover
struct RectXFormMover_t3830425495;
// MessageWindow
struct MessageWindow_t4170584992;
// ScreenFader
struct ScreenFader_t840564778;
// Timer
struct Timer_t4185932343;
// GamePiece/<MoveRoutine>c__Iterator0
struct U3CMoveRoutineU3Ec__Iterator0_t3429612721;
// Singleton`1<LevelGoal>
struct Singleton_1_t1963547201;
// LevelGoalCollected
struct LevelGoalCollected_t1758280699;
// LevelGoalScored
struct LevelGoalScored_t1233295862;
// LevelGoalTimed/<CountDownRoutine>c__Iterator0
struct U3CCountDownRoutineU3Ec__Iterator0_t1611850947;
// ParticlePlayer
struct ParticlePlayer_t339043229;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t3089334924;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// RectXFormMover/<MoveRoutine>c__Iterator0
struct U3CMoveRoutineU3Ec__Iterator0_t2853335681;
// Singleton`1<ScoreManager>
struct Singleton_1_t503204552;
// ScoreManager/<CountScoreRoutine>c__Iterator0
struct U3CCountScoreRoutineU3Ec__Iterator0_t796815392;
// ScoreStar
struct ScoreStar_t1530904714;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// ScoreStar/<ActivateRoutine>c__Iterator0
struct U3CActivateRoutineU3Ec__Iterator0_t3188531504;
// ScoreStar/<TestRoutine>c__Iterator1
struct U3CTestRoutineU3Ec__Iterator1_t3179073790;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3839221559;
// ScreenFader/<FadeRoutine>c__Iterator0
struct U3CFadeRoutineU3Ec__Iterator0_t3686739037;
// Singleton`1<SoundManager>
struct Singleton_1_t3279175804;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// Tile/<BreakTileRoutine>c__Iterator0
struct U3CBreakTileRoutineU3Ec__Iterator0_t2156931628;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t2065813411;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Material
struct Material_t340375123;
// Timer/<FlashRoutine>c__Iterator0
struct U3CFlashRoutineU3Ec__Iterator0_t808325431;
// ScreenFader[]
struct ScreenFaderU5BU5D_t291289071;
// GamePiece[]
struct GamePieceU5BU5D_t3033866020;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// Tile[0...,0...]
struct TileU5B0___U2C0___U5D_t3330163934;
// Board/StartingObject[]
struct StartingObjectU5BU5D_t3554278542;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// ScoreStar[]
struct ScoreStarU5BU5D_t2250574351;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* TileU5B0___U2C0___U5D_t3330163934_il2cpp_TypeInfo_var;
extern RuntimeClass* GamePieceU5B0___U2C0___U5D_t3033866021_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisParticleManager_t4052332083_m2295773181_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoardDeadlock_t1667041069_m2299218111_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoardShuffler_t56952400_m3115292106_RuntimeMethod_var;
extern String_t* _stringLiteral3047507689;
extern const uint32_t Board_Start_m2081441992_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2409895218_RuntimeMethod_var;
extern const uint32_t Board_SetupBoard_m1019592939_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTile_t2634157908_m2952978531_RuntimeMethod_var;
extern String_t* _stringLiteral450651776;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614535;
extern const uint32_t Board_MakeTile_m1531152762_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var;
extern const uint32_t Board_MakeGamePiece_m541058416_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisBomb_t3788669921_m1557393500_RuntimeMethod_var;
extern const uint32_t Board_MakeBomb_m433889367_MetadataUsageId;
extern const uint32_t Board_SetupTiles_m3422426117_MetadataUsageId;
extern const uint32_t Board_SetupGamePieces_m1170738174_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral990639185;
extern String_t* _stringLiteral2713653176;
extern const uint32_t Board_GetRandomObject_m1852001915_MetadataUsageId;
extern String_t* _stringLiteral218241762;
extern const uint32_t Board_PlaceGamePiece_m976255011_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t Board_FillRandomGamePieceAt_m2210676435_MetadataUsageId;
extern const uint32_t Board_FillRandomCollectibleAt_m1108202506_MetadataUsageId;
extern RuntimeClass* Queue_1_t2361323135_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m2804821561_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m1265396441_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m1646656314_RuntimeMethod_var;
extern const uint32_t Board_FillBoardFromList_m2380270472_MetadataUsageId;
extern String_t* _stringLiteral1492276719;
extern const uint32_t Board_FillBoard_m4135356354_MetadataUsageId;
extern RuntimeClass* List_1_t3987138383_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1371417690_RuntimeMethod_var;
extern const uint32_t Board_HasMatchOnFill_m2754632473_MetadataUsageId;
extern const uint32_t Board_ClickTile_m1521009140_MetadataUsageId;
extern const uint32_t Board_DragToTile_m2909868625_MetadataUsageId;
extern const uint32_t Board_ReleaseTile_m2927120086_MetadataUsageId;
extern RuntimeClass* U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579_il2cpp_TypeInfo_var;
extern const uint32_t Board_SwitchTilesRoutine_m1110949943_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Board_IsNextTo_m3991491634_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m2660902508_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m4165534979_RuntimeMethod_var;
extern const uint32_t Board_FindMatches_m2154912501_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var;
extern const uint32_t Board_FindVerticalMatches_m3863594397_MetadataUsageId;
extern const uint32_t Board_FindHorizontalMatches_m3039601801_MetadataUsageId;
extern const uint32_t Board_FindMatchesAt_m2762353033_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1773421007_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3778693135_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3882589515_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m162058403_RuntimeMethod_var;
extern const uint32_t Board_FindMatchesAt_m305391169_MetadataUsageId;
extern const uint32_t Board_FindAllMatches_m2302013884_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t Board_HighlightTileOff_m4257695520_MetadataUsageId;
extern const uint32_t Board_HighlightTileOn_m418029858_MetadataUsageId;
extern const uint32_t Board_HighlightMatchesAt_m914917651_MetadataUsageId;
extern const uint32_t Board_HighlightPieces_m3168730545_MetadataUsageId;
extern const uint32_t Board_ClearPieceAt_m1883174847_MetadataUsageId;
extern const uint32_t Board_ClearBoard_m1714545786_MetadataUsageId;
extern const RuntimeMethod* Singleton_1_get_Instance_m1826857602_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTimeBonus_t1511394491_m140418344_RuntimeMethod_var;
extern String_t* _stringLiteral3278628834;
extern String_t* _stringLiteral2606445996;
extern const uint32_t Board_ClearPieceAt_m828649804_MetadataUsageId;
extern const uint32_t Board_BreakTileAt_m3903482239_MetadataUsageId;
extern const uint32_t Board_BreakTileAt_m3419637014_MetadataUsageId;
extern const uint32_t Board_CollapseColumn_m288295586_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m593114157_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m207670954_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3181700225_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m222348240_RuntimeMethod_var;
extern const uint32_t Board_CollapseColumn_m2464865477_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2263725670_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const uint32_t Board_GetColumns_m4057264076_MetadataUsageId;
extern RuntimeClass* U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871_il2cpp_TypeInfo_var;
extern const uint32_t Board_ClearAndRefillBoardRoutine_m1498106826_MetadataUsageId;
extern RuntimeClass* U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387_il2cpp_TypeInfo_var;
extern const uint32_t Board_ClearAndCollapseRoutine_m798933950_MetadataUsageId;
extern RuntimeClass* U3CRefillRoutineU3Ec__Iterator3_t217515380_il2cpp_TypeInfo_var;
extern const uint32_t Board_RefillRoutine_m1488639427_MetadataUsageId;
extern const uint32_t Board_IsCollapsed_m3450711880_MetadataUsageId;
extern const uint32_t Board_GetRowPieces_m880279812_MetadataUsageId;
extern const uint32_t Board_GetColumnPieces_m3981118180_MetadataUsageId;
extern const uint32_t Board_GetAdjacentPieces_m1903585789_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBomb_t3788669921_m15523362_RuntimeMethod_var;
extern const uint32_t Board_GetBombedPieces_m2387319224_MetadataUsageId;
extern const uint32_t Board_IsCornerMatch_m4225474114_MetadataUsageId;
extern const uint32_t Board_DropBomb_m4209785306_MetadataUsageId;
extern const uint32_t Board_ActivateBomb_m98435486_MetadataUsageId;
extern const uint32_t Board_FindAllMatchValue_m3520378586_MetadataUsageId;
extern const uint32_t Board_IsColorBomb_m3202758182_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCollectible_t2768877883_m916769468_RuntimeMethod_var;
extern const uint32_t Board_FindCollectiblesAt_m3054997612_MetadataUsageId;
extern const uint32_t Board_FindAllCollectibles_m1120343210_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Except_TisGamePiece_t2515063641_m1956769829_RuntimeMethod_var;
extern const uint32_t Board_RemoveCollectibles_m1284833940_MetadataUsageId;
extern const uint32_t Board_FindMatchValue_m1911026667_MetadataUsageId;
extern const uint32_t Board_FindGamePieceByMatchValue_m2636574511_MetadataUsageId;
extern RuntimeClass* U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714_il2cpp_TypeInfo_var;
extern const uint32_t Board_ShuffleBoardRoutine_m1798833413_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Intersect_TisGamePiece_t2515063641_m3480136198_RuntimeMethod_var;
extern const uint32_t U3CClearAndCollapseRoutineU3Ec__Iterator2_MoveNext_m2440499875_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CClearAndCollapseRoutineU3Ec__Iterator2_Reset_m2604774453_MetadataUsageId;
extern const uint32_t U3CClearAndRefillBoardRoutineU3Ec__Iterator1_MoveNext_m3830365732_MetadataUsageId;
extern const uint32_t U3CClearAndRefillBoardRoutineU3Ec__Iterator1_Reset_m492302731_MetadataUsageId;
extern const uint32_t U3CRefillRoutineU3Ec__Iterator3_Reset_m1035623542_MetadataUsageId;
extern const uint32_t U3CShuffleBoardRoutineU3Ec__Iterator4_MoveNext_m4148582962_MetadataUsageId;
extern const uint32_t U3CShuffleBoardRoutineU3Ec__Iterator4_Reset_m3146110799_MetadataUsageId;
extern const uint32_t U3CSwitchTilesRoutineU3Ec__Iterator0_MoveNext_m3319531132_MetadataUsageId;
extern const uint32_t U3CSwitchTilesRoutineU3Ec__Iterator0_Reset_m990462176_MetadataUsageId;
extern const uint32_t BoardDeadlock_GetRowColumnList_m1116894549_MetadataUsageId;
extern RuntimeClass* BoardDeadlock_t1667041069_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3228517195_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t925746392_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2378463971_il2cpp_TypeInfo_var;
extern RuntimeClass* IGrouping_2_t1945893503_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* BoardDeadlock_U3CGetMinimumMatchesU3Em__0_m2871735036_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1301189790_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_GroupBy_TisGamePiece_t2515063641_TisMatchValue_t3671566290_m350021335_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisGamePiece_t2515063641_m3216069146_RuntimeMethod_var;
extern const uint32_t BoardDeadlock_GetMinimumMatches_m6474523_MetadataUsageId;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern const uint32_t BoardDeadlock_GetNeighbors_m3964018393_MetadataUsageId;
extern RuntimeClass* U3CHasMoveAtU3Ec__AnonStorey0_t2576215649_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t3340357765_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisGamePiece_t2515063641_m1166263980_RuntimeMethod_var;
extern const RuntimeMethod* U3CHasMoveAtU3Ec__AnonStorey0_U3CU3Em__0_m1200335706_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m106490625_RuntimeMethod_var;
extern const RuntimeMethod* List_1_FindAll_m573018364_RuntimeMethod_var;
extern const uint32_t BoardDeadlock_HasMoveAt_m384078838_MetadataUsageId;
extern String_t* _stringLiteral3135907937;
extern const uint32_t BoardDeadlock_IsDeadlocked_m1749050910_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m77600249_RuntimeMethod_var;
extern const uint32_t U3CHasMoveAtU3Ec__AnonStorey0_U3CU3Em__0_m1200335706_MetadataUsageId;
extern const uint32_t BoardShuffler_RemoveNormalPieces_m3486924482_MetadataUsageId;
extern const RuntimeMethod* List_1_set_Item_m2419564865_RuntimeMethod_var;
extern const uint32_t BoardShuffler_ShuffleList_m2531927563_MetadataUsageId;
extern const uint32_t BoardShuffler_MovePieces_m4260695126_MetadataUsageId;
extern const uint32_t CollectionGoal_Start_m830216171_MetadataUsageId;
extern const uint32_t CollectionGoal_CollectPiece_m3234486425_MetadataUsageId;
extern const uint32_t FinishedGameMessageWindow_ShowMessage_m671491908_MetadataUsageId;
extern const RuntimeMethod* Singleton_1__ctor_m671125834_RuntimeMethod_var;
extern const uint32_t GameManager__ctor_m180891015_MetadataUsageId;
extern const RuntimeMethod* Singleton_1_Awake_m2904899739_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisLevelGoal_t786700456_m4187797462_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisLevelGoalTimed_t3825364430_m1931629761_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisBoard_t3688305287_m1871462073_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoard_t3688305287_m1597239221_RuntimeMethod_var;
extern const uint32_t GameManager_Awake_m2466247815_MetadataUsageId;
extern const uint32_t GameManager_Start_m2734446095_MetadataUsageId;
extern String_t* _stringLiteral3452606898;
extern const uint32_t GameManager_UpdateMoves_m2091666798_MetadataUsageId;
extern RuntimeClass* U3CExecuteGameLoopU3Ec__Iterator0_t2406473199_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_ExecuteGameLoop_m3680256769_MetadataUsageId;
extern RuntimeClass* U3CStartGameRoutineU3Ec__Iterator1_t4159889866_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_StartGameRoutine_m2945521251_MetadataUsageId;
extern RuntimeClass* U3CPlayGameRoutineU3Ec__Iterator2_t2151299077_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_PlayGameRoutine_m2950207403_MetadataUsageId;
extern RuntimeClass* U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_WaitForBoardRoutine_m902490950_MetadataUsageId;
extern RuntimeClass* U3CEndGameRoutineU3Ec__Iterator4_t4094244610_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_EndGameRoutine_m2161379414_MetadataUsageId;
extern const RuntimeMethod* Singleton_1_get_Instance_m1225640580_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m3757570477_RuntimeMethod_var;
extern const uint32_t GameManager_ScorePoints_m1504656847_MetadataUsageId;
extern const uint32_t GameManager_AddTime_m868571206_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199_RuntimeMethod_var;
extern String_t* _stringLiteral3147613217;
extern String_t* _stringLiteral3457136609;
extern String_t* _stringLiteral3724931758;
extern String_t* _stringLiteral2169307049;
extern String_t* _stringLiteral43296185;
extern const uint32_t U3CEndGameRoutineU3Ec__Iterator4_MoveNext_m472919038_MetadataUsageId;
extern const uint32_t U3CEndGameRoutineU3Ec__Iterator4_Reset_m3176011742_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1416634442;
extern String_t* _stringLiteral1420516232;
extern String_t* _stringLiteral1020219491;
extern String_t* _stringLiteral2170358864;
extern const uint32_t U3CExecuteGameLoopU3Ec__Iterator0_MoveNext_m443753607_MetadataUsageId;
extern const uint32_t U3CExecuteGameLoopU3Ec__Iterator0_Reset_m1181204801_MetadataUsageId;
extern const uint32_t U3CPlayGameRoutineU3Ec__Iterator2_MoveNext_m3308786863_MetadataUsageId;
extern const uint32_t U3CPlayGameRoutineU3Ec__Iterator2_Reset_m1287644634_MetadataUsageId;
extern String_t* _stringLiteral1329904798;
extern String_t* _stringLiteral2707269980;
extern const uint32_t U3CStartGameRoutineU3Ec__Iterator1_MoveNext_m3444371051_MetadataUsageId;
extern const uint32_t U3CStartGameRoutineU3Ec__Iterator1_Reset_m2167390105_MetadataUsageId;
extern const uint32_t U3CWaitForBoardRoutineU3Ec__Iterator3_MoveNext_m3150632135_MetadataUsageId;
extern const uint32_t U3CWaitForBoardRoutineU3Ec__Iterator3_Reset_m766874134_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t GamePiece_Update_m1284330219_MetadataUsageId;
extern RuntimeClass* U3CMoveRoutineU3Ec__Iterator0_t3429612721_il2cpp_TypeInfo_var;
extern const uint32_t GamePiece_MoveRoutine_m2722760447_MetadataUsageId;
extern const uint32_t GamePiece_ChangeColor_m2323782627_MetadataUsageId;
extern const uint32_t U3CMoveRoutineU3Ec__Iterator0_MoveNext_m2150343102_MetadataUsageId;
extern const uint32_t U3CMoveRoutineU3Ec__Iterator0_Reset_m29717128_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Singleton_1__ctor_m799740360_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0_FieldInfo_var;
extern const uint32_t LevelGoal__ctor_m2738173615_MetadataUsageId;
extern String_t* _stringLiteral1703760606;
extern const uint32_t LevelGoal_Init_m1323533292_MetadataUsageId;
extern const uint32_t LevelGoalScored_IsWinner_m2530798907_MetadataUsageId;
extern const uint32_t LevelGoalScored_IsGameOver_m2671981916_MetadataUsageId;
extern const uint32_t LevelGoalTimed_start_m16563371_MetadataUsageId;
extern RuntimeClass* U3CCountDownRoutineU3Ec__Iterator0_t1611850947_il2cpp_TypeInfo_var;
extern const uint32_t LevelGoalTimed_CountDownRoutine_m599542716_MetadataUsageId;
extern const uint32_t LevelGoalTimed_IsWinner_m2078003671_MetadataUsageId;
extern const uint32_t LevelGoalTimed_IsGameOver_m2274330261_MetadataUsageId;
extern const uint32_t LevelGoalTimed_AddTime_m2547915689_MetadataUsageId;
extern const uint32_t U3CCountDownRoutineU3Ec__Iterator0_MoveNext_m3742334545_MetadataUsageId;
extern const uint32_t U3CCountDownRoutineU3Ec__Iterator0_Reset_m561203093_MetadataUsageId;
extern const uint32_t MessageWindow_ShowMessage_m381883926_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024_RuntimeMethod_var;
extern const uint32_t ParticleManager_ClearPieceFXAt_m644113273_MetadataUsageId;
extern const uint32_t ParticleManager_BreakTileFXAt_m1617400814_MetadataUsageId;
extern const uint32_t ParticleManager_BombFXAt_m3785780858_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m796275405_RuntimeMethod_var;
extern const uint32_t ParticlePlayer_Start_m2665624159_MetadataUsageId;
extern const uint32_t ParticlePlayer_Play_m1704575969_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const uint32_t RectXFormMover_Awake_m1486824141_MetadataUsageId;
extern RuntimeClass* U3CMoveRoutineU3Ec__Iterator0_t2853335681_il2cpp_TypeInfo_var;
extern const uint32_t RectXFormMover_MoveRoutine_m3279753072_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t U3CMoveRoutineU3Ec__Iterator0_MoveNext_m2504048908_MetadataUsageId;
extern const uint32_t U3CMoveRoutineU3Ec__Iterator0_Reset_m2625270631_MetadataUsageId;
extern const RuntimeMethod* Singleton_1__ctor_m476637395_RuntimeMethod_var;
extern const uint32_t ScoreManager__ctor_m1352454192_MetadataUsageId;
extern const uint32_t ScoreManager_UpdateScoreText_m1234541438_MetadataUsageId;
extern RuntimeClass* U3CCountScoreRoutineU3Ec__Iterator0_t796815392_il2cpp_TypeInfo_var;
extern const uint32_t ScoreManager_CountScoreRoutine_m2953619159_MetadataUsageId;
extern const uint32_t U3CCountScoreRoutineU3Ec__Iterator0_Reset_m886833585_MetadataUsageId;
extern RuntimeClass* ScoreStarU5BU5D_t2250574351_il2cpp_TypeInfo_var;
extern const uint32_t ScoreMeter__ctor_m2221649792_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSlider_t3903728902_m2161493141_RuntimeMethod_var;
extern const uint32_t ScoreMeter_Awake_m3871264745_MetadataUsageId;
extern String_t* _stringLiteral2260155623;
extern const uint32_t ScoreMeter_SetupStars_m1460901484_MetadataUsageId;
extern const uint32_t ScoreMeter_UpdateScoreMeter_m3696812769_MetadataUsageId;
extern const uint32_t ScoreStar_SetActive_m4188645778_MetadataUsageId;
extern RuntimeClass* U3CActivateRoutineU3Ec__Iterator0_t3188531504_il2cpp_TypeInfo_var;
extern const uint32_t ScoreStar_ActivateRoutine_m3514958748_MetadataUsageId;
extern RuntimeClass* U3CTestRoutineU3Ec__Iterator1_t3179073790_il2cpp_TypeInfo_var;
extern const uint32_t ScoreStar_TestRoutine_m1045298798_MetadataUsageId;
extern const uint32_t U3CActivateRoutineU3Ec__Iterator0_MoveNext_m3305822105_MetadataUsageId;
extern const uint32_t U3CActivateRoutineU3Ec__Iterator0_Reset_m2734288627_MetadataUsageId;
extern const uint32_t U3CTestRoutineU3Ec__Iterator1_MoveNext_m2966838035_MetadataUsageId;
extern const uint32_t U3CTestRoutineU3Ec__Iterator1_Reset_m1916017142_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343_RuntimeMethod_var;
extern const uint32_t ScreenFader_Start_m3491382492_MetadataUsageId;
extern RuntimeClass* U3CFadeRoutineU3Ec__Iterator0_t3686739037_il2cpp_TypeInfo_var;
extern const uint32_t ScreenFader_FadeRoutine_m2641814482_MetadataUsageId;
extern const uint32_t U3CFadeRoutineU3Ec__Iterator0_MoveNext_m3382141493_MetadataUsageId;
extern const uint32_t U3CFadeRoutineU3Ec__Iterator0_Reset_m1192370228_MetadataUsageId;
extern const RuntimeMethod* Singleton_1__ctor_m1284254857_RuntimeMethod_var;
extern const uint32_t SoundManager__ctor_m1311707663_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var;
extern String_t* _stringLiteral574698398;
extern const uint32_t SoundManager_PlayClipAtPoint_m1045118740_MetadataUsageId;
extern const uint32_t SoundManager_PlayRandom_m2395206716_MetadataUsageId;
extern const uint32_t SoundManager_PlayMusic_m3316504667_MetadataUsageId;
extern const uint32_t SoundManager_PlayWinSound_m2177567815_MetadataUsageId;
extern const uint32_t SoundManager_PlayLoseSound_m3382266869_MetadataUsageId;
extern const uint32_t SoundManager_PlayBonusSound_m614453595_MetadataUsageId;
extern const uint32_t Tile_Awake_m4045536830_MetadataUsageId;
extern const uint32_t Tile_Init_m600517075_MetadataUsageId;
extern const uint32_t Tile_OnMouseDown_m10387067_MetadataUsageId;
extern const uint32_t Tile_OnMouseEnter_m114354976_MetadataUsageId;
extern const uint32_t Tile_OnMouseUp_m1061959776_MetadataUsageId;
extern RuntimeClass* U3CBreakTileRoutineU3Ec__Iterator0_t2156931628_il2cpp_TypeInfo_var;
extern const uint32_t Tile_BreakTileRoutine_m4187600944_MetadataUsageId;
extern const uint32_t U3CBreakTileRoutineU3Ec__Iterator0_MoveNext_m2823459467_MetadataUsageId;
extern const uint32_t U3CBreakTileRoutineU3Ec__Iterator0_Reset_m3209178042_MetadataUsageId;
extern const uint32_t TimeBonus_Start_m3288207402_MetadataUsageId;
extern const uint32_t TimeBonus_SetActive_m2925298885_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisParticleSystemRenderer_t2065813411_m4196326112_RuntimeMethod_var;
extern const uint32_t TimeBonus_SetupMaterial_m1094608083_MetadataUsageId;
extern const uint32_t Timer_InitTimer_m536240261_MetadataUsageId;
extern const uint32_t Timer_UpdateTimer_m3105605545_MetadataUsageId;
extern RuntimeClass* U3CFlashRoutineU3Ec__Iterator0_t808325431_il2cpp_TypeInfo_var;
extern const uint32_t Timer_FlashRoutine_m1870750396_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisScreenFader_t840564778_m2539201835_RuntimeMethod_var;
extern const uint32_t Timer_FadeOff_m2085329431_MetadataUsageId;
extern const uint32_t U3CFlashRoutineU3Ec__Iterator0_MoveNext_m1015291647_MetadataUsageId;
extern const uint32_t U3CFlashRoutineU3Ec__Iterator0_Reset_m3905301688_MetadataUsageId;

struct TileU5B0___U2C0___U5D_t3330163934;
struct GamePieceU5B0___U2C0___U5D_t3033866021;
struct ObjectU5BU5D_t2843939325;
struct StartingObjectU5BU5D_t3554278542;
struct GameObjectU5BU5D_t3328599146;
struct Vector2U5BU5D_t1457185986;
struct Int32U5BU5D_t385246372;
struct ParticleSystemU5BU5D_t3089334924;
struct ScoreStarU5BU5D_t2250574351;
struct AudioClipU5BU5D_t143221404;
struct SpriteU5BU5D_t2581906349;
struct MaterialU5BU5D_t561872642;
struct ScreenFaderU5BU5D_t291289071;


#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef U3CEXECUTEGAMELOOPU3EC__ITERATOR0_T2406473199_H
#define U3CEXECUTEGAMELOOPU3EC__ITERATOR0_T2406473199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<ExecuteGameLoop>c__Iterator0
struct  U3CExecuteGameLoopU3Ec__Iterator0_t2406473199  : public RuntimeObject
{
public:
	// GameManager GameManager/<ExecuteGameLoop>c__Iterator0::$this
	GameManager_t1536523654 * ___U24this_0;
	// System.Object GameManager/<ExecuteGameLoop>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GameManager/<ExecuteGameLoop>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 GameManager/<ExecuteGameLoop>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CExecuteGameLoopU3Ec__Iterator0_t2406473199, ___U24this_0)); }
	inline GameManager_t1536523654 * get_U24this_0() const { return ___U24this_0; }
	inline GameManager_t1536523654 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GameManager_t1536523654 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CExecuteGameLoopU3Ec__Iterator0_t2406473199, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CExecuteGameLoopU3Ec__Iterator0_t2406473199, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CExecuteGameLoopU3Ec__Iterator0_t2406473199, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEXECUTEGAMELOOPU3EC__ITERATOR0_T2406473199_H
#ifndef U3CSTARTGAMEROUTINEU3EC__ITERATOR1_T4159889866_H
#define U3CSTARTGAMEROUTINEU3EC__ITERATOR1_T4159889866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<StartGameRoutine>c__Iterator1
struct  U3CStartGameRoutineU3Ec__Iterator1_t4159889866  : public RuntimeObject
{
public:
	// GameManager GameManager/<StartGameRoutine>c__Iterator1::$this
	GameManager_t1536523654 * ___U24this_0;
	// System.Object GameManager/<StartGameRoutine>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GameManager/<StartGameRoutine>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 GameManager/<StartGameRoutine>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartGameRoutineU3Ec__Iterator1_t4159889866, ___U24this_0)); }
	inline GameManager_t1536523654 * get_U24this_0() const { return ___U24this_0; }
	inline GameManager_t1536523654 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GameManager_t1536523654 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartGameRoutineU3Ec__Iterator1_t4159889866, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartGameRoutineU3Ec__Iterator1_t4159889866, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartGameRoutineU3Ec__Iterator1_t4159889866, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTGAMEROUTINEU3EC__ITERATOR1_T4159889866_H
#ifndef U3CPLAYGAMEROUTINEU3EC__ITERATOR2_T2151299077_H
#define U3CPLAYGAMEROUTINEU3EC__ITERATOR2_T2151299077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<PlayGameRoutine>c__Iterator2
struct  U3CPlayGameRoutineU3Ec__Iterator2_t2151299077  : public RuntimeObject
{
public:
	// GameManager GameManager/<PlayGameRoutine>c__Iterator2::$this
	GameManager_t1536523654 * ___U24this_0;
	// System.Object GameManager/<PlayGameRoutine>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GameManager/<PlayGameRoutine>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 GameManager/<PlayGameRoutine>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CPlayGameRoutineU3Ec__Iterator2_t2151299077, ___U24this_0)); }
	inline GameManager_t1536523654 * get_U24this_0() const { return ___U24this_0; }
	inline GameManager_t1536523654 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GameManager_t1536523654 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CPlayGameRoutineU3Ec__Iterator2_t2151299077, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CPlayGameRoutineU3Ec__Iterator2_t2151299077, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CPlayGameRoutineU3Ec__Iterator2_t2151299077, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYGAMEROUTINEU3EC__ITERATOR2_T2151299077_H
#ifndef U3CWAITFORBOARDROUTINEU3EC__ITERATOR3_T1359855383_H
#define U3CWAITFORBOARDROUTINEU3EC__ITERATOR3_T1359855383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<WaitForBoardRoutine>c__Iterator3
struct  U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383  : public RuntimeObject
{
public:
	// System.Single GameManager/<WaitForBoardRoutine>c__Iterator3::delay
	float ___delay_0;
	// GameManager GameManager/<WaitForBoardRoutine>c__Iterator3::$this
	GameManager_t1536523654 * ___U24this_1;
	// System.Object GameManager/<WaitForBoardRoutine>c__Iterator3::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean GameManager/<WaitForBoardRoutine>c__Iterator3::$disposing
	bool ___U24disposing_3;
	// System.Int32 GameManager/<WaitForBoardRoutine>c__Iterator3::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383, ___U24this_1)); }
	inline GameManager_t1536523654 * get_U24this_1() const { return ___U24this_1; }
	inline GameManager_t1536523654 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GameManager_t1536523654 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORBOARDROUTINEU3EC__ITERATOR3_T1359855383_H
#ifndef U3CENDGAMEROUTINEU3EC__ITERATOR4_T4094244610_H
#define U3CENDGAMEROUTINEU3EC__ITERATOR4_T4094244610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<EndGameRoutine>c__Iterator4
struct  U3CEndGameRoutineU3Ec__Iterator4_t4094244610  : public RuntimeObject
{
public:
	// GameManager GameManager/<EndGameRoutine>c__Iterator4::$this
	GameManager_t1536523654 * ___U24this_0;
	// System.Object GameManager/<EndGameRoutine>c__Iterator4::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean GameManager/<EndGameRoutine>c__Iterator4::$disposing
	bool ___U24disposing_2;
	// System.Int32 GameManager/<EndGameRoutine>c__Iterator4::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CEndGameRoutineU3Ec__Iterator4_t4094244610, ___U24this_0)); }
	inline GameManager_t1536523654 * get_U24this_0() const { return ___U24this_0; }
	inline GameManager_t1536523654 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GameManager_t1536523654 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CEndGameRoutineU3Ec__Iterator4_t4094244610, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CEndGameRoutineU3Ec__Iterator4_t4094244610, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CEndGameRoutineU3Ec__Iterator4_t4094244610, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENDGAMEROUTINEU3EC__ITERATOR4_T4094244610_H
#ifndef LIST_1_T3987138383_H
#define LIST_1_T3987138383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GamePiece>
struct  List_1_t3987138383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GamePieceU5BU5D_t3033866020* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3987138383, ____items_1)); }
	inline GamePieceU5BU5D_t3033866020* get__items_1() const { return ____items_1; }
	inline GamePieceU5BU5D_t3033866020** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GamePieceU5BU5D_t3033866020* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3987138383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3987138383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3987138383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GamePieceU5BU5D_t3033866020* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3987138383_StaticFields, ___EmptyArray_4)); }
	inline GamePieceU5BU5D_t3033866020* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GamePieceU5BU5D_t3033866020** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GamePieceU5BU5D_t3033866020* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3987138383_H
#ifndef STARTINGOBJECT_T2785957559_H
#define STARTINGOBJECT_T2785957559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board/StartingObject
struct  StartingObject_t2785957559  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Board/StartingObject::prefab
	GameObject_t1113636619 * ___prefab_0;
	// System.Int32 Board/StartingObject::x
	int32_t ___x_1;
	// System.Int32 Board/StartingObject::y
	int32_t ___y_2;
	// System.Int32 Board/StartingObject::z
	int32_t ___z_3;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(StartingObject_t2785957559, ___prefab_0)); }
	inline GameObject_t1113636619 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_t1113636619 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_t1113636619 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefab_0), value);
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(StartingObject_t2785957559, ___x_1)); }
	inline int32_t get_x_1() const { return ___x_1; }
	inline int32_t* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(int32_t value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(StartingObject_t2785957559, ___y_2)); }
	inline int32_t get_y_2() const { return ___y_2; }
	inline int32_t* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(int32_t value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(StartingObject_t2785957559, ___z_3)); }
	inline int32_t get_z_3() const { return ___z_3; }
	inline int32_t* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(int32_t value)
	{
		___z_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTINGOBJECT_T2785957559_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef U3CCLEARANDREFILLBOARDROUTINEU3EC__ITERATOR1_T2545447871_H
#define U3CCLEARANDREFILLBOARDROUTINEU3EC__ITERATOR1_T2545447871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board/<ClearAndRefillBoardRoutine>c__Iterator1
struct  U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndRefillBoardRoutine>c__Iterator1::gamePieces
	List_1_t3987138383 * ___gamePieces_0;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndRefillBoardRoutine>c__Iterator1::<matches>__0
	List_1_t3987138383 * ___U3CmatchesU3E__0_1;
	// Board Board/<ClearAndRefillBoardRoutine>c__Iterator1::$this
	Board_t3688305287 * ___U24this_2;
	// System.Object Board/<ClearAndRefillBoardRoutine>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Board/<ClearAndRefillBoardRoutine>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Board/<ClearAndRefillBoardRoutine>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_gamePieces_0() { return static_cast<int32_t>(offsetof(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871, ___gamePieces_0)); }
	inline List_1_t3987138383 * get_gamePieces_0() const { return ___gamePieces_0; }
	inline List_1_t3987138383 ** get_address_of_gamePieces_0() { return &___gamePieces_0; }
	inline void set_gamePieces_0(List_1_t3987138383 * value)
	{
		___gamePieces_0 = value;
		Il2CppCodeGenWriteBarrier((&___gamePieces_0), value);
	}

	inline static int32_t get_offset_of_U3CmatchesU3E__0_1() { return static_cast<int32_t>(offsetof(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871, ___U3CmatchesU3E__0_1)); }
	inline List_1_t3987138383 * get_U3CmatchesU3E__0_1() const { return ___U3CmatchesU3E__0_1; }
	inline List_1_t3987138383 ** get_address_of_U3CmatchesU3E__0_1() { return &___U3CmatchesU3E__0_1; }
	inline void set_U3CmatchesU3E__0_1(List_1_t3987138383 * value)
	{
		___U3CmatchesU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchesU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871, ___U24this_2)); }
	inline Board_t3688305287 * get_U24this_2() const { return ___U24this_2; }
	inline Board_t3688305287 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Board_t3688305287 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCLEARANDREFILLBOARDROUTINEU3EC__ITERATOR1_T2545447871_H
#ifndef U3CCLEARANDCOLLAPSEROUTINEU3EC__ITERATOR2_T3054617387_H
#define U3CCLEARANDCOLLAPSEROUTINEU3EC__ITERATOR2_T3054617387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board/<ClearAndCollapseRoutine>c__Iterator2
struct  U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::<movingPieces>__0
	List_1_t3987138383 * ___U3CmovingPiecesU3E__0_0;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::<matches>__0
	List_1_t3987138383 * ___U3CmatchesU3E__0_1;
	// System.Boolean Board/<ClearAndCollapseRoutine>c__Iterator2::<isFinished>__0
	bool ___U3CisFinishedU3E__0_2;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::gamePieces
	List_1_t3987138383 * ___gamePieces_3;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::<bombedPieces>__1
	List_1_t3987138383 * ___U3CbombedPiecesU3E__1_4;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::<collectedPieces>__1
	List_1_t3987138383 * ___U3CcollectedPiecesU3E__1_5;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::<allCollectibles>__1
	List_1_t3987138383 * ___U3CallCollectiblesU3E__1_6;
	// System.Collections.Generic.List`1<GamePiece> Board/<ClearAndCollapseRoutine>c__Iterator2::<blockers>__1
	List_1_t3987138383 * ___U3CblockersU3E__1_7;
	// System.Collections.Generic.List`1<System.Int32> Board/<ClearAndCollapseRoutine>c__Iterator2::<columnsToCollapse>__1
	List_1_t128053199 * ___U3CcolumnsToCollapseU3E__1_8;
	// Board Board/<ClearAndCollapseRoutine>c__Iterator2::$this
	Board_t3688305287 * ___U24this_9;
	// System.Object Board/<ClearAndCollapseRoutine>c__Iterator2::$current
	RuntimeObject * ___U24current_10;
	// System.Boolean Board/<ClearAndCollapseRoutine>c__Iterator2::$disposing
	bool ___U24disposing_11;
	// System.Int32 Board/<ClearAndCollapseRoutine>c__Iterator2::$PC
	int32_t ___U24PC_12;

public:
	inline static int32_t get_offset_of_U3CmovingPiecesU3E__0_0() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CmovingPiecesU3E__0_0)); }
	inline List_1_t3987138383 * get_U3CmovingPiecesU3E__0_0() const { return ___U3CmovingPiecesU3E__0_0; }
	inline List_1_t3987138383 ** get_address_of_U3CmovingPiecesU3E__0_0() { return &___U3CmovingPiecesU3E__0_0; }
	inline void set_U3CmovingPiecesU3E__0_0(List_1_t3987138383 * value)
	{
		___U3CmovingPiecesU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmovingPiecesU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CmatchesU3E__0_1() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CmatchesU3E__0_1)); }
	inline List_1_t3987138383 * get_U3CmatchesU3E__0_1() const { return ___U3CmatchesU3E__0_1; }
	inline List_1_t3987138383 ** get_address_of_U3CmatchesU3E__0_1() { return &___U3CmatchesU3E__0_1; }
	inline void set_U3CmatchesU3E__0_1(List_1_t3987138383 * value)
	{
		___U3CmatchesU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchesU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CisFinishedU3E__0_2() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CisFinishedU3E__0_2)); }
	inline bool get_U3CisFinishedU3E__0_2() const { return ___U3CisFinishedU3E__0_2; }
	inline bool* get_address_of_U3CisFinishedU3E__0_2() { return &___U3CisFinishedU3E__0_2; }
	inline void set_U3CisFinishedU3E__0_2(bool value)
	{
		___U3CisFinishedU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_gamePieces_3() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___gamePieces_3)); }
	inline List_1_t3987138383 * get_gamePieces_3() const { return ___gamePieces_3; }
	inline List_1_t3987138383 ** get_address_of_gamePieces_3() { return &___gamePieces_3; }
	inline void set_gamePieces_3(List_1_t3987138383 * value)
	{
		___gamePieces_3 = value;
		Il2CppCodeGenWriteBarrier((&___gamePieces_3), value);
	}

	inline static int32_t get_offset_of_U3CbombedPiecesU3E__1_4() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CbombedPiecesU3E__1_4)); }
	inline List_1_t3987138383 * get_U3CbombedPiecesU3E__1_4() const { return ___U3CbombedPiecesU3E__1_4; }
	inline List_1_t3987138383 ** get_address_of_U3CbombedPiecesU3E__1_4() { return &___U3CbombedPiecesU3E__1_4; }
	inline void set_U3CbombedPiecesU3E__1_4(List_1_t3987138383 * value)
	{
		___U3CbombedPiecesU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbombedPiecesU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U3CcollectedPiecesU3E__1_5() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CcollectedPiecesU3E__1_5)); }
	inline List_1_t3987138383 * get_U3CcollectedPiecesU3E__1_5() const { return ___U3CcollectedPiecesU3E__1_5; }
	inline List_1_t3987138383 ** get_address_of_U3CcollectedPiecesU3E__1_5() { return &___U3CcollectedPiecesU3E__1_5; }
	inline void set_U3CcollectedPiecesU3E__1_5(List_1_t3987138383 * value)
	{
		___U3CcollectedPiecesU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcollectedPiecesU3E__1_5), value);
	}

	inline static int32_t get_offset_of_U3CallCollectiblesU3E__1_6() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CallCollectiblesU3E__1_6)); }
	inline List_1_t3987138383 * get_U3CallCollectiblesU3E__1_6() const { return ___U3CallCollectiblesU3E__1_6; }
	inline List_1_t3987138383 ** get_address_of_U3CallCollectiblesU3E__1_6() { return &___U3CallCollectiblesU3E__1_6; }
	inline void set_U3CallCollectiblesU3E__1_6(List_1_t3987138383 * value)
	{
		___U3CallCollectiblesU3E__1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CallCollectiblesU3E__1_6), value);
	}

	inline static int32_t get_offset_of_U3CblockersU3E__1_7() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CblockersU3E__1_7)); }
	inline List_1_t3987138383 * get_U3CblockersU3E__1_7() const { return ___U3CblockersU3E__1_7; }
	inline List_1_t3987138383 ** get_address_of_U3CblockersU3E__1_7() { return &___U3CblockersU3E__1_7; }
	inline void set_U3CblockersU3E__1_7(List_1_t3987138383 * value)
	{
		___U3CblockersU3E__1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CblockersU3E__1_7), value);
	}

	inline static int32_t get_offset_of_U3CcolumnsToCollapseU3E__1_8() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U3CcolumnsToCollapseU3E__1_8)); }
	inline List_1_t128053199 * get_U3CcolumnsToCollapseU3E__1_8() const { return ___U3CcolumnsToCollapseU3E__1_8; }
	inline List_1_t128053199 ** get_address_of_U3CcolumnsToCollapseU3E__1_8() { return &___U3CcolumnsToCollapseU3E__1_8; }
	inline void set_U3CcolumnsToCollapseU3E__1_8(List_1_t128053199 * value)
	{
		___U3CcolumnsToCollapseU3E__1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcolumnsToCollapseU3E__1_8), value);
	}

	inline static int32_t get_offset_of_U24this_9() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U24this_9)); }
	inline Board_t3688305287 * get_U24this_9() const { return ___U24this_9; }
	inline Board_t3688305287 ** get_address_of_U24this_9() { return &___U24this_9; }
	inline void set_U24this_9(Board_t3688305287 * value)
	{
		___U24this_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_9), value);
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_10), value);
	}

	inline static int32_t get_offset_of_U24disposing_11() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U24disposing_11)); }
	inline bool get_U24disposing_11() const { return ___U24disposing_11; }
	inline bool* get_address_of_U24disposing_11() { return &___U24disposing_11; }
	inline void set_U24disposing_11(bool value)
	{
		___U24disposing_11 = value;
	}

	inline static int32_t get_offset_of_U24PC_12() { return static_cast<int32_t>(offsetof(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387, ___U24PC_12)); }
	inline int32_t get_U24PC_12() const { return ___U24PC_12; }
	inline int32_t* get_address_of_U24PC_12() { return &___U24PC_12; }
	inline void set_U24PC_12(int32_t value)
	{
		___U24PC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCLEARANDCOLLAPSEROUTINEU3EC__ITERATOR2_T3054617387_H
#ifndef U3CREFILLROUTINEU3EC__ITERATOR3_T217515380_H
#define U3CREFILLROUTINEU3EC__ITERATOR3_T217515380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board/<RefillRoutine>c__Iterator3
struct  U3CRefillRoutineU3Ec__Iterator3_t217515380  : public RuntimeObject
{
public:
	// Board Board/<RefillRoutine>c__Iterator3::$this
	Board_t3688305287 * ___U24this_0;
	// System.Object Board/<RefillRoutine>c__Iterator3::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Board/<RefillRoutine>c__Iterator3::$disposing
	bool ___U24disposing_2;
	// System.Int32 Board/<RefillRoutine>c__Iterator3::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CRefillRoutineU3Ec__Iterator3_t217515380, ___U24this_0)); }
	inline Board_t3688305287 * get_U24this_0() const { return ___U24this_0; }
	inline Board_t3688305287 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Board_t3688305287 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CRefillRoutineU3Ec__Iterator3_t217515380, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CRefillRoutineU3Ec__Iterator3_t217515380, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CRefillRoutineU3Ec__Iterator3_t217515380, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREFILLROUTINEU3EC__ITERATOR3_T217515380_H
#ifndef U3CSHUFFLEBOARDROUTINEU3EC__ITERATOR4_T2217112714_H
#define U3CSHUFFLEBOARDROUTINEU3EC__ITERATOR4_T2217112714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board/<ShuffleBoardRoutine>c__Iterator4
struct  U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<GamePiece> Board/<ShuffleBoardRoutine>c__Iterator4::<allPieces>__0
	List_1_t3987138383 * ___U3CallPiecesU3E__0_0;
	// GamePiece[0...,0...] Board/<ShuffleBoardRoutine>c__Iterator4::$locvar0
	GamePieceU5B0___U2C0___U5D_t3033866021* ___U24locvar0_1;
	// System.Int32 Board/<ShuffleBoardRoutine>c__Iterator4::$locvar1
	int32_t ___U24locvar1_2;
	// System.Int32 Board/<ShuffleBoardRoutine>c__Iterator4::$locvar2
	int32_t ___U24locvar2_3;
	// System.Int32 Board/<ShuffleBoardRoutine>c__Iterator4::$locvar3
	int32_t ___U24locvar3_4;
	// System.Int32 Board/<ShuffleBoardRoutine>c__Iterator4::$locvar4
	int32_t ___U24locvar4_5;
	// System.Collections.Generic.List`1<GamePiece> Board/<ShuffleBoardRoutine>c__Iterator4::<normalPieces>__0
	List_1_t3987138383 * ___U3CnormalPiecesU3E__0_6;
	// System.Collections.Generic.List`1<GamePiece> Board/<ShuffleBoardRoutine>c__Iterator4::<matches>__0
	List_1_t3987138383 * ___U3CmatchesU3E__0_7;
	// Board Board/<ShuffleBoardRoutine>c__Iterator4::$this
	Board_t3688305287 * ___U24this_8;
	// System.Object Board/<ShuffleBoardRoutine>c__Iterator4::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean Board/<ShuffleBoardRoutine>c__Iterator4::$disposing
	bool ___U24disposing_10;
	// System.Int32 Board/<ShuffleBoardRoutine>c__Iterator4::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CallPiecesU3E__0_0() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U3CallPiecesU3E__0_0)); }
	inline List_1_t3987138383 * get_U3CallPiecesU3E__0_0() const { return ___U3CallPiecesU3E__0_0; }
	inline List_1_t3987138383 ** get_address_of_U3CallPiecesU3E__0_0() { return &___U3CallPiecesU3E__0_0; }
	inline void set_U3CallPiecesU3E__0_0(List_1_t3987138383 * value)
	{
		___U3CallPiecesU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CallPiecesU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24locvar0_1)); }
	inline GamePieceU5B0___U2C0___U5D_t3033866021* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline GamePieceU5B0___U2C0___U5D_t3033866021** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(GamePieceU5B0___U2C0___U5D_t3033866021* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U24locvar2_3() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24locvar2_3)); }
	inline int32_t get_U24locvar2_3() const { return ___U24locvar2_3; }
	inline int32_t* get_address_of_U24locvar2_3() { return &___U24locvar2_3; }
	inline void set_U24locvar2_3(int32_t value)
	{
		___U24locvar2_3 = value;
	}

	inline static int32_t get_offset_of_U24locvar3_4() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24locvar3_4)); }
	inline int32_t get_U24locvar3_4() const { return ___U24locvar3_4; }
	inline int32_t* get_address_of_U24locvar3_4() { return &___U24locvar3_4; }
	inline void set_U24locvar3_4(int32_t value)
	{
		___U24locvar3_4 = value;
	}

	inline static int32_t get_offset_of_U24locvar4_5() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24locvar4_5)); }
	inline int32_t get_U24locvar4_5() const { return ___U24locvar4_5; }
	inline int32_t* get_address_of_U24locvar4_5() { return &___U24locvar4_5; }
	inline void set_U24locvar4_5(int32_t value)
	{
		___U24locvar4_5 = value;
	}

	inline static int32_t get_offset_of_U3CnormalPiecesU3E__0_6() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U3CnormalPiecesU3E__0_6)); }
	inline List_1_t3987138383 * get_U3CnormalPiecesU3E__0_6() const { return ___U3CnormalPiecesU3E__0_6; }
	inline List_1_t3987138383 ** get_address_of_U3CnormalPiecesU3E__0_6() { return &___U3CnormalPiecesU3E__0_6; }
	inline void set_U3CnormalPiecesU3E__0_6(List_1_t3987138383 * value)
	{
		___U3CnormalPiecesU3E__0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnormalPiecesU3E__0_6), value);
	}

	inline static int32_t get_offset_of_U3CmatchesU3E__0_7() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U3CmatchesU3E__0_7)); }
	inline List_1_t3987138383 * get_U3CmatchesU3E__0_7() const { return ___U3CmatchesU3E__0_7; }
	inline List_1_t3987138383 ** get_address_of_U3CmatchesU3E__0_7() { return &___U3CmatchesU3E__0_7; }
	inline void set_U3CmatchesU3E__0_7(List_1_t3987138383 * value)
	{
		___U3CmatchesU3E__0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchesU3E__0_7), value);
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24this_8)); }
	inline Board_t3688305287 * get_U24this_8() const { return ___U24this_8; }
	inline Board_t3688305287 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(Board_t3688305287 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHUFFLEBOARDROUTINEU3EC__ITERATOR4_T2217112714_H
#ifndef U3CHASMOVEATU3EC__ANONSTOREY0_T2576215649_H
#define U3CHASMOVEATU3EC__ANONSTOREY0_T2576215649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardDeadlock/<HasMoveAt>c__AnonStorey0
struct  U3CHasMoveAtU3Ec__AnonStorey0_t2576215649  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<GamePiece> BoardDeadlock/<HasMoveAt>c__AnonStorey0::matches
	List_1_t3987138383 * ___matches_0;

public:
	inline static int32_t get_offset_of_matches_0() { return static_cast<int32_t>(offsetof(U3CHasMoveAtU3Ec__AnonStorey0_t2576215649, ___matches_0)); }
	inline List_1_t3987138383 * get_matches_0() const { return ___matches_0; }
	inline List_1_t3987138383 ** get_address_of_matches_0() { return &___matches_0; }
	inline void set_matches_0(List_1_t3987138383 * value)
	{
		___matches_0 = value;
		Il2CppCodeGenWriteBarrier((&___matches_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CHASMOVEATU3EC__ANONSTOREY0_T2576215649_H
#ifndef QUEUE_1_T2361323135_H
#define QUEUE_1_T2361323135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<GamePiece>
struct  Queue_1_t2361323135  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GamePieceU5BU5D_t3033866020* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2361323135, ____array_0)); }
	inline GamePieceU5BU5D_t3033866020* get__array_0() const { return ____array_0; }
	inline GamePieceU5BU5D_t3033866020** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GamePieceU5BU5D_t3033866020* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2361323135, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t2361323135, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t2361323135, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t2361323135, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2361323135_H
#ifndef U3CCOUNTDOWNROUTINEU3EC__ITERATOR0_T1611850947_H
#define U3CCOUNTDOWNROUTINEU3EC__ITERATOR0_T1611850947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelGoalTimed/<CountDownRoutine>c__Iterator0
struct  U3CCountDownRoutineU3Ec__Iterator0_t1611850947  : public RuntimeObject
{
public:
	// LevelGoalTimed LevelGoalTimed/<CountDownRoutine>c__Iterator0::$this
	LevelGoalTimed_t3825364430 * ___U24this_0;
	// System.Object LevelGoalTimed/<CountDownRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean LevelGoalTimed/<CountDownRoutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 LevelGoalTimed/<CountDownRoutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CCountDownRoutineU3Ec__Iterator0_t1611850947, ___U24this_0)); }
	inline LevelGoalTimed_t3825364430 * get_U24this_0() const { return ___U24this_0; }
	inline LevelGoalTimed_t3825364430 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(LevelGoalTimed_t3825364430 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CCountDownRoutineU3Ec__Iterator0_t1611850947, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CCountDownRoutineU3Ec__Iterator0_t1611850947, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CCountDownRoutineU3Ec__Iterator0_t1611850947, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOUNTDOWNROUTINEU3EC__ITERATOR0_T1611850947_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CBREAKTILEROUTINEU3EC__ITERATOR0_T2156931628_H
#define U3CBREAKTILEROUTINEU3EC__ITERATOR0_T2156931628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile/<BreakTileRoutine>c__Iterator0
struct  U3CBreakTileRoutineU3Ec__Iterator0_t2156931628  : public RuntimeObject
{
public:
	// Tile Tile/<BreakTileRoutine>c__Iterator0::$this
	Tile_t2634157908 * ___U24this_0;
	// System.Object Tile/<BreakTileRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Tile/<BreakTileRoutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Tile/<BreakTileRoutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CBreakTileRoutineU3Ec__Iterator0_t2156931628, ___U24this_0)); }
	inline Tile_t2634157908 * get_U24this_0() const { return ___U24this_0; }
	inline Tile_t2634157908 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Tile_t2634157908 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CBreakTileRoutineU3Ec__Iterator0_t2156931628, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CBreakTileRoutineU3Ec__Iterator0_t2156931628, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CBreakTileRoutineU3Ec__Iterator0_t2156931628, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBREAKTILEROUTINEU3EC__ITERATOR0_T2156931628_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef U3CFADEROUTINEU3EC__ITERATOR0_T3686739037_H
#define U3CFADEROUTINEU3EC__ITERATOR0_T3686739037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFader/<FadeRoutine>c__Iterator0
struct  U3CFadeRoutineU3Ec__Iterator0_t3686739037  : public RuntimeObject
{
public:
	// System.Single ScreenFader/<FadeRoutine>c__Iterator0::alpha
	float ___alpha_0;
	// ScreenFader ScreenFader/<FadeRoutine>c__Iterator0::$this
	ScreenFader_t840564778 * ___U24this_1;
	// System.Object ScreenFader/<FadeRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean ScreenFader/<FadeRoutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 ScreenFader/<FadeRoutine>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(U3CFadeRoutineU3Ec__Iterator0_t3686739037, ___alpha_0)); }
	inline float get_alpha_0() const { return ___alpha_0; }
	inline float* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(float value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFadeRoutineU3Ec__Iterator0_t3686739037, ___U24this_1)); }
	inline ScreenFader_t840564778 * get_U24this_1() const { return ___U24this_1; }
	inline ScreenFader_t840564778 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ScreenFader_t840564778 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFadeRoutineU3Ec__Iterator0_t3686739037, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFadeRoutineU3Ec__Iterator0_t3686739037, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFadeRoutineU3Ec__Iterator0_t3686739037, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEROUTINEU3EC__ITERATOR0_T3686739037_H
#ifndef U3CCOUNTSCOREROUTINEU3EC__ITERATOR0_T796815392_H
#define U3CCOUNTSCOREROUTINEU3EC__ITERATOR0_T796815392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager/<CountScoreRoutine>c__Iterator0
struct  U3CCountScoreRoutineU3Ec__Iterator0_t796815392  : public RuntimeObject
{
public:
	// System.Int32 ScoreManager/<CountScoreRoutine>c__Iterator0::<iterations>__0
	int32_t ___U3CiterationsU3E__0_0;
	// ScoreManager ScoreManager/<CountScoreRoutine>c__Iterator0::$this
	ScoreManager_t3621325103 * ___U24this_1;
	// System.Object ScoreManager/<CountScoreRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean ScoreManager/<CountScoreRoutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 ScoreManager/<CountScoreRoutine>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiterationsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCountScoreRoutineU3Ec__Iterator0_t796815392, ___U3CiterationsU3E__0_0)); }
	inline int32_t get_U3CiterationsU3E__0_0() const { return ___U3CiterationsU3E__0_0; }
	inline int32_t* get_address_of_U3CiterationsU3E__0_0() { return &___U3CiterationsU3E__0_0; }
	inline void set_U3CiterationsU3E__0_0(int32_t value)
	{
		___U3CiterationsU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CCountScoreRoutineU3Ec__Iterator0_t796815392, ___U24this_1)); }
	inline ScoreManager_t3621325103 * get_U24this_1() const { return ___U24this_1; }
	inline ScoreManager_t3621325103 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ScoreManager_t3621325103 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CCountScoreRoutineU3Ec__Iterator0_t796815392, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CCountScoreRoutineU3Ec__Iterator0_t796815392, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CCountScoreRoutineU3Ec__Iterator0_t796815392, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOUNTSCOREROUTINEU3EC__ITERATOR0_T796815392_H
#ifndef U3CACTIVATEROUTINEU3EC__ITERATOR0_T3188531504_H
#define U3CACTIVATEROUTINEU3EC__ITERATOR0_T3188531504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreStar/<ActivateRoutine>c__Iterator0
struct  U3CActivateRoutineU3Ec__Iterator0_t3188531504  : public RuntimeObject
{
public:
	// ScoreStar ScoreStar/<ActivateRoutine>c__Iterator0::$this
	ScoreStar_t1530904714 * ___U24this_0;
	// System.Object ScoreStar/<ActivateRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean ScoreStar/<ActivateRoutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 ScoreStar/<ActivateRoutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CActivateRoutineU3Ec__Iterator0_t3188531504, ___U24this_0)); }
	inline ScoreStar_t1530904714 * get_U24this_0() const { return ___U24this_0; }
	inline ScoreStar_t1530904714 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(ScoreStar_t1530904714 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CActivateRoutineU3Ec__Iterator0_t3188531504, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CActivateRoutineU3Ec__Iterator0_t3188531504, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CActivateRoutineU3Ec__Iterator0_t3188531504, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CACTIVATEROUTINEU3EC__ITERATOR0_T3188531504_H
#ifndef U3CTESTROUTINEU3EC__ITERATOR1_T3179073790_H
#define U3CTESTROUTINEU3EC__ITERATOR1_T3179073790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreStar/<TestRoutine>c__Iterator1
struct  U3CTestRoutineU3Ec__Iterator1_t3179073790  : public RuntimeObject
{
public:
	// ScoreStar ScoreStar/<TestRoutine>c__Iterator1::$this
	ScoreStar_t1530904714 * ___U24this_0;
	// System.Object ScoreStar/<TestRoutine>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean ScoreStar/<TestRoutine>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 ScoreStar/<TestRoutine>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CTestRoutineU3Ec__Iterator1_t3179073790, ___U24this_0)); }
	inline ScoreStar_t1530904714 * get_U24this_0() const { return ___U24this_0; }
	inline ScoreStar_t1530904714 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(ScoreStar_t1530904714 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CTestRoutineU3Ec__Iterator1_t3179073790, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CTestRoutineU3Ec__Iterator1_t3179073790, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CTestRoutineU3Ec__Iterator1_t3179073790, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTESTROUTINEU3EC__ITERATOR1_T3179073790_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef MATHF_T3464937446_H
#define MATHF_T3464937446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t3464937446 
{
public:

public:
};

struct Mathf_t3464937446_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t3464937446_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T3464937446_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUMERATOR_T2017297076_H
#define ENUMERATOR_T2017297076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t2017297076 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t128053199 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___l_0)); }
	inline List_1_t128053199 * get_l_0() const { return ___l_0; }
	inline List_1_t128053199 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t128053199 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2017297076_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T1581414964_H
#define ENUMERATOR_T1581414964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<GamePiece>
struct  Enumerator_t1581414964 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3987138383 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GamePiece_t2515063641 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1581414964, ___l_0)); }
	inline List_1_t3987138383 * get_l_0() const { return ___l_0; }
	inline List_1_t3987138383 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3987138383 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1581414964, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1581414964, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1581414964, ___current_3)); }
	inline GamePiece_t2515063641 * get_current_3() const { return ___current_3; }
	inline GamePiece_t2515063641 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GamePiece_t2515063641 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1581414964_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_T337909235_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef U3CMOVEROUTINEU3EC__ITERATOR0_T2853335681_H
#define U3CMOVEROUTINEU3EC__ITERATOR0_T2853335681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RectXFormMover/<MoveRoutine>c__Iterator0
struct  U3CMoveRoutineU3Ec__Iterator0_t2853335681  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 RectXFormMover/<MoveRoutine>c__Iterator0::startPos
	Vector3_t3722313464  ___startPos_0;
	// System.Boolean RectXFormMover/<MoveRoutine>c__Iterator0::<reachedDestination>__0
	bool ___U3CreachedDestinationU3E__0_1;
	// System.Single RectXFormMover/<MoveRoutine>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_2;
	// UnityEngine.Vector3 RectXFormMover/<MoveRoutine>c__Iterator0::endPos
	Vector3_t3722313464  ___endPos_3;
	// System.Single RectXFormMover/<MoveRoutine>c__Iterator0::timeToMove
	float ___timeToMove_4;
	// System.Single RectXFormMover/<MoveRoutine>c__Iterator0::<t>__1
	float ___U3CtU3E__1_5;
	// RectXFormMover RectXFormMover/<MoveRoutine>c__Iterator0::$this
	RectXFormMover_t3830425495 * ___U24this_6;
	// System.Object RectXFormMover/<MoveRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean RectXFormMover/<MoveRoutine>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 RectXFormMover/<MoveRoutine>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_startPos_0() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___startPos_0)); }
	inline Vector3_t3722313464  get_startPos_0() const { return ___startPos_0; }
	inline Vector3_t3722313464 * get_address_of_startPos_0() { return &___startPos_0; }
	inline void set_startPos_0(Vector3_t3722313464  value)
	{
		___startPos_0 = value;
	}

	inline static int32_t get_offset_of_U3CreachedDestinationU3E__0_1() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U3CreachedDestinationU3E__0_1)); }
	inline bool get_U3CreachedDestinationU3E__0_1() const { return ___U3CreachedDestinationU3E__0_1; }
	inline bool* get_address_of_U3CreachedDestinationU3E__0_1() { return &___U3CreachedDestinationU3E__0_1; }
	inline void set_U3CreachedDestinationU3E__0_1(bool value)
	{
		___U3CreachedDestinationU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_2() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U3CelapsedTimeU3E__0_2)); }
	inline float get_U3CelapsedTimeU3E__0_2() const { return ___U3CelapsedTimeU3E__0_2; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_2() { return &___U3CelapsedTimeU3E__0_2; }
	inline void set_U3CelapsedTimeU3E__0_2(float value)
	{
		___U3CelapsedTimeU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_endPos_3() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___endPos_3)); }
	inline Vector3_t3722313464  get_endPos_3() const { return ___endPos_3; }
	inline Vector3_t3722313464 * get_address_of_endPos_3() { return &___endPos_3; }
	inline void set_endPos_3(Vector3_t3722313464  value)
	{
		___endPos_3 = value;
	}

	inline static int32_t get_offset_of_timeToMove_4() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___timeToMove_4)); }
	inline float get_timeToMove_4() const { return ___timeToMove_4; }
	inline float* get_address_of_timeToMove_4() { return &___timeToMove_4; }
	inline void set_timeToMove_4(float value)
	{
		___timeToMove_4 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E__1_5() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U3CtU3E__1_5)); }
	inline float get_U3CtU3E__1_5() const { return ___U3CtU3E__1_5; }
	inline float* get_address_of_U3CtU3E__1_5() { return &___U3CtU3E__1_5; }
	inline void set_U3CtU3E__1_5(float value)
	{
		___U3CtU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U24this_6)); }
	inline RectXFormMover_t3830425495 * get_U24this_6() const { return ___U24this_6; }
	inline RectXFormMover_t3830425495 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(RectXFormMover_t3830425495 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t2853335681, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMOVEROUTINEU3EC__ITERATOR0_T2853335681_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CMOVEROUTINEU3EC__ITERATOR0_T3429612721_H
#define U3CMOVEROUTINEU3EC__ITERATOR0_T3429612721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePiece/<MoveRoutine>c__Iterator0
struct  U3CMoveRoutineU3Ec__Iterator0_t3429612721  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 GamePiece/<MoveRoutine>c__Iterator0::<startPosition>__0
	Vector3_t3722313464  ___U3CstartPositionU3E__0_0;
	// System.Boolean GamePiece/<MoveRoutine>c__Iterator0::<reachedDestination>__0
	bool ___U3CreachedDestinationU3E__0_1;
	// System.Single GamePiece/<MoveRoutine>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_2;
	// UnityEngine.Vector3 GamePiece/<MoveRoutine>c__Iterator0::destination
	Vector3_t3722313464  ___destination_3;
	// System.Single GamePiece/<MoveRoutine>c__Iterator0::timeToMove
	float ___timeToMove_4;
	// System.Single GamePiece/<MoveRoutine>c__Iterator0::<t>__1
	float ___U3CtU3E__1_5;
	// GamePiece GamePiece/<MoveRoutine>c__Iterator0::$this
	GamePiece_t2515063641 * ___U24this_6;
	// System.Object GamePiece/<MoveRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean GamePiece/<MoveRoutine>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 GamePiece/<MoveRoutine>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CstartPositionU3E__0_0() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U3CstartPositionU3E__0_0)); }
	inline Vector3_t3722313464  get_U3CstartPositionU3E__0_0() const { return ___U3CstartPositionU3E__0_0; }
	inline Vector3_t3722313464 * get_address_of_U3CstartPositionU3E__0_0() { return &___U3CstartPositionU3E__0_0; }
	inline void set_U3CstartPositionU3E__0_0(Vector3_t3722313464  value)
	{
		___U3CstartPositionU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CreachedDestinationU3E__0_1() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U3CreachedDestinationU3E__0_1)); }
	inline bool get_U3CreachedDestinationU3E__0_1() const { return ___U3CreachedDestinationU3E__0_1; }
	inline bool* get_address_of_U3CreachedDestinationU3E__0_1() { return &___U3CreachedDestinationU3E__0_1; }
	inline void set_U3CreachedDestinationU3E__0_1(bool value)
	{
		___U3CreachedDestinationU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_2() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U3CelapsedTimeU3E__0_2)); }
	inline float get_U3CelapsedTimeU3E__0_2() const { return ___U3CelapsedTimeU3E__0_2; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_2() { return &___U3CelapsedTimeU3E__0_2; }
	inline void set_U3CelapsedTimeU3E__0_2(float value)
	{
		___U3CelapsedTimeU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_destination_3() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___destination_3)); }
	inline Vector3_t3722313464  get_destination_3() const { return ___destination_3; }
	inline Vector3_t3722313464 * get_address_of_destination_3() { return &___destination_3; }
	inline void set_destination_3(Vector3_t3722313464  value)
	{
		___destination_3 = value;
	}

	inline static int32_t get_offset_of_timeToMove_4() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___timeToMove_4)); }
	inline float get_timeToMove_4() const { return ___timeToMove_4; }
	inline float* get_address_of_timeToMove_4() { return &___timeToMove_4; }
	inline void set_timeToMove_4(float value)
	{
		___timeToMove_4 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E__1_5() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U3CtU3E__1_5)); }
	inline float get_U3CtU3E__1_5() const { return ___U3CtU3E__1_5; }
	inline float* get_address_of_U3CtU3E__1_5() { return &___U3CtU3E__1_5; }
	inline void set_U3CtU3E__1_5(float value)
	{
		___U3CtU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U24this_6)); }
	inline GamePiece_t2515063641 * get_U24this_6() const { return ___U24this_6; }
	inline GamePiece_t2515063641 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(GamePiece_t2515063641 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CMoveRoutineU3Ec__Iterator0_t3429612721, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMOVEROUTINEU3EC__ITERATOR0_T3429612721_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef INTERPTYPE_T1237545887_H
#define INTERPTYPE_T1237545887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePiece/InterpType
struct  InterpType_t1237545887 
{
public:
	// System.Int32 GamePiece/InterpType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InterpType_t1237545887, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPTYPE_T1237545887_H
#ifndef U3CFLASHROUTINEU3EC__ITERATOR0_T808325431_H
#define U3CFLASHROUTINEU3EC__ITERATOR0_T808325431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer/<FlashRoutine>c__Iterator0
struct  U3CFlashRoutineU3Ec__Iterator0_t808325431  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image Timer/<FlashRoutine>c__Iterator0::image
	Image_t2670269651 * ___image_0;
	// UnityEngine.Color Timer/<FlashRoutine>c__Iterator0::<originalColor>__1
	Color_t2555686324  ___U3CoriginalColorU3E__1_1;
	// UnityEngine.Color Timer/<FlashRoutine>c__Iterator0::targetColor
	Color_t2555686324  ___targetColor_2;
	// System.Single Timer/<FlashRoutine>c__Iterator0::interval
	float ___interval_3;
	// System.Object Timer/<FlashRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean Timer/<FlashRoutine>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 Timer/<FlashRoutine>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___image_0)); }
	inline Image_t2670269651 * get_image_0() const { return ___image_0; }
	inline Image_t2670269651 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(Image_t2670269651 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_U3CoriginalColorU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___U3CoriginalColorU3E__1_1)); }
	inline Color_t2555686324  get_U3CoriginalColorU3E__1_1() const { return ___U3CoriginalColorU3E__1_1; }
	inline Color_t2555686324 * get_address_of_U3CoriginalColorU3E__1_1() { return &___U3CoriginalColorU3E__1_1; }
	inline void set_U3CoriginalColorU3E__1_1(Color_t2555686324  value)
	{
		___U3CoriginalColorU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_targetColor_2() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___targetColor_2)); }
	inline Color_t2555686324  get_targetColor_2() const { return ___targetColor_2; }
	inline Color_t2555686324 * get_address_of_targetColor_2() { return &___targetColor_2; }
	inline void set_targetColor_2(Color_t2555686324  value)
	{
		___targetColor_2 = value;
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___interval_3)); }
	inline float get_interval_3() const { return ___interval_3; }
	inline float* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(float value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CFlashRoutineU3Ec__Iterator0_t808325431, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFLASHROUTINEU3EC__ITERATOR0_T808325431_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef TILETYPE_T2216804700_H
#define TILETYPE_T2216804700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileType
struct  TileType_t2216804700 
{
public:
	// System.Int32 TileType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TileType_t2216804700, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILETYPE_T2216804700_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef U3CSWITCHTILESROUTINEU3EC__ITERATOR0_T14771579_H
#define U3CSWITCHTILESROUTINEU3EC__ITERATOR0_T14771579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board/<SwitchTilesRoutine>c__Iterator0
struct  U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579  : public RuntimeObject
{
public:
	// Tile Board/<SwitchTilesRoutine>c__Iterator0::clickedTile
	Tile_t2634157908 * ___clickedTile_0;
	// GamePiece Board/<SwitchTilesRoutine>c__Iterator0::<clickedPiece>__1
	GamePiece_t2515063641 * ___U3CclickedPieceU3E__1_1;
	// Tile Board/<SwitchTilesRoutine>c__Iterator0::targetTile
	Tile_t2634157908 * ___targetTile_2;
	// GamePiece Board/<SwitchTilesRoutine>c__Iterator0::<targetPiece>__1
	GamePiece_t2515063641 * ___U3CtargetPieceU3E__1_3;
	// System.Collections.Generic.List`1<GamePiece> Board/<SwitchTilesRoutine>c__Iterator0::<clickedPieceMatches>__2
	List_1_t3987138383 * ___U3CclickedPieceMatchesU3E__2_4;
	// System.Collections.Generic.List`1<GamePiece> Board/<SwitchTilesRoutine>c__Iterator0::<targetPieceMatches>__2
	List_1_t3987138383 * ___U3CtargetPieceMatchesU3E__2_5;
	// System.Collections.Generic.List`1<GamePiece> Board/<SwitchTilesRoutine>c__Iterator0::<colorMatches>__2
	List_1_t3987138383 * ___U3CcolorMatchesU3E__2_6;
	// UnityEngine.Vector2 Board/<SwitchTilesRoutine>c__Iterator0::<swipeDirection>__3
	Vector2_t2156229523  ___U3CswipeDirectionU3E__3_7;
	// Board Board/<SwitchTilesRoutine>c__Iterator0::$this
	Board_t3688305287 * ___U24this_8;
	// System.Object Board/<SwitchTilesRoutine>c__Iterator0::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean Board/<SwitchTilesRoutine>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 Board/<SwitchTilesRoutine>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_clickedTile_0() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___clickedTile_0)); }
	inline Tile_t2634157908 * get_clickedTile_0() const { return ___clickedTile_0; }
	inline Tile_t2634157908 ** get_address_of_clickedTile_0() { return &___clickedTile_0; }
	inline void set_clickedTile_0(Tile_t2634157908 * value)
	{
		___clickedTile_0 = value;
		Il2CppCodeGenWriteBarrier((&___clickedTile_0), value);
	}

	inline static int32_t get_offset_of_U3CclickedPieceU3E__1_1() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U3CclickedPieceU3E__1_1)); }
	inline GamePiece_t2515063641 * get_U3CclickedPieceU3E__1_1() const { return ___U3CclickedPieceU3E__1_1; }
	inline GamePiece_t2515063641 ** get_address_of_U3CclickedPieceU3E__1_1() { return &___U3CclickedPieceU3E__1_1; }
	inline void set_U3CclickedPieceU3E__1_1(GamePiece_t2515063641 * value)
	{
		___U3CclickedPieceU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CclickedPieceU3E__1_1), value);
	}

	inline static int32_t get_offset_of_targetTile_2() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___targetTile_2)); }
	inline Tile_t2634157908 * get_targetTile_2() const { return ___targetTile_2; }
	inline Tile_t2634157908 ** get_address_of_targetTile_2() { return &___targetTile_2; }
	inline void set_targetTile_2(Tile_t2634157908 * value)
	{
		___targetTile_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetTile_2), value);
	}

	inline static int32_t get_offset_of_U3CtargetPieceU3E__1_3() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U3CtargetPieceU3E__1_3)); }
	inline GamePiece_t2515063641 * get_U3CtargetPieceU3E__1_3() const { return ___U3CtargetPieceU3E__1_3; }
	inline GamePiece_t2515063641 ** get_address_of_U3CtargetPieceU3E__1_3() { return &___U3CtargetPieceU3E__1_3; }
	inline void set_U3CtargetPieceU3E__1_3(GamePiece_t2515063641 * value)
	{
		___U3CtargetPieceU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtargetPieceU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U3CclickedPieceMatchesU3E__2_4() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U3CclickedPieceMatchesU3E__2_4)); }
	inline List_1_t3987138383 * get_U3CclickedPieceMatchesU3E__2_4() const { return ___U3CclickedPieceMatchesU3E__2_4; }
	inline List_1_t3987138383 ** get_address_of_U3CclickedPieceMatchesU3E__2_4() { return &___U3CclickedPieceMatchesU3E__2_4; }
	inline void set_U3CclickedPieceMatchesU3E__2_4(List_1_t3987138383 * value)
	{
		___U3CclickedPieceMatchesU3E__2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CclickedPieceMatchesU3E__2_4), value);
	}

	inline static int32_t get_offset_of_U3CtargetPieceMatchesU3E__2_5() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U3CtargetPieceMatchesU3E__2_5)); }
	inline List_1_t3987138383 * get_U3CtargetPieceMatchesU3E__2_5() const { return ___U3CtargetPieceMatchesU3E__2_5; }
	inline List_1_t3987138383 ** get_address_of_U3CtargetPieceMatchesU3E__2_5() { return &___U3CtargetPieceMatchesU3E__2_5; }
	inline void set_U3CtargetPieceMatchesU3E__2_5(List_1_t3987138383 * value)
	{
		___U3CtargetPieceMatchesU3E__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtargetPieceMatchesU3E__2_5), value);
	}

	inline static int32_t get_offset_of_U3CcolorMatchesU3E__2_6() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U3CcolorMatchesU3E__2_6)); }
	inline List_1_t3987138383 * get_U3CcolorMatchesU3E__2_6() const { return ___U3CcolorMatchesU3E__2_6; }
	inline List_1_t3987138383 ** get_address_of_U3CcolorMatchesU3E__2_6() { return &___U3CcolorMatchesU3E__2_6; }
	inline void set_U3CcolorMatchesU3E__2_6(List_1_t3987138383 * value)
	{
		___U3CcolorMatchesU3E__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcolorMatchesU3E__2_6), value);
	}

	inline static int32_t get_offset_of_U3CswipeDirectionU3E__3_7() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U3CswipeDirectionU3E__3_7)); }
	inline Vector2_t2156229523  get_U3CswipeDirectionU3E__3_7() const { return ___U3CswipeDirectionU3E__3_7; }
	inline Vector2_t2156229523 * get_address_of_U3CswipeDirectionU3E__3_7() { return &___U3CswipeDirectionU3E__3_7; }
	inline void set_U3CswipeDirectionU3E__3_7(Vector2_t2156229523  value)
	{
		___U3CswipeDirectionU3E__3_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U24this_8)); }
	inline Board_t3688305287 * get_U24this_8() const { return ___U24this_8; }
	inline Board_t3688305287 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(Board_t3688305287 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSWITCHTILESROUTINEU3EC__ITERATOR0_T14771579_H
#ifndef MATCHVALUE_T3671566290_H
#define MATCHVALUE_T3671566290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchValue
struct  MatchValue_t3671566290 
{
public:
	// System.Int32 MatchValue::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MatchValue_t3671566290, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHVALUE_T3671566290_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BOMBTYPE_T3902120105_H
#define BOMBTYPE_T3902120105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BombType
struct  BombType_t3902120105 
{
public:
	// System.Int32 BombType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BombType_t3902120105, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOMBTYPE_T3902120105_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-D432972D09D92F62ECF1A2E7F2A6CE502476A646
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0;

public:
	inline static int32_t get_offset_of_U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0() const { return ___U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0() { return &___U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0; }
	inline void set_U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef PREDICATE_1_T3340357765_H
#define PREDICATE_1_T3340357765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<GamePiece>
struct  Predicate_1_t3340357765  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3340357765_H
#ifndef FUNC_2_T3228517195_H
#define FUNC_2_T3228517195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<GamePiece,MatchValue>
struct  Func_2_t3228517195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3228517195_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef PARTICLESYSTEMRENDERER_T2065813411_H
#define PARTICLESYSTEMRENDERER_T2065813411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemRenderer
struct  ParticleSystemRenderer_t2065813411  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMRENDERER_T2065813411_H
#ifndef BOARD_T3688305287_H
#define BOARD_T3688305287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board
struct  Board_t3688305287  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Board::width
	int32_t ___width_2;
	// System.Int32 Board::height
	int32_t ___height_3;
	// System.Int32 Board::borderSize
	int32_t ___borderSize_4;
	// UnityEngine.GameObject Board::tileNormalPrefab
	GameObject_t1113636619 * ___tileNormalPrefab_5;
	// UnityEngine.GameObject Board::tileObstaclePrefab
	GameObject_t1113636619 * ___tileObstaclePrefab_6;
	// UnityEngine.GameObject[] Board::gamePiecePrefabs
	GameObjectU5BU5D_t3328599146* ___gamePiecePrefabs_7;
	// UnityEngine.GameObject[] Board::adjacentBombPrefabs
	GameObjectU5BU5D_t3328599146* ___adjacentBombPrefabs_8;
	// UnityEngine.GameObject[] Board::columnBombPrefabs
	GameObjectU5BU5D_t3328599146* ___columnBombPrefabs_9;
	// UnityEngine.GameObject[] Board::rowBombPrefabs
	GameObjectU5BU5D_t3328599146* ___rowBombPrefabs_10;
	// UnityEngine.GameObject Board::colorBombPrefab
	GameObject_t1113636619 * ___colorBombPrefab_11;
	// System.Int32 Board::maxCollectibles
	int32_t ___maxCollectibles_12;
	// System.Int32 Board::collectibleCount
	int32_t ___collectibleCount_13;
	// System.Single Board::chanceForCollectible
	float ___chanceForCollectible_14;
	// UnityEngine.GameObject[] Board::collectiblePrefabs
	GameObjectU5BU5D_t3328599146* ___collectiblePrefabs_15;
	// UnityEngine.GameObject Board::m_clickedTileBomb
	GameObject_t1113636619 * ___m_clickedTileBomb_16;
	// UnityEngine.GameObject Board::m_targetTileBomb
	GameObject_t1113636619 * ___m_targetTileBomb_17;
	// System.Single Board::swapTime
	float ___swapTime_18;
	// Tile[0...,0...] Board::m_allTiles
	TileU5B0___U2C0___U5D_t3330163934* ___m_allTiles_19;
	// GamePiece[0...,0...] Board::m_allGamePieces
	GamePieceU5B0___U2C0___U5D_t3033866021* ___m_allGamePieces_20;
	// Tile Board::m_clickedTile
	Tile_t2634157908 * ___m_clickedTile_21;
	// Tile Board::m_targetTile
	Tile_t2634157908 * ___m_targetTile_22;
	// System.Boolean Board::m_playerInputEnabled
	bool ___m_playerInputEnabled_23;
	// Board/StartingObject[] Board::startingTiles
	StartingObjectU5BU5D_t3554278542* ___startingTiles_24;
	// Board/StartingObject[] Board::startingGamePieces
	StartingObjectU5BU5D_t3554278542* ___startingGamePieces_25;
	// ParticleManager Board::m_particleManager
	ParticleManager_t4052332083 * ___m_particleManager_26;
	// System.Int32 Board::fillYOffset
	int32_t ___fillYOffset_27;
	// System.Single Board::fillMoveTime
	float ___fillMoveTime_28;
	// System.Int32 Board::m_scoreMultiplier
	int32_t ___m_scoreMultiplier_29;
	// System.Boolean Board::isRefilling
	bool ___isRefilling_30;
	// BoardDeadlock Board::m_boardDeadlock
	BoardDeadlock_t1667041069 * ___m_boardDeadlock_31;
	// BoardShuffler Board::m_boardShuffler
	BoardShuffler_t56952400 * ___m_boardShuffler_32;
	// LevelGoal Board::m_levelGoal
	LevelGoal_t786700456 * ___m_levelGoal_33;

public:
	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_borderSize_4() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___borderSize_4)); }
	inline int32_t get_borderSize_4() const { return ___borderSize_4; }
	inline int32_t* get_address_of_borderSize_4() { return &___borderSize_4; }
	inline void set_borderSize_4(int32_t value)
	{
		___borderSize_4 = value;
	}

	inline static int32_t get_offset_of_tileNormalPrefab_5() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___tileNormalPrefab_5)); }
	inline GameObject_t1113636619 * get_tileNormalPrefab_5() const { return ___tileNormalPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_tileNormalPrefab_5() { return &___tileNormalPrefab_5; }
	inline void set_tileNormalPrefab_5(GameObject_t1113636619 * value)
	{
		___tileNormalPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___tileNormalPrefab_5), value);
	}

	inline static int32_t get_offset_of_tileObstaclePrefab_6() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___tileObstaclePrefab_6)); }
	inline GameObject_t1113636619 * get_tileObstaclePrefab_6() const { return ___tileObstaclePrefab_6; }
	inline GameObject_t1113636619 ** get_address_of_tileObstaclePrefab_6() { return &___tileObstaclePrefab_6; }
	inline void set_tileObstaclePrefab_6(GameObject_t1113636619 * value)
	{
		___tileObstaclePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((&___tileObstaclePrefab_6), value);
	}

	inline static int32_t get_offset_of_gamePiecePrefabs_7() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___gamePiecePrefabs_7)); }
	inline GameObjectU5BU5D_t3328599146* get_gamePiecePrefabs_7() const { return ___gamePiecePrefabs_7; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_gamePiecePrefabs_7() { return &___gamePiecePrefabs_7; }
	inline void set_gamePiecePrefabs_7(GameObjectU5BU5D_t3328599146* value)
	{
		___gamePiecePrefabs_7 = value;
		Il2CppCodeGenWriteBarrier((&___gamePiecePrefabs_7), value);
	}

	inline static int32_t get_offset_of_adjacentBombPrefabs_8() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___adjacentBombPrefabs_8)); }
	inline GameObjectU5BU5D_t3328599146* get_adjacentBombPrefabs_8() const { return ___adjacentBombPrefabs_8; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_adjacentBombPrefabs_8() { return &___adjacentBombPrefabs_8; }
	inline void set_adjacentBombPrefabs_8(GameObjectU5BU5D_t3328599146* value)
	{
		___adjacentBombPrefabs_8 = value;
		Il2CppCodeGenWriteBarrier((&___adjacentBombPrefabs_8), value);
	}

	inline static int32_t get_offset_of_columnBombPrefabs_9() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___columnBombPrefabs_9)); }
	inline GameObjectU5BU5D_t3328599146* get_columnBombPrefabs_9() const { return ___columnBombPrefabs_9; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_columnBombPrefabs_9() { return &___columnBombPrefabs_9; }
	inline void set_columnBombPrefabs_9(GameObjectU5BU5D_t3328599146* value)
	{
		___columnBombPrefabs_9 = value;
		Il2CppCodeGenWriteBarrier((&___columnBombPrefabs_9), value);
	}

	inline static int32_t get_offset_of_rowBombPrefabs_10() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___rowBombPrefabs_10)); }
	inline GameObjectU5BU5D_t3328599146* get_rowBombPrefabs_10() const { return ___rowBombPrefabs_10; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_rowBombPrefabs_10() { return &___rowBombPrefabs_10; }
	inline void set_rowBombPrefabs_10(GameObjectU5BU5D_t3328599146* value)
	{
		___rowBombPrefabs_10 = value;
		Il2CppCodeGenWriteBarrier((&___rowBombPrefabs_10), value);
	}

	inline static int32_t get_offset_of_colorBombPrefab_11() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___colorBombPrefab_11)); }
	inline GameObject_t1113636619 * get_colorBombPrefab_11() const { return ___colorBombPrefab_11; }
	inline GameObject_t1113636619 ** get_address_of_colorBombPrefab_11() { return &___colorBombPrefab_11; }
	inline void set_colorBombPrefab_11(GameObject_t1113636619 * value)
	{
		___colorBombPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___colorBombPrefab_11), value);
	}

	inline static int32_t get_offset_of_maxCollectibles_12() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___maxCollectibles_12)); }
	inline int32_t get_maxCollectibles_12() const { return ___maxCollectibles_12; }
	inline int32_t* get_address_of_maxCollectibles_12() { return &___maxCollectibles_12; }
	inline void set_maxCollectibles_12(int32_t value)
	{
		___maxCollectibles_12 = value;
	}

	inline static int32_t get_offset_of_collectibleCount_13() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___collectibleCount_13)); }
	inline int32_t get_collectibleCount_13() const { return ___collectibleCount_13; }
	inline int32_t* get_address_of_collectibleCount_13() { return &___collectibleCount_13; }
	inline void set_collectibleCount_13(int32_t value)
	{
		___collectibleCount_13 = value;
	}

	inline static int32_t get_offset_of_chanceForCollectible_14() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___chanceForCollectible_14)); }
	inline float get_chanceForCollectible_14() const { return ___chanceForCollectible_14; }
	inline float* get_address_of_chanceForCollectible_14() { return &___chanceForCollectible_14; }
	inline void set_chanceForCollectible_14(float value)
	{
		___chanceForCollectible_14 = value;
	}

	inline static int32_t get_offset_of_collectiblePrefabs_15() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___collectiblePrefabs_15)); }
	inline GameObjectU5BU5D_t3328599146* get_collectiblePrefabs_15() const { return ___collectiblePrefabs_15; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_collectiblePrefabs_15() { return &___collectiblePrefabs_15; }
	inline void set_collectiblePrefabs_15(GameObjectU5BU5D_t3328599146* value)
	{
		___collectiblePrefabs_15 = value;
		Il2CppCodeGenWriteBarrier((&___collectiblePrefabs_15), value);
	}

	inline static int32_t get_offset_of_m_clickedTileBomb_16() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_clickedTileBomb_16)); }
	inline GameObject_t1113636619 * get_m_clickedTileBomb_16() const { return ___m_clickedTileBomb_16; }
	inline GameObject_t1113636619 ** get_address_of_m_clickedTileBomb_16() { return &___m_clickedTileBomb_16; }
	inline void set_m_clickedTileBomb_16(GameObject_t1113636619 * value)
	{
		___m_clickedTileBomb_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_clickedTileBomb_16), value);
	}

	inline static int32_t get_offset_of_m_targetTileBomb_17() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_targetTileBomb_17)); }
	inline GameObject_t1113636619 * get_m_targetTileBomb_17() const { return ___m_targetTileBomb_17; }
	inline GameObject_t1113636619 ** get_address_of_m_targetTileBomb_17() { return &___m_targetTileBomb_17; }
	inline void set_m_targetTileBomb_17(GameObject_t1113636619 * value)
	{
		___m_targetTileBomb_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_targetTileBomb_17), value);
	}

	inline static int32_t get_offset_of_swapTime_18() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___swapTime_18)); }
	inline float get_swapTime_18() const { return ___swapTime_18; }
	inline float* get_address_of_swapTime_18() { return &___swapTime_18; }
	inline void set_swapTime_18(float value)
	{
		___swapTime_18 = value;
	}

	inline static int32_t get_offset_of_m_allTiles_19() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_allTiles_19)); }
	inline TileU5B0___U2C0___U5D_t3330163934* get_m_allTiles_19() const { return ___m_allTiles_19; }
	inline TileU5B0___U2C0___U5D_t3330163934** get_address_of_m_allTiles_19() { return &___m_allTiles_19; }
	inline void set_m_allTiles_19(TileU5B0___U2C0___U5D_t3330163934* value)
	{
		___m_allTiles_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_allTiles_19), value);
	}

	inline static int32_t get_offset_of_m_allGamePieces_20() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_allGamePieces_20)); }
	inline GamePieceU5B0___U2C0___U5D_t3033866021* get_m_allGamePieces_20() const { return ___m_allGamePieces_20; }
	inline GamePieceU5B0___U2C0___U5D_t3033866021** get_address_of_m_allGamePieces_20() { return &___m_allGamePieces_20; }
	inline void set_m_allGamePieces_20(GamePieceU5B0___U2C0___U5D_t3033866021* value)
	{
		___m_allGamePieces_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_allGamePieces_20), value);
	}

	inline static int32_t get_offset_of_m_clickedTile_21() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_clickedTile_21)); }
	inline Tile_t2634157908 * get_m_clickedTile_21() const { return ___m_clickedTile_21; }
	inline Tile_t2634157908 ** get_address_of_m_clickedTile_21() { return &___m_clickedTile_21; }
	inline void set_m_clickedTile_21(Tile_t2634157908 * value)
	{
		___m_clickedTile_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_clickedTile_21), value);
	}

	inline static int32_t get_offset_of_m_targetTile_22() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_targetTile_22)); }
	inline Tile_t2634157908 * get_m_targetTile_22() const { return ___m_targetTile_22; }
	inline Tile_t2634157908 ** get_address_of_m_targetTile_22() { return &___m_targetTile_22; }
	inline void set_m_targetTile_22(Tile_t2634157908 * value)
	{
		___m_targetTile_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_targetTile_22), value);
	}

	inline static int32_t get_offset_of_m_playerInputEnabled_23() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_playerInputEnabled_23)); }
	inline bool get_m_playerInputEnabled_23() const { return ___m_playerInputEnabled_23; }
	inline bool* get_address_of_m_playerInputEnabled_23() { return &___m_playerInputEnabled_23; }
	inline void set_m_playerInputEnabled_23(bool value)
	{
		___m_playerInputEnabled_23 = value;
	}

	inline static int32_t get_offset_of_startingTiles_24() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___startingTiles_24)); }
	inline StartingObjectU5BU5D_t3554278542* get_startingTiles_24() const { return ___startingTiles_24; }
	inline StartingObjectU5BU5D_t3554278542** get_address_of_startingTiles_24() { return &___startingTiles_24; }
	inline void set_startingTiles_24(StartingObjectU5BU5D_t3554278542* value)
	{
		___startingTiles_24 = value;
		Il2CppCodeGenWriteBarrier((&___startingTiles_24), value);
	}

	inline static int32_t get_offset_of_startingGamePieces_25() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___startingGamePieces_25)); }
	inline StartingObjectU5BU5D_t3554278542* get_startingGamePieces_25() const { return ___startingGamePieces_25; }
	inline StartingObjectU5BU5D_t3554278542** get_address_of_startingGamePieces_25() { return &___startingGamePieces_25; }
	inline void set_startingGamePieces_25(StartingObjectU5BU5D_t3554278542* value)
	{
		___startingGamePieces_25 = value;
		Il2CppCodeGenWriteBarrier((&___startingGamePieces_25), value);
	}

	inline static int32_t get_offset_of_m_particleManager_26() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_particleManager_26)); }
	inline ParticleManager_t4052332083 * get_m_particleManager_26() const { return ___m_particleManager_26; }
	inline ParticleManager_t4052332083 ** get_address_of_m_particleManager_26() { return &___m_particleManager_26; }
	inline void set_m_particleManager_26(ParticleManager_t4052332083 * value)
	{
		___m_particleManager_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_particleManager_26), value);
	}

	inline static int32_t get_offset_of_fillYOffset_27() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___fillYOffset_27)); }
	inline int32_t get_fillYOffset_27() const { return ___fillYOffset_27; }
	inline int32_t* get_address_of_fillYOffset_27() { return &___fillYOffset_27; }
	inline void set_fillYOffset_27(int32_t value)
	{
		___fillYOffset_27 = value;
	}

	inline static int32_t get_offset_of_fillMoveTime_28() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___fillMoveTime_28)); }
	inline float get_fillMoveTime_28() const { return ___fillMoveTime_28; }
	inline float* get_address_of_fillMoveTime_28() { return &___fillMoveTime_28; }
	inline void set_fillMoveTime_28(float value)
	{
		___fillMoveTime_28 = value;
	}

	inline static int32_t get_offset_of_m_scoreMultiplier_29() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_scoreMultiplier_29)); }
	inline int32_t get_m_scoreMultiplier_29() const { return ___m_scoreMultiplier_29; }
	inline int32_t* get_address_of_m_scoreMultiplier_29() { return &___m_scoreMultiplier_29; }
	inline void set_m_scoreMultiplier_29(int32_t value)
	{
		___m_scoreMultiplier_29 = value;
	}

	inline static int32_t get_offset_of_isRefilling_30() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___isRefilling_30)); }
	inline bool get_isRefilling_30() const { return ___isRefilling_30; }
	inline bool* get_address_of_isRefilling_30() { return &___isRefilling_30; }
	inline void set_isRefilling_30(bool value)
	{
		___isRefilling_30 = value;
	}

	inline static int32_t get_offset_of_m_boardDeadlock_31() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_boardDeadlock_31)); }
	inline BoardDeadlock_t1667041069 * get_m_boardDeadlock_31() const { return ___m_boardDeadlock_31; }
	inline BoardDeadlock_t1667041069 ** get_address_of_m_boardDeadlock_31() { return &___m_boardDeadlock_31; }
	inline void set_m_boardDeadlock_31(BoardDeadlock_t1667041069 * value)
	{
		___m_boardDeadlock_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_boardDeadlock_31), value);
	}

	inline static int32_t get_offset_of_m_boardShuffler_32() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_boardShuffler_32)); }
	inline BoardShuffler_t56952400 * get_m_boardShuffler_32() const { return ___m_boardShuffler_32; }
	inline BoardShuffler_t56952400 ** get_address_of_m_boardShuffler_32() { return &___m_boardShuffler_32; }
	inline void set_m_boardShuffler_32(BoardShuffler_t56952400 * value)
	{
		___m_boardShuffler_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_boardShuffler_32), value);
	}

	inline static int32_t get_offset_of_m_levelGoal_33() { return static_cast<int32_t>(offsetof(Board_t3688305287, ___m_levelGoal_33)); }
	inline LevelGoal_t786700456 * get_m_levelGoal_33() const { return ___m_levelGoal_33; }
	inline LevelGoal_t786700456 ** get_address_of_m_levelGoal_33() { return &___m_levelGoal_33; }
	inline void set_m_levelGoal_33(LevelGoal_t786700456 * value)
	{
		___m_levelGoal_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_levelGoal_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARD_T3688305287_H
#ifndef SINGLETON_1_T3279175804_H
#define SINGLETON_1_T3279175804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<SoundManager>
struct  Singleton_1_t3279175804  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t3279175804_StaticFields
{
public:
	// T Singleton`1::m_instance
	SoundManager_t2102329059 * ___m_instance_2;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t3279175804_StaticFields, ___m_instance_2)); }
	inline SoundManager_t2102329059 * get_m_instance_2() const { return ___m_instance_2; }
	inline SoundManager_t2102329059 ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(SoundManager_t2102329059 * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T3279175804_H
#ifndef TILE_T2634157908_H
#define TILE_T2634157908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2634157908  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Tile::xIndex
	int32_t ___xIndex_2;
	// System.Int32 Tile::yIndex
	int32_t ___yIndex_3;
	// TileType Tile::tileType
	int32_t ___tileType_4;
	// Board Tile::m_board
	Board_t3688305287 * ___m_board_5;
	// UnityEngine.SpriteRenderer Tile::m_spriteRenderer
	SpriteRenderer_t3235626157 * ___m_spriteRenderer_6;
	// UnityEngine.Color Tile::normalColor
	Color_t2555686324  ___normalColor_7;
	// System.Int32 Tile::breakableValue
	int32_t ___breakableValue_8;
	// UnityEngine.Sprite[] Tile::breakableSprites
	SpriteU5BU5D_t2581906349* ___breakableSprites_9;

public:
	inline static int32_t get_offset_of_xIndex_2() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___xIndex_2)); }
	inline int32_t get_xIndex_2() const { return ___xIndex_2; }
	inline int32_t* get_address_of_xIndex_2() { return &___xIndex_2; }
	inline void set_xIndex_2(int32_t value)
	{
		___xIndex_2 = value;
	}

	inline static int32_t get_offset_of_yIndex_3() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___yIndex_3)); }
	inline int32_t get_yIndex_3() const { return ___yIndex_3; }
	inline int32_t* get_address_of_yIndex_3() { return &___yIndex_3; }
	inline void set_yIndex_3(int32_t value)
	{
		___yIndex_3 = value;
	}

	inline static int32_t get_offset_of_tileType_4() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___tileType_4)); }
	inline int32_t get_tileType_4() const { return ___tileType_4; }
	inline int32_t* get_address_of_tileType_4() { return &___tileType_4; }
	inline void set_tileType_4(int32_t value)
	{
		___tileType_4 = value;
	}

	inline static int32_t get_offset_of_m_board_5() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___m_board_5)); }
	inline Board_t3688305287 * get_m_board_5() const { return ___m_board_5; }
	inline Board_t3688305287 ** get_address_of_m_board_5() { return &___m_board_5; }
	inline void set_m_board_5(Board_t3688305287 * value)
	{
		___m_board_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_board_5), value);
	}

	inline static int32_t get_offset_of_m_spriteRenderer_6() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___m_spriteRenderer_6)); }
	inline SpriteRenderer_t3235626157 * get_m_spriteRenderer_6() const { return ___m_spriteRenderer_6; }
	inline SpriteRenderer_t3235626157 ** get_address_of_m_spriteRenderer_6() { return &___m_spriteRenderer_6; }
	inline void set_m_spriteRenderer_6(SpriteRenderer_t3235626157 * value)
	{
		___m_spriteRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteRenderer_6), value);
	}

	inline static int32_t get_offset_of_normalColor_7() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___normalColor_7)); }
	inline Color_t2555686324  get_normalColor_7() const { return ___normalColor_7; }
	inline Color_t2555686324 * get_address_of_normalColor_7() { return &___normalColor_7; }
	inline void set_normalColor_7(Color_t2555686324  value)
	{
		___normalColor_7 = value;
	}

	inline static int32_t get_offset_of_breakableValue_8() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___breakableValue_8)); }
	inline int32_t get_breakableValue_8() const { return ___breakableValue_8; }
	inline int32_t* get_address_of_breakableValue_8() { return &___breakableValue_8; }
	inline void set_breakableValue_8(int32_t value)
	{
		___breakableValue_8 = value;
	}

	inline static int32_t get_offset_of_breakableSprites_9() { return static_cast<int32_t>(offsetof(Tile_t2634157908, ___breakableSprites_9)); }
	inline SpriteU5BU5D_t2581906349* get_breakableSprites_9() const { return ___breakableSprites_9; }
	inline SpriteU5BU5D_t2581906349** get_address_of_breakableSprites_9() { return &___breakableSprites_9; }
	inline void set_breakableSprites_9(SpriteU5BU5D_t2581906349* value)
	{
		___breakableSprites_9 = value;
		Il2CppCodeGenWriteBarrier((&___breakableSprites_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILE_T2634157908_H
#ifndef GAMEPIECE_T2515063641_H
#define GAMEPIECE_T2515063641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePiece
struct  GamePiece_t2515063641  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 GamePiece::xIndex
	int32_t ___xIndex_2;
	// System.Int32 GamePiece::yIndex
	int32_t ___yIndex_3;
	// System.Boolean GamePiece::m_isMoving
	bool ___m_isMoving_4;
	// Board GamePiece::m_board
	Board_t3688305287 * ___m_board_5;
	// GamePiece/InterpType GamePiece::interpolation
	int32_t ___interpolation_6;
	// MatchValue GamePiece::matchValue
	int32_t ___matchValue_7;
	// System.Int32 GamePiece::scoreValue
	int32_t ___scoreValue_8;
	// UnityEngine.AudioClip GamePiece::clearSound
	AudioClip_t3680889665 * ___clearSound_9;

public:
	inline static int32_t get_offset_of_xIndex_2() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___xIndex_2)); }
	inline int32_t get_xIndex_2() const { return ___xIndex_2; }
	inline int32_t* get_address_of_xIndex_2() { return &___xIndex_2; }
	inline void set_xIndex_2(int32_t value)
	{
		___xIndex_2 = value;
	}

	inline static int32_t get_offset_of_yIndex_3() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___yIndex_3)); }
	inline int32_t get_yIndex_3() const { return ___yIndex_3; }
	inline int32_t* get_address_of_yIndex_3() { return &___yIndex_3; }
	inline void set_yIndex_3(int32_t value)
	{
		___yIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_isMoving_4() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___m_isMoving_4)); }
	inline bool get_m_isMoving_4() const { return ___m_isMoving_4; }
	inline bool* get_address_of_m_isMoving_4() { return &___m_isMoving_4; }
	inline void set_m_isMoving_4(bool value)
	{
		___m_isMoving_4 = value;
	}

	inline static int32_t get_offset_of_m_board_5() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___m_board_5)); }
	inline Board_t3688305287 * get_m_board_5() const { return ___m_board_5; }
	inline Board_t3688305287 ** get_address_of_m_board_5() { return &___m_board_5; }
	inline void set_m_board_5(Board_t3688305287 * value)
	{
		___m_board_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_board_5), value);
	}

	inline static int32_t get_offset_of_interpolation_6() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___interpolation_6)); }
	inline int32_t get_interpolation_6() const { return ___interpolation_6; }
	inline int32_t* get_address_of_interpolation_6() { return &___interpolation_6; }
	inline void set_interpolation_6(int32_t value)
	{
		___interpolation_6 = value;
	}

	inline static int32_t get_offset_of_matchValue_7() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___matchValue_7)); }
	inline int32_t get_matchValue_7() const { return ___matchValue_7; }
	inline int32_t* get_address_of_matchValue_7() { return &___matchValue_7; }
	inline void set_matchValue_7(int32_t value)
	{
		___matchValue_7 = value;
	}

	inline static int32_t get_offset_of_scoreValue_8() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___scoreValue_8)); }
	inline int32_t get_scoreValue_8() const { return ___scoreValue_8; }
	inline int32_t* get_address_of_scoreValue_8() { return &___scoreValue_8; }
	inline void set_scoreValue_8(int32_t value)
	{
		___scoreValue_8 = value;
	}

	inline static int32_t get_offset_of_clearSound_9() { return static_cast<int32_t>(offsetof(GamePiece_t2515063641, ___clearSound_9)); }
	inline AudioClip_t3680889665 * get_clearSound_9() const { return ___clearSound_9; }
	inline AudioClip_t3680889665 ** get_address_of_clearSound_9() { return &___clearSound_9; }
	inline void set_clearSound_9(AudioClip_t3680889665 * value)
	{
		___clearSound_9 = value;
		Il2CppCodeGenWriteBarrier((&___clearSound_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPIECE_T2515063641_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SINGLETON_1_T1963547201_H
#define SINGLETON_1_T1963547201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<LevelGoal>
struct  Singleton_1_t1963547201  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t1963547201_StaticFields
{
public:
	// T Singleton`1::m_instance
	LevelGoal_t786700456 * ___m_instance_2;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t1963547201_StaticFields, ___m_instance_2)); }
	inline LevelGoal_t786700456 * get_m_instance_2() const { return ___m_instance_2; }
	inline LevelGoal_t786700456 ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(LevelGoal_t786700456 * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T1963547201_H
#ifndef TIMER_T4185932343_H
#define TIMER_T4185932343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t4185932343  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text Timer::timeLeftText
	Text_t1901882714 * ___timeLeftText_2;
	// UnityEngine.UI.Image Timer::clockImage
	Image_t2670269651 * ___clockImage_3;
	// System.Int32 Timer::m_maxTime
	int32_t ___m_maxTime_4;
	// System.Boolean Timer::paused
	bool ___paused_5;
	// System.Int32 Timer::flashTimerLimit
	int32_t ___flashTimerLimit_6;
	// UnityEngine.AudioClip Timer::flashBeep
	AudioClip_t3680889665 * ___flashBeep_7;
	// System.Single Timer::flashInterval
	float ___flashInterval_8;
	// UnityEngine.Color Timer::flashColor
	Color_t2555686324  ___flashColor_9;
	// System.Collections.IEnumerator Timer::m_flashRoutine
	RuntimeObject* ___m_flashRoutine_10;

public:
	inline static int32_t get_offset_of_timeLeftText_2() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___timeLeftText_2)); }
	inline Text_t1901882714 * get_timeLeftText_2() const { return ___timeLeftText_2; }
	inline Text_t1901882714 ** get_address_of_timeLeftText_2() { return &___timeLeftText_2; }
	inline void set_timeLeftText_2(Text_t1901882714 * value)
	{
		___timeLeftText_2 = value;
		Il2CppCodeGenWriteBarrier((&___timeLeftText_2), value);
	}

	inline static int32_t get_offset_of_clockImage_3() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___clockImage_3)); }
	inline Image_t2670269651 * get_clockImage_3() const { return ___clockImage_3; }
	inline Image_t2670269651 ** get_address_of_clockImage_3() { return &___clockImage_3; }
	inline void set_clockImage_3(Image_t2670269651 * value)
	{
		___clockImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___clockImage_3), value);
	}

	inline static int32_t get_offset_of_m_maxTime_4() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___m_maxTime_4)); }
	inline int32_t get_m_maxTime_4() const { return ___m_maxTime_4; }
	inline int32_t* get_address_of_m_maxTime_4() { return &___m_maxTime_4; }
	inline void set_m_maxTime_4(int32_t value)
	{
		___m_maxTime_4 = value;
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___paused_5)); }
	inline bool get_paused_5() const { return ___paused_5; }
	inline bool* get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(bool value)
	{
		___paused_5 = value;
	}

	inline static int32_t get_offset_of_flashTimerLimit_6() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___flashTimerLimit_6)); }
	inline int32_t get_flashTimerLimit_6() const { return ___flashTimerLimit_6; }
	inline int32_t* get_address_of_flashTimerLimit_6() { return &___flashTimerLimit_6; }
	inline void set_flashTimerLimit_6(int32_t value)
	{
		___flashTimerLimit_6 = value;
	}

	inline static int32_t get_offset_of_flashBeep_7() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___flashBeep_7)); }
	inline AudioClip_t3680889665 * get_flashBeep_7() const { return ___flashBeep_7; }
	inline AudioClip_t3680889665 ** get_address_of_flashBeep_7() { return &___flashBeep_7; }
	inline void set_flashBeep_7(AudioClip_t3680889665 * value)
	{
		___flashBeep_7 = value;
		Il2CppCodeGenWriteBarrier((&___flashBeep_7), value);
	}

	inline static int32_t get_offset_of_flashInterval_8() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___flashInterval_8)); }
	inline float get_flashInterval_8() const { return ___flashInterval_8; }
	inline float* get_address_of_flashInterval_8() { return &___flashInterval_8; }
	inline void set_flashInterval_8(float value)
	{
		___flashInterval_8 = value;
	}

	inline static int32_t get_offset_of_flashColor_9() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___flashColor_9)); }
	inline Color_t2555686324  get_flashColor_9() const { return ___flashColor_9; }
	inline Color_t2555686324 * get_address_of_flashColor_9() { return &___flashColor_9; }
	inline void set_flashColor_9(Color_t2555686324  value)
	{
		___flashColor_9 = value;
	}

	inline static int32_t get_offset_of_m_flashRoutine_10() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___m_flashRoutine_10)); }
	inline RuntimeObject* get_m_flashRoutine_10() const { return ___m_flashRoutine_10; }
	inline RuntimeObject** get_address_of_m_flashRoutine_10() { return &___m_flashRoutine_10; }
	inline void set_m_flashRoutine_10(RuntimeObject* value)
	{
		___m_flashRoutine_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_flashRoutine_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H
#ifndef SCREENFADER_T840564778_H
#define SCREENFADER_T840564778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFader
struct  ScreenFader_t840564778  : public MonoBehaviour_t3962482529
{
public:
	// System.Single ScreenFader::solidAlpha
	float ___solidAlpha_2;
	// System.Single ScreenFader::clearAlpha
	float ___clearAlpha_3;
	// System.Single ScreenFader::delay
	float ___delay_4;
	// System.Single ScreenFader::timeToFade
	float ___timeToFade_5;
	// UnityEngine.UI.MaskableGraphic ScreenFader::m_graphic
	MaskableGraphic_t3839221559 * ___m_graphic_6;

public:
	inline static int32_t get_offset_of_solidAlpha_2() { return static_cast<int32_t>(offsetof(ScreenFader_t840564778, ___solidAlpha_2)); }
	inline float get_solidAlpha_2() const { return ___solidAlpha_2; }
	inline float* get_address_of_solidAlpha_2() { return &___solidAlpha_2; }
	inline void set_solidAlpha_2(float value)
	{
		___solidAlpha_2 = value;
	}

	inline static int32_t get_offset_of_clearAlpha_3() { return static_cast<int32_t>(offsetof(ScreenFader_t840564778, ___clearAlpha_3)); }
	inline float get_clearAlpha_3() const { return ___clearAlpha_3; }
	inline float* get_address_of_clearAlpha_3() { return &___clearAlpha_3; }
	inline void set_clearAlpha_3(float value)
	{
		___clearAlpha_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(ScreenFader_t840564778, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_timeToFade_5() { return static_cast<int32_t>(offsetof(ScreenFader_t840564778, ___timeToFade_5)); }
	inline float get_timeToFade_5() const { return ___timeToFade_5; }
	inline float* get_address_of_timeToFade_5() { return &___timeToFade_5; }
	inline void set_timeToFade_5(float value)
	{
		___timeToFade_5 = value;
	}

	inline static int32_t get_offset_of_m_graphic_6() { return static_cast<int32_t>(offsetof(ScreenFader_t840564778, ___m_graphic_6)); }
	inline MaskableGraphic_t3839221559 * get_m_graphic_6() const { return ___m_graphic_6; }
	inline MaskableGraphic_t3839221559 ** get_address_of_m_graphic_6() { return &___m_graphic_6; }
	inline void set_m_graphic_6(MaskableGraphic_t3839221559 * value)
	{
		___m_graphic_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_graphic_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENFADER_T840564778_H
#ifndef RECTXFORMMOVER_T3830425495_H
#define RECTXFORMMOVER_T3830425495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RectXFormMover
struct  RectXFormMover_t3830425495  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 RectXFormMover::startPosition
	Vector3_t3722313464  ___startPosition_2;
	// UnityEngine.Vector3 RectXFormMover::onScreenPosition
	Vector3_t3722313464  ___onScreenPosition_3;
	// UnityEngine.Vector3 RectXFormMover::endPosition
	Vector3_t3722313464  ___endPosition_4;
	// System.Single RectXFormMover::timeToMove
	float ___timeToMove_5;
	// UnityEngine.RectTransform RectXFormMover::m_rectXForm
	RectTransform_t3704657025 * ___m_rectXForm_6;
	// System.Boolean RectXFormMover::m_isMoving
	bool ___m_isMoving_7;

public:
	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(RectXFormMover_t3830425495, ___startPosition_2)); }
	inline Vector3_t3722313464  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector3_t3722313464 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector3_t3722313464  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_onScreenPosition_3() { return static_cast<int32_t>(offsetof(RectXFormMover_t3830425495, ___onScreenPosition_3)); }
	inline Vector3_t3722313464  get_onScreenPosition_3() const { return ___onScreenPosition_3; }
	inline Vector3_t3722313464 * get_address_of_onScreenPosition_3() { return &___onScreenPosition_3; }
	inline void set_onScreenPosition_3(Vector3_t3722313464  value)
	{
		___onScreenPosition_3 = value;
	}

	inline static int32_t get_offset_of_endPosition_4() { return static_cast<int32_t>(offsetof(RectXFormMover_t3830425495, ___endPosition_4)); }
	inline Vector3_t3722313464  get_endPosition_4() const { return ___endPosition_4; }
	inline Vector3_t3722313464 * get_address_of_endPosition_4() { return &___endPosition_4; }
	inline void set_endPosition_4(Vector3_t3722313464  value)
	{
		___endPosition_4 = value;
	}

	inline static int32_t get_offset_of_timeToMove_5() { return static_cast<int32_t>(offsetof(RectXFormMover_t3830425495, ___timeToMove_5)); }
	inline float get_timeToMove_5() const { return ___timeToMove_5; }
	inline float* get_address_of_timeToMove_5() { return &___timeToMove_5; }
	inline void set_timeToMove_5(float value)
	{
		___timeToMove_5 = value;
	}

	inline static int32_t get_offset_of_m_rectXForm_6() { return static_cast<int32_t>(offsetof(RectXFormMover_t3830425495, ___m_rectXForm_6)); }
	inline RectTransform_t3704657025 * get_m_rectXForm_6() const { return ___m_rectXForm_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_rectXForm_6() { return &___m_rectXForm_6; }
	inline void set_m_rectXForm_6(RectTransform_t3704657025 * value)
	{
		___m_rectXForm_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_rectXForm_6), value);
	}

	inline static int32_t get_offset_of_m_isMoving_7() { return static_cast<int32_t>(offsetof(RectXFormMover_t3830425495, ___m_isMoving_7)); }
	inline bool get_m_isMoving_7() const { return ___m_isMoving_7; }
	inline bool* get_address_of_m_isMoving_7() { return &___m_isMoving_7; }
	inline void set_m_isMoving_7(bool value)
	{
		___m_isMoving_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTXFORMMOVER_T3830425495_H
#ifndef MESSAGEWINDOW_T4170584992_H
#define MESSAGEWINDOW_T4170584992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessageWindow
struct  MessageWindow_t4170584992  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image MessageWindow::messageIcon
	Image_t2670269651 * ___messageIcon_2;
	// UnityEngine.UI.Text MessageWindow::messageText
	Text_t1901882714 * ___messageText_3;
	// UnityEngine.UI.Text MessageWindow::buttonText
	Text_t1901882714 * ___buttonText_4;

public:
	inline static int32_t get_offset_of_messageIcon_2() { return static_cast<int32_t>(offsetof(MessageWindow_t4170584992, ___messageIcon_2)); }
	inline Image_t2670269651 * get_messageIcon_2() const { return ___messageIcon_2; }
	inline Image_t2670269651 ** get_address_of_messageIcon_2() { return &___messageIcon_2; }
	inline void set_messageIcon_2(Image_t2670269651 * value)
	{
		___messageIcon_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageIcon_2), value);
	}

	inline static int32_t get_offset_of_messageText_3() { return static_cast<int32_t>(offsetof(MessageWindow_t4170584992, ___messageText_3)); }
	inline Text_t1901882714 * get_messageText_3() const { return ___messageText_3; }
	inline Text_t1901882714 ** get_address_of_messageText_3() { return &___messageText_3; }
	inline void set_messageText_3(Text_t1901882714 * value)
	{
		___messageText_3 = value;
		Il2CppCodeGenWriteBarrier((&___messageText_3), value);
	}

	inline static int32_t get_offset_of_buttonText_4() { return static_cast<int32_t>(offsetof(MessageWindow_t4170584992, ___buttonText_4)); }
	inline Text_t1901882714 * get_buttonText_4() const { return ___buttonText_4; }
	inline Text_t1901882714 ** get_address_of_buttonText_4() { return &___buttonText_4; }
	inline void set_buttonText_4(Text_t1901882714 * value)
	{
		___buttonText_4 = value;
		Il2CppCodeGenWriteBarrier((&___buttonText_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEWINDOW_T4170584992_H
#ifndef SCOREMETER_T2365063754_H
#define SCOREMETER_T2365063754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreMeter
struct  ScoreMeter_t2365063754  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Slider ScoreMeter::slider
	Slider_t3903728902 * ___slider_2;
	// ScoreStar[] ScoreMeter::scoreStars
	ScoreStarU5BU5D_t2250574351* ___scoreStars_3;
	// LevelGoal ScoreMeter::m_levelGoal
	LevelGoal_t786700456 * ___m_levelGoal_4;
	// System.Int32 ScoreMeter::m_maxScore
	int32_t ___m_maxScore_5;

public:
	inline static int32_t get_offset_of_slider_2() { return static_cast<int32_t>(offsetof(ScoreMeter_t2365063754, ___slider_2)); }
	inline Slider_t3903728902 * get_slider_2() const { return ___slider_2; }
	inline Slider_t3903728902 ** get_address_of_slider_2() { return &___slider_2; }
	inline void set_slider_2(Slider_t3903728902 * value)
	{
		___slider_2 = value;
		Il2CppCodeGenWriteBarrier((&___slider_2), value);
	}

	inline static int32_t get_offset_of_scoreStars_3() { return static_cast<int32_t>(offsetof(ScoreMeter_t2365063754, ___scoreStars_3)); }
	inline ScoreStarU5BU5D_t2250574351* get_scoreStars_3() const { return ___scoreStars_3; }
	inline ScoreStarU5BU5D_t2250574351** get_address_of_scoreStars_3() { return &___scoreStars_3; }
	inline void set_scoreStars_3(ScoreStarU5BU5D_t2250574351* value)
	{
		___scoreStars_3 = value;
		Il2CppCodeGenWriteBarrier((&___scoreStars_3), value);
	}

	inline static int32_t get_offset_of_m_levelGoal_4() { return static_cast<int32_t>(offsetof(ScoreMeter_t2365063754, ___m_levelGoal_4)); }
	inline LevelGoal_t786700456 * get_m_levelGoal_4() const { return ___m_levelGoal_4; }
	inline LevelGoal_t786700456 ** get_address_of_m_levelGoal_4() { return &___m_levelGoal_4; }
	inline void set_m_levelGoal_4(LevelGoal_t786700456 * value)
	{
		___m_levelGoal_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_levelGoal_4), value);
	}

	inline static int32_t get_offset_of_m_maxScore_5() { return static_cast<int32_t>(offsetof(ScoreMeter_t2365063754, ___m_maxScore_5)); }
	inline int32_t get_m_maxScore_5() const { return ___m_maxScore_5; }
	inline int32_t* get_address_of_m_maxScore_5() { return &___m_maxScore_5; }
	inline void set_m_maxScore_5(int32_t value)
	{
		___m_maxScore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOREMETER_T2365063754_H
#ifndef SINGLETON_1_T2713370399_H
#define SINGLETON_1_T2713370399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<GameManager>
struct  Singleton_1_t2713370399  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t2713370399_StaticFields
{
public:
	// T Singleton`1::m_instance
	GameManager_t1536523654 * ___m_instance_2;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2713370399_StaticFields, ___m_instance_2)); }
	inline GameManager_t1536523654 * get_m_instance_2() const { return ___m_instance_2; }
	inline GameManager_t1536523654 ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(GameManager_t1536523654 * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T2713370399_H
#ifndef FINISHEDGAMEMESSAGEWINDOW_T436455232_H
#define FINISHEDGAMEMESSAGEWINDOW_T436455232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinishedGameMessageWindow
struct  FinishedGameMessageWindow_t436455232  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image FinishedGameMessageWindow::messageIcon
	Image_t2670269651 * ___messageIcon_2;
	// UnityEngine.UI.Text FinishedGameMessageWindow::messageText
	Text_t1901882714 * ___messageText_3;
	// UnityEngine.UI.Text FinishedGameMessageWindow::buttonText
	Text_t1901882714 * ___buttonText_4;

public:
	inline static int32_t get_offset_of_messageIcon_2() { return static_cast<int32_t>(offsetof(FinishedGameMessageWindow_t436455232, ___messageIcon_2)); }
	inline Image_t2670269651 * get_messageIcon_2() const { return ___messageIcon_2; }
	inline Image_t2670269651 ** get_address_of_messageIcon_2() { return &___messageIcon_2; }
	inline void set_messageIcon_2(Image_t2670269651 * value)
	{
		___messageIcon_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageIcon_2), value);
	}

	inline static int32_t get_offset_of_messageText_3() { return static_cast<int32_t>(offsetof(FinishedGameMessageWindow_t436455232, ___messageText_3)); }
	inline Text_t1901882714 * get_messageText_3() const { return ___messageText_3; }
	inline Text_t1901882714 ** get_address_of_messageText_3() { return &___messageText_3; }
	inline void set_messageText_3(Text_t1901882714 * value)
	{
		___messageText_3 = value;
		Il2CppCodeGenWriteBarrier((&___messageText_3), value);
	}

	inline static int32_t get_offset_of_buttonText_4() { return static_cast<int32_t>(offsetof(FinishedGameMessageWindow_t436455232, ___buttonText_4)); }
	inline Text_t1901882714 * get_buttonText_4() const { return ___buttonText_4; }
	inline Text_t1901882714 ** get_address_of_buttonText_4() { return &___buttonText_4; }
	inline void set_buttonText_4(Text_t1901882714 * value)
	{
		___buttonText_4 = value;
		Il2CppCodeGenWriteBarrier((&___buttonText_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHEDGAMEMESSAGEWINDOW_T436455232_H
#ifndef COLLECTIONGOAL_T2812378701_H
#define COLLECTIONGOAL_T2812378701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollectionGoal
struct  CollectionGoal_t2812378701  : public MonoBehaviour_t3962482529
{
public:
	// GamePiece CollectionGoal::prefabToCollect
	GamePiece_t2515063641 * ___prefabToCollect_2;
	// System.Int32 CollectionGoal::numberToCollect
	int32_t ___numberToCollect_3;
	// UnityEngine.SpriteRenderer CollectionGoal::m_spriteRenderer
	SpriteRenderer_t3235626157 * ___m_spriteRenderer_4;

public:
	inline static int32_t get_offset_of_prefabToCollect_2() { return static_cast<int32_t>(offsetof(CollectionGoal_t2812378701, ___prefabToCollect_2)); }
	inline GamePiece_t2515063641 * get_prefabToCollect_2() const { return ___prefabToCollect_2; }
	inline GamePiece_t2515063641 ** get_address_of_prefabToCollect_2() { return &___prefabToCollect_2; }
	inline void set_prefabToCollect_2(GamePiece_t2515063641 * value)
	{
		___prefabToCollect_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabToCollect_2), value);
	}

	inline static int32_t get_offset_of_numberToCollect_3() { return static_cast<int32_t>(offsetof(CollectionGoal_t2812378701, ___numberToCollect_3)); }
	inline int32_t get_numberToCollect_3() const { return ___numberToCollect_3; }
	inline int32_t* get_address_of_numberToCollect_3() { return &___numberToCollect_3; }
	inline void set_numberToCollect_3(int32_t value)
	{
		___numberToCollect_3 = value;
	}

	inline static int32_t get_offset_of_m_spriteRenderer_4() { return static_cast<int32_t>(offsetof(CollectionGoal_t2812378701, ___m_spriteRenderer_4)); }
	inline SpriteRenderer_t3235626157 * get_m_spriteRenderer_4() const { return ___m_spriteRenderer_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_m_spriteRenderer_4() { return &___m_spriteRenderer_4; }
	inline void set_m_spriteRenderer_4(SpriteRenderer_t3235626157 * value)
	{
		___m_spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteRenderer_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONGOAL_T2812378701_H
#ifndef TIMEBONUS_T1511394491_H
#define TIMEBONUS_T1511394491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeBonus
struct  TimeBonus_t1511394491  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 TimeBonus::bonusValue
	int32_t ___bonusValue_2;
	// System.Single TimeBonus::chanceForBonus
	float ___chanceForBonus_3;
	// UnityEngine.GameObject TimeBonus::bonusGlow
	GameObject_t1113636619 * ___bonusGlow_4;
	// UnityEngine.GameObject TimeBonus::ringGlow
	GameObject_t1113636619 * ___ringGlow_5;
	// UnityEngine.Material[] TimeBonus::bonusMaterials
	MaterialU5BU5D_t561872642* ___bonusMaterials_6;

public:
	inline static int32_t get_offset_of_bonusValue_2() { return static_cast<int32_t>(offsetof(TimeBonus_t1511394491, ___bonusValue_2)); }
	inline int32_t get_bonusValue_2() const { return ___bonusValue_2; }
	inline int32_t* get_address_of_bonusValue_2() { return &___bonusValue_2; }
	inline void set_bonusValue_2(int32_t value)
	{
		___bonusValue_2 = value;
	}

	inline static int32_t get_offset_of_chanceForBonus_3() { return static_cast<int32_t>(offsetof(TimeBonus_t1511394491, ___chanceForBonus_3)); }
	inline float get_chanceForBonus_3() const { return ___chanceForBonus_3; }
	inline float* get_address_of_chanceForBonus_3() { return &___chanceForBonus_3; }
	inline void set_chanceForBonus_3(float value)
	{
		___chanceForBonus_3 = value;
	}

	inline static int32_t get_offset_of_bonusGlow_4() { return static_cast<int32_t>(offsetof(TimeBonus_t1511394491, ___bonusGlow_4)); }
	inline GameObject_t1113636619 * get_bonusGlow_4() const { return ___bonusGlow_4; }
	inline GameObject_t1113636619 ** get_address_of_bonusGlow_4() { return &___bonusGlow_4; }
	inline void set_bonusGlow_4(GameObject_t1113636619 * value)
	{
		___bonusGlow_4 = value;
		Il2CppCodeGenWriteBarrier((&___bonusGlow_4), value);
	}

	inline static int32_t get_offset_of_ringGlow_5() { return static_cast<int32_t>(offsetof(TimeBonus_t1511394491, ___ringGlow_5)); }
	inline GameObject_t1113636619 * get_ringGlow_5() const { return ___ringGlow_5; }
	inline GameObject_t1113636619 ** get_address_of_ringGlow_5() { return &___ringGlow_5; }
	inline void set_ringGlow_5(GameObject_t1113636619 * value)
	{
		___ringGlow_5 = value;
		Il2CppCodeGenWriteBarrier((&___ringGlow_5), value);
	}

	inline static int32_t get_offset_of_bonusMaterials_6() { return static_cast<int32_t>(offsetof(TimeBonus_t1511394491, ___bonusMaterials_6)); }
	inline MaterialU5BU5D_t561872642* get_bonusMaterials_6() const { return ___bonusMaterials_6; }
	inline MaterialU5BU5D_t561872642** get_address_of_bonusMaterials_6() { return &___bonusMaterials_6; }
	inline void set_bonusMaterials_6(MaterialU5BU5D_t561872642* value)
	{
		___bonusMaterials_6 = value;
		Il2CppCodeGenWriteBarrier((&___bonusMaterials_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEBONUS_T1511394491_H
#ifndef SINGLETON_1_T503204552_H
#define SINGLETON_1_T503204552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<ScoreManager>
struct  Singleton_1_t503204552  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t503204552_StaticFields
{
public:
	// T Singleton`1::m_instance
	ScoreManager_t3621325103 * ___m_instance_2;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t503204552_StaticFields, ___m_instance_2)); }
	inline ScoreManager_t3621325103 * get_m_instance_2() const { return ___m_instance_2; }
	inline ScoreManager_t3621325103 ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(ScoreManager_t3621325103 * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T503204552_H
#ifndef PARTICLEMANAGER_T4052332083_H
#define PARTICLEMANAGER_T4052332083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleManager
struct  ParticleManager_t4052332083  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ParticleManager::clearFXPrefab
	GameObject_t1113636619 * ___clearFXPrefab_2;
	// UnityEngine.GameObject ParticleManager::breakFXPrefab
	GameObject_t1113636619 * ___breakFXPrefab_3;
	// UnityEngine.GameObject ParticleManager::doubleBreakFXPrefab
	GameObject_t1113636619 * ___doubleBreakFXPrefab_4;
	// UnityEngine.GameObject ParticleManager::bombFXPrefab
	GameObject_t1113636619 * ___bombFXPrefab_5;

public:
	inline static int32_t get_offset_of_clearFXPrefab_2() { return static_cast<int32_t>(offsetof(ParticleManager_t4052332083, ___clearFXPrefab_2)); }
	inline GameObject_t1113636619 * get_clearFXPrefab_2() const { return ___clearFXPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_clearFXPrefab_2() { return &___clearFXPrefab_2; }
	inline void set_clearFXPrefab_2(GameObject_t1113636619 * value)
	{
		___clearFXPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___clearFXPrefab_2), value);
	}

	inline static int32_t get_offset_of_breakFXPrefab_3() { return static_cast<int32_t>(offsetof(ParticleManager_t4052332083, ___breakFXPrefab_3)); }
	inline GameObject_t1113636619 * get_breakFXPrefab_3() const { return ___breakFXPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_breakFXPrefab_3() { return &___breakFXPrefab_3; }
	inline void set_breakFXPrefab_3(GameObject_t1113636619 * value)
	{
		___breakFXPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___breakFXPrefab_3), value);
	}

	inline static int32_t get_offset_of_doubleBreakFXPrefab_4() { return static_cast<int32_t>(offsetof(ParticleManager_t4052332083, ___doubleBreakFXPrefab_4)); }
	inline GameObject_t1113636619 * get_doubleBreakFXPrefab_4() const { return ___doubleBreakFXPrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_doubleBreakFXPrefab_4() { return &___doubleBreakFXPrefab_4; }
	inline void set_doubleBreakFXPrefab_4(GameObject_t1113636619 * value)
	{
		___doubleBreakFXPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___doubleBreakFXPrefab_4), value);
	}

	inline static int32_t get_offset_of_bombFXPrefab_5() { return static_cast<int32_t>(offsetof(ParticleManager_t4052332083, ___bombFXPrefab_5)); }
	inline GameObject_t1113636619 * get_bombFXPrefab_5() const { return ___bombFXPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_bombFXPrefab_5() { return &___bombFXPrefab_5; }
	inline void set_bombFXPrefab_5(GameObject_t1113636619 * value)
	{
		___bombFXPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___bombFXPrefab_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLEMANAGER_T4052332083_H
#ifndef BOARDSHUFFLER_T56952400_H
#define BOARDSHUFFLER_T56952400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardShuffler
struct  BoardShuffler_t56952400  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARDSHUFFLER_T56952400_H
#ifndef PARTICLEPLAYER_T339043229_H
#define PARTICLEPLAYER_T339043229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticlePlayer
struct  ParticlePlayer_t339043229  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ParticleSystem[] ParticlePlayer::allParticles
	ParticleSystemU5BU5D_t3089334924* ___allParticles_2;
	// System.Single ParticlePlayer::lifetime
	float ___lifetime_3;
	// System.Boolean ParticlePlayer::destroyImmediately
	bool ___destroyImmediately_4;

public:
	inline static int32_t get_offset_of_allParticles_2() { return static_cast<int32_t>(offsetof(ParticlePlayer_t339043229, ___allParticles_2)); }
	inline ParticleSystemU5BU5D_t3089334924* get_allParticles_2() const { return ___allParticles_2; }
	inline ParticleSystemU5BU5D_t3089334924** get_address_of_allParticles_2() { return &___allParticles_2; }
	inline void set_allParticles_2(ParticleSystemU5BU5D_t3089334924* value)
	{
		___allParticles_2 = value;
		Il2CppCodeGenWriteBarrier((&___allParticles_2), value);
	}

	inline static int32_t get_offset_of_lifetime_3() { return static_cast<int32_t>(offsetof(ParticlePlayer_t339043229, ___lifetime_3)); }
	inline float get_lifetime_3() const { return ___lifetime_3; }
	inline float* get_address_of_lifetime_3() { return &___lifetime_3; }
	inline void set_lifetime_3(float value)
	{
		___lifetime_3 = value;
	}

	inline static int32_t get_offset_of_destroyImmediately_4() { return static_cast<int32_t>(offsetof(ParticlePlayer_t339043229, ___destroyImmediately_4)); }
	inline bool get_destroyImmediately_4() const { return ___destroyImmediately_4; }
	inline bool* get_address_of_destroyImmediately_4() { return &___destroyImmediately_4; }
	inline void set_destroyImmediately_4(bool value)
	{
		___destroyImmediately_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLEPLAYER_T339043229_H
#ifndef BOARDDEADLOCK_T1667041069_H
#define BOARDDEADLOCK_T1667041069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardDeadlock
struct  BoardDeadlock_t1667041069  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct BoardDeadlock_t1667041069_StaticFields
{
public:
	// System.Func`2<GamePiece,MatchValue> BoardDeadlock::<>f__am$cache0
	Func_2_t3228517195 * ___U3CU3Ef__amU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(BoardDeadlock_t1667041069_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t3228517195 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t3228517195 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t3228517195 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARDDEADLOCK_T1667041069_H
#ifndef SCORESTAR_T1530904714_H
#define SCORESTAR_T1530904714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreStar
struct  ScoreStar_t1530904714  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image ScoreStar::star
	Image_t2670269651 * ___star_2;
	// ParticlePlayer ScoreStar::starFX
	ParticlePlayer_t339043229 * ___starFX_3;
	// System.Single ScoreStar::delay
	float ___delay_4;
	// UnityEngine.AudioClip ScoreStar::starSound
	AudioClip_t3680889665 * ___starSound_5;
	// System.Boolean ScoreStar::activated
	bool ___activated_6;

public:
	inline static int32_t get_offset_of_star_2() { return static_cast<int32_t>(offsetof(ScoreStar_t1530904714, ___star_2)); }
	inline Image_t2670269651 * get_star_2() const { return ___star_2; }
	inline Image_t2670269651 ** get_address_of_star_2() { return &___star_2; }
	inline void set_star_2(Image_t2670269651 * value)
	{
		___star_2 = value;
		Il2CppCodeGenWriteBarrier((&___star_2), value);
	}

	inline static int32_t get_offset_of_starFX_3() { return static_cast<int32_t>(offsetof(ScoreStar_t1530904714, ___starFX_3)); }
	inline ParticlePlayer_t339043229 * get_starFX_3() const { return ___starFX_3; }
	inline ParticlePlayer_t339043229 ** get_address_of_starFX_3() { return &___starFX_3; }
	inline void set_starFX_3(ParticlePlayer_t339043229 * value)
	{
		___starFX_3 = value;
		Il2CppCodeGenWriteBarrier((&___starFX_3), value);
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(ScoreStar_t1530904714, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_starSound_5() { return static_cast<int32_t>(offsetof(ScoreStar_t1530904714, ___starSound_5)); }
	inline AudioClip_t3680889665 * get_starSound_5() const { return ___starSound_5; }
	inline AudioClip_t3680889665 ** get_address_of_starSound_5() { return &___starSound_5; }
	inline void set_starSound_5(AudioClip_t3680889665 * value)
	{
		___starSound_5 = value;
		Il2CppCodeGenWriteBarrier((&___starSound_5), value);
	}

	inline static int32_t get_offset_of_activated_6() { return static_cast<int32_t>(offsetof(ScoreStar_t1530904714, ___activated_6)); }
	inline bool get_activated_6() const { return ___activated_6; }
	inline bool* get_address_of_activated_6() { return &___activated_6; }
	inline void set_activated_6(bool value)
	{
		___activated_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORESTAR_T1530904714_H
#ifndef LEVELGOAL_T786700456_H
#define LEVELGOAL_T786700456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelGoal
struct  LevelGoal_t786700456  : public Singleton_1_t1963547201
{
public:
	// System.Int32 LevelGoal::scoreStars
	int32_t ___scoreStars_3;
	// System.Int32[] LevelGoal::scoreGoals
	Int32U5BU5D_t385246372* ___scoreGoals_4;
	// System.Int32 LevelGoal::movesLeft
	int32_t ___movesLeft_5;
	// System.Int32 LevelGoal::timeLeft
	int32_t ___timeLeft_6;

public:
	inline static int32_t get_offset_of_scoreStars_3() { return static_cast<int32_t>(offsetof(LevelGoal_t786700456, ___scoreStars_3)); }
	inline int32_t get_scoreStars_3() const { return ___scoreStars_3; }
	inline int32_t* get_address_of_scoreStars_3() { return &___scoreStars_3; }
	inline void set_scoreStars_3(int32_t value)
	{
		___scoreStars_3 = value;
	}

	inline static int32_t get_offset_of_scoreGoals_4() { return static_cast<int32_t>(offsetof(LevelGoal_t786700456, ___scoreGoals_4)); }
	inline Int32U5BU5D_t385246372* get_scoreGoals_4() const { return ___scoreGoals_4; }
	inline Int32U5BU5D_t385246372** get_address_of_scoreGoals_4() { return &___scoreGoals_4; }
	inline void set_scoreGoals_4(Int32U5BU5D_t385246372* value)
	{
		___scoreGoals_4 = value;
		Il2CppCodeGenWriteBarrier((&___scoreGoals_4), value);
	}

	inline static int32_t get_offset_of_movesLeft_5() { return static_cast<int32_t>(offsetof(LevelGoal_t786700456, ___movesLeft_5)); }
	inline int32_t get_movesLeft_5() const { return ___movesLeft_5; }
	inline int32_t* get_address_of_movesLeft_5() { return &___movesLeft_5; }
	inline void set_movesLeft_5(int32_t value)
	{
		___movesLeft_5 = value;
	}

	inline static int32_t get_offset_of_timeLeft_6() { return static_cast<int32_t>(offsetof(LevelGoal_t786700456, ___timeLeft_6)); }
	inline int32_t get_timeLeft_6() const { return ___timeLeft_6; }
	inline int32_t* get_address_of_timeLeft_6() { return &___timeLeft_6; }
	inline void set_timeLeft_6(int32_t value)
	{
		___timeLeft_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELGOAL_T786700456_H
#ifndef COLLECTIBLE_T2768877883_H
#define COLLECTIBLE_T2768877883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Collectible
struct  Collectible_t2768877883  : public GamePiece_t2515063641
{
public:
	// System.Boolean Collectible::clearedByBomb
	bool ___clearedByBomb_10;
	// System.Boolean Collectible::clearedAtBottom
	bool ___clearedAtBottom_11;

public:
	inline static int32_t get_offset_of_clearedByBomb_10() { return static_cast<int32_t>(offsetof(Collectible_t2768877883, ___clearedByBomb_10)); }
	inline bool get_clearedByBomb_10() const { return ___clearedByBomb_10; }
	inline bool* get_address_of_clearedByBomb_10() { return &___clearedByBomb_10; }
	inline void set_clearedByBomb_10(bool value)
	{
		___clearedByBomb_10 = value;
	}

	inline static int32_t get_offset_of_clearedAtBottom_11() { return static_cast<int32_t>(offsetof(Collectible_t2768877883, ___clearedAtBottom_11)); }
	inline bool get_clearedAtBottom_11() const { return ___clearedAtBottom_11; }
	inline bool* get_address_of_clearedAtBottom_11() { return &___clearedAtBottom_11; }
	inline void set_clearedAtBottom_11(bool value)
	{
		___clearedAtBottom_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIBLE_T2768877883_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public Singleton_1_t2713370399
{
public:
	// ScreenFader GameManager::screenFader
	ScreenFader_t840564778 * ___screenFader_3;
	// UnityEngine.UI.Text GameManager::levelNameText
	Text_t1901882714 * ___levelNameText_4;
	// UnityEngine.UI.Text GameManager::movesLeftText
	Text_t1901882714 * ___movesLeftText_5;
	// MessageWindow GameManager::messageWindow
	MessageWindow_t4170584992 * ___messageWindow_6;
	// MessageWindow GameManager::endLevelMessageWindow
	MessageWindow_t4170584992 * ___endLevelMessageWindow_7;
	// System.Boolean GameManager::m_isReadyToBegin
	bool ___m_isReadyToBegin_8;
	// System.Boolean GameManager::m_isGameOver
	bool ___m_isGameOver_9;
	// System.Boolean GameManager::m_isWinner
	bool ___m_isWinner_10;
	// System.Boolean GameManager::m_isReadyToReload
	bool ___m_isReadyToReload_11;
	// UnityEngine.Sprite GameManager::winIcon
	Sprite_t280657092 * ___winIcon_12;
	// UnityEngine.Sprite GameManager::loseIcon
	Sprite_t280657092 * ___loseIcon_13;
	// UnityEngine.Sprite GameManager::goalIcon
	Sprite_t280657092 * ___goalIcon_14;
	// ScoreMeter GameManager::scoreMeter
	ScoreMeter_t2365063754 * ___scoreMeter_15;
	// System.Int32 GameManager::activeScene
	int32_t ___activeScene_16;
	// System.Int32 GameManager::sceneCount
	int32_t ___sceneCount_17;
	// System.Int32 GameManager::nextLevel
	int32_t ___nextLevel_18;
	// Board GameManager::m_board
	Board_t3688305287 * ___m_board_19;
	// LevelGoal GameManager::m_levelGoal
	LevelGoal_t786700456 * ___m_levelGoal_20;
	// LevelGoalTimed GameManager::m_levelGoalTimed
	LevelGoalTimed_t3825364430 * ___m_levelGoalTimed_21;

public:
	inline static int32_t get_offset_of_screenFader_3() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___screenFader_3)); }
	inline ScreenFader_t840564778 * get_screenFader_3() const { return ___screenFader_3; }
	inline ScreenFader_t840564778 ** get_address_of_screenFader_3() { return &___screenFader_3; }
	inline void set_screenFader_3(ScreenFader_t840564778 * value)
	{
		___screenFader_3 = value;
		Il2CppCodeGenWriteBarrier((&___screenFader_3), value);
	}

	inline static int32_t get_offset_of_levelNameText_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___levelNameText_4)); }
	inline Text_t1901882714 * get_levelNameText_4() const { return ___levelNameText_4; }
	inline Text_t1901882714 ** get_address_of_levelNameText_4() { return &___levelNameText_4; }
	inline void set_levelNameText_4(Text_t1901882714 * value)
	{
		___levelNameText_4 = value;
		Il2CppCodeGenWriteBarrier((&___levelNameText_4), value);
	}

	inline static int32_t get_offset_of_movesLeftText_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___movesLeftText_5)); }
	inline Text_t1901882714 * get_movesLeftText_5() const { return ___movesLeftText_5; }
	inline Text_t1901882714 ** get_address_of_movesLeftText_5() { return &___movesLeftText_5; }
	inline void set_movesLeftText_5(Text_t1901882714 * value)
	{
		___movesLeftText_5 = value;
		Il2CppCodeGenWriteBarrier((&___movesLeftText_5), value);
	}

	inline static int32_t get_offset_of_messageWindow_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___messageWindow_6)); }
	inline MessageWindow_t4170584992 * get_messageWindow_6() const { return ___messageWindow_6; }
	inline MessageWindow_t4170584992 ** get_address_of_messageWindow_6() { return &___messageWindow_6; }
	inline void set_messageWindow_6(MessageWindow_t4170584992 * value)
	{
		___messageWindow_6 = value;
		Il2CppCodeGenWriteBarrier((&___messageWindow_6), value);
	}

	inline static int32_t get_offset_of_endLevelMessageWindow_7() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___endLevelMessageWindow_7)); }
	inline MessageWindow_t4170584992 * get_endLevelMessageWindow_7() const { return ___endLevelMessageWindow_7; }
	inline MessageWindow_t4170584992 ** get_address_of_endLevelMessageWindow_7() { return &___endLevelMessageWindow_7; }
	inline void set_endLevelMessageWindow_7(MessageWindow_t4170584992 * value)
	{
		___endLevelMessageWindow_7 = value;
		Il2CppCodeGenWriteBarrier((&___endLevelMessageWindow_7), value);
	}

	inline static int32_t get_offset_of_m_isReadyToBegin_8() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_isReadyToBegin_8)); }
	inline bool get_m_isReadyToBegin_8() const { return ___m_isReadyToBegin_8; }
	inline bool* get_address_of_m_isReadyToBegin_8() { return &___m_isReadyToBegin_8; }
	inline void set_m_isReadyToBegin_8(bool value)
	{
		___m_isReadyToBegin_8 = value;
	}

	inline static int32_t get_offset_of_m_isGameOver_9() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_isGameOver_9)); }
	inline bool get_m_isGameOver_9() const { return ___m_isGameOver_9; }
	inline bool* get_address_of_m_isGameOver_9() { return &___m_isGameOver_9; }
	inline void set_m_isGameOver_9(bool value)
	{
		___m_isGameOver_9 = value;
	}

	inline static int32_t get_offset_of_m_isWinner_10() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_isWinner_10)); }
	inline bool get_m_isWinner_10() const { return ___m_isWinner_10; }
	inline bool* get_address_of_m_isWinner_10() { return &___m_isWinner_10; }
	inline void set_m_isWinner_10(bool value)
	{
		___m_isWinner_10 = value;
	}

	inline static int32_t get_offset_of_m_isReadyToReload_11() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_isReadyToReload_11)); }
	inline bool get_m_isReadyToReload_11() const { return ___m_isReadyToReload_11; }
	inline bool* get_address_of_m_isReadyToReload_11() { return &___m_isReadyToReload_11; }
	inline void set_m_isReadyToReload_11(bool value)
	{
		___m_isReadyToReload_11 = value;
	}

	inline static int32_t get_offset_of_winIcon_12() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___winIcon_12)); }
	inline Sprite_t280657092 * get_winIcon_12() const { return ___winIcon_12; }
	inline Sprite_t280657092 ** get_address_of_winIcon_12() { return &___winIcon_12; }
	inline void set_winIcon_12(Sprite_t280657092 * value)
	{
		___winIcon_12 = value;
		Il2CppCodeGenWriteBarrier((&___winIcon_12), value);
	}

	inline static int32_t get_offset_of_loseIcon_13() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___loseIcon_13)); }
	inline Sprite_t280657092 * get_loseIcon_13() const { return ___loseIcon_13; }
	inline Sprite_t280657092 ** get_address_of_loseIcon_13() { return &___loseIcon_13; }
	inline void set_loseIcon_13(Sprite_t280657092 * value)
	{
		___loseIcon_13 = value;
		Il2CppCodeGenWriteBarrier((&___loseIcon_13), value);
	}

	inline static int32_t get_offset_of_goalIcon_14() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___goalIcon_14)); }
	inline Sprite_t280657092 * get_goalIcon_14() const { return ___goalIcon_14; }
	inline Sprite_t280657092 ** get_address_of_goalIcon_14() { return &___goalIcon_14; }
	inline void set_goalIcon_14(Sprite_t280657092 * value)
	{
		___goalIcon_14 = value;
		Il2CppCodeGenWriteBarrier((&___goalIcon_14), value);
	}

	inline static int32_t get_offset_of_scoreMeter_15() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___scoreMeter_15)); }
	inline ScoreMeter_t2365063754 * get_scoreMeter_15() const { return ___scoreMeter_15; }
	inline ScoreMeter_t2365063754 ** get_address_of_scoreMeter_15() { return &___scoreMeter_15; }
	inline void set_scoreMeter_15(ScoreMeter_t2365063754 * value)
	{
		___scoreMeter_15 = value;
		Il2CppCodeGenWriteBarrier((&___scoreMeter_15), value);
	}

	inline static int32_t get_offset_of_activeScene_16() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___activeScene_16)); }
	inline int32_t get_activeScene_16() const { return ___activeScene_16; }
	inline int32_t* get_address_of_activeScene_16() { return &___activeScene_16; }
	inline void set_activeScene_16(int32_t value)
	{
		___activeScene_16 = value;
	}

	inline static int32_t get_offset_of_sceneCount_17() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___sceneCount_17)); }
	inline int32_t get_sceneCount_17() const { return ___sceneCount_17; }
	inline int32_t* get_address_of_sceneCount_17() { return &___sceneCount_17; }
	inline void set_sceneCount_17(int32_t value)
	{
		___sceneCount_17 = value;
	}

	inline static int32_t get_offset_of_nextLevel_18() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___nextLevel_18)); }
	inline int32_t get_nextLevel_18() const { return ___nextLevel_18; }
	inline int32_t* get_address_of_nextLevel_18() { return &___nextLevel_18; }
	inline void set_nextLevel_18(int32_t value)
	{
		___nextLevel_18 = value;
	}

	inline static int32_t get_offset_of_m_board_19() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_board_19)); }
	inline Board_t3688305287 * get_m_board_19() const { return ___m_board_19; }
	inline Board_t3688305287 ** get_address_of_m_board_19() { return &___m_board_19; }
	inline void set_m_board_19(Board_t3688305287 * value)
	{
		___m_board_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_board_19), value);
	}

	inline static int32_t get_offset_of_m_levelGoal_20() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_levelGoal_20)); }
	inline LevelGoal_t786700456 * get_m_levelGoal_20() const { return ___m_levelGoal_20; }
	inline LevelGoal_t786700456 ** get_address_of_m_levelGoal_20() { return &___m_levelGoal_20; }
	inline void set_m_levelGoal_20(LevelGoal_t786700456 * value)
	{
		___m_levelGoal_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_levelGoal_20), value);
	}

	inline static int32_t get_offset_of_m_levelGoalTimed_21() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___m_levelGoalTimed_21)); }
	inline LevelGoalTimed_t3825364430 * get_m_levelGoalTimed_21() const { return ___m_levelGoalTimed_21; }
	inline LevelGoalTimed_t3825364430 ** get_address_of_m_levelGoalTimed_21() { return &___m_levelGoalTimed_21; }
	inline void set_m_levelGoalTimed_21(LevelGoalTimed_t3825364430 * value)
	{
		___m_levelGoalTimed_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_levelGoalTimed_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef BOMB_T3788669921_H
#define BOMB_T3788669921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bomb
struct  Bomb_t3788669921  : public GamePiece_t2515063641
{
public:
	// BombType Bomb::bombType
	int32_t ___bombType_10;

public:
	inline static int32_t get_offset_of_bombType_10() { return static_cast<int32_t>(offsetof(Bomb_t3788669921, ___bombType_10)); }
	inline int32_t get_bombType_10() const { return ___bombType_10; }
	inline int32_t* get_address_of_bombType_10() { return &___bombType_10; }
	inline void set_bombType_10(int32_t value)
	{
		___bombType_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOMB_T3788669921_H
#ifndef SCOREMANAGER_T3621325103_H
#define SCOREMANAGER_T3621325103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3621325103  : public Singleton_1_t503204552
{
public:
	// System.Int32 ScoreManager::m_currentScore
	int32_t ___m_currentScore_3;
	// System.Int32 ScoreManager::m_counterValue
	int32_t ___m_counterValue_4;
	// System.Int32 ScoreManager::m_increment
	int32_t ___m_increment_5;
	// UnityEngine.UI.Text ScoreManager::scoreText
	Text_t1901882714 * ___scoreText_6;
	// System.Single ScoreManager::countTime
	float ___countTime_7;

public:
	inline static int32_t get_offset_of_m_currentScore_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3621325103, ___m_currentScore_3)); }
	inline int32_t get_m_currentScore_3() const { return ___m_currentScore_3; }
	inline int32_t* get_address_of_m_currentScore_3() { return &___m_currentScore_3; }
	inline void set_m_currentScore_3(int32_t value)
	{
		___m_currentScore_3 = value;
	}

	inline static int32_t get_offset_of_m_counterValue_4() { return static_cast<int32_t>(offsetof(ScoreManager_t3621325103, ___m_counterValue_4)); }
	inline int32_t get_m_counterValue_4() const { return ___m_counterValue_4; }
	inline int32_t* get_address_of_m_counterValue_4() { return &___m_counterValue_4; }
	inline void set_m_counterValue_4(int32_t value)
	{
		___m_counterValue_4 = value;
	}

	inline static int32_t get_offset_of_m_increment_5() { return static_cast<int32_t>(offsetof(ScoreManager_t3621325103, ___m_increment_5)); }
	inline int32_t get_m_increment_5() const { return ___m_increment_5; }
	inline int32_t* get_address_of_m_increment_5() { return &___m_increment_5; }
	inline void set_m_increment_5(int32_t value)
	{
		___m_increment_5 = value;
	}

	inline static int32_t get_offset_of_scoreText_6() { return static_cast<int32_t>(offsetof(ScoreManager_t3621325103, ___scoreText_6)); }
	inline Text_t1901882714 * get_scoreText_6() const { return ___scoreText_6; }
	inline Text_t1901882714 ** get_address_of_scoreText_6() { return &___scoreText_6; }
	inline void set_scoreText_6(Text_t1901882714 * value)
	{
		___scoreText_6 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_6), value);
	}

	inline static int32_t get_offset_of_countTime_7() { return static_cast<int32_t>(offsetof(ScoreManager_t3621325103, ___countTime_7)); }
	inline float get_countTime_7() const { return ___countTime_7; }
	inline float* get_address_of_countTime_7() { return &___countTime_7; }
	inline void set_countTime_7(float value)
	{
		___countTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOREMANAGER_T3621325103_H
#ifndef SOUNDMANAGER_T2102329059_H
#define SOUNDMANAGER_T2102329059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2102329059  : public Singleton_1_t3279175804
{
public:
	// UnityEngine.AudioClip[] SoundManager::musicClips
	AudioClipU5BU5D_t143221404* ___musicClips_3;
	// UnityEngine.AudioClip[] SoundManager::winClips
	AudioClipU5BU5D_t143221404* ___winClips_4;
	// UnityEngine.AudioClip[] SoundManager::loseClips
	AudioClipU5BU5D_t143221404* ___loseClips_5;
	// UnityEngine.AudioClip[] SoundManager::bonusClips
	AudioClipU5BU5D_t143221404* ___bonusClips_6;
	// System.Single SoundManager::musicVolume
	float ___musicVolume_7;
	// System.Single SoundManager::fxVolume
	float ___fxVolume_8;
	// System.Single SoundManager::lowPitch
	float ___lowPitch_9;
	// System.Single SoundManager::highPitch
	float ___highPitch_10;

public:
	inline static int32_t get_offset_of_musicClips_3() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___musicClips_3)); }
	inline AudioClipU5BU5D_t143221404* get_musicClips_3() const { return ___musicClips_3; }
	inline AudioClipU5BU5D_t143221404** get_address_of_musicClips_3() { return &___musicClips_3; }
	inline void set_musicClips_3(AudioClipU5BU5D_t143221404* value)
	{
		___musicClips_3 = value;
		Il2CppCodeGenWriteBarrier((&___musicClips_3), value);
	}

	inline static int32_t get_offset_of_winClips_4() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___winClips_4)); }
	inline AudioClipU5BU5D_t143221404* get_winClips_4() const { return ___winClips_4; }
	inline AudioClipU5BU5D_t143221404** get_address_of_winClips_4() { return &___winClips_4; }
	inline void set_winClips_4(AudioClipU5BU5D_t143221404* value)
	{
		___winClips_4 = value;
		Il2CppCodeGenWriteBarrier((&___winClips_4), value);
	}

	inline static int32_t get_offset_of_loseClips_5() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___loseClips_5)); }
	inline AudioClipU5BU5D_t143221404* get_loseClips_5() const { return ___loseClips_5; }
	inline AudioClipU5BU5D_t143221404** get_address_of_loseClips_5() { return &___loseClips_5; }
	inline void set_loseClips_5(AudioClipU5BU5D_t143221404* value)
	{
		___loseClips_5 = value;
		Il2CppCodeGenWriteBarrier((&___loseClips_5), value);
	}

	inline static int32_t get_offset_of_bonusClips_6() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___bonusClips_6)); }
	inline AudioClipU5BU5D_t143221404* get_bonusClips_6() const { return ___bonusClips_6; }
	inline AudioClipU5BU5D_t143221404** get_address_of_bonusClips_6() { return &___bonusClips_6; }
	inline void set_bonusClips_6(AudioClipU5BU5D_t143221404* value)
	{
		___bonusClips_6 = value;
		Il2CppCodeGenWriteBarrier((&___bonusClips_6), value);
	}

	inline static int32_t get_offset_of_musicVolume_7() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___musicVolume_7)); }
	inline float get_musicVolume_7() const { return ___musicVolume_7; }
	inline float* get_address_of_musicVolume_7() { return &___musicVolume_7; }
	inline void set_musicVolume_7(float value)
	{
		___musicVolume_7 = value;
	}

	inline static int32_t get_offset_of_fxVolume_8() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___fxVolume_8)); }
	inline float get_fxVolume_8() const { return ___fxVolume_8; }
	inline float* get_address_of_fxVolume_8() { return &___fxVolume_8; }
	inline void set_fxVolume_8(float value)
	{
		___fxVolume_8 = value;
	}

	inline static int32_t get_offset_of_lowPitch_9() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___lowPitch_9)); }
	inline float get_lowPitch_9() const { return ___lowPitch_9; }
	inline float* get_address_of_lowPitch_9() { return &___lowPitch_9; }
	inline void set_lowPitch_9(float value)
	{
		___lowPitch_9 = value;
	}

	inline static int32_t get_offset_of_highPitch_10() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___highPitch_10)); }
	inline float get_highPitch_10() const { return ___highPitch_10; }
	inline float* get_address_of_highPitch_10() { return &___highPitch_10; }
	inline void set_highPitch_10(float value)
	{
		___highPitch_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDMANAGER_T2102329059_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_16;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_17;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_18;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_19;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_20;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_21;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_22;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_23;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_24;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_25;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_28;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_29;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_30;

public:
	inline static int32_t get_offset_of_m_FillRect_16() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_16)); }
	inline RectTransform_t3704657025 * get_m_FillRect_16() const { return ___m_FillRect_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_16() { return &___m_FillRect_16; }
	inline void set_m_FillRect_16(RectTransform_t3704657025 * value)
	{
		___m_FillRect_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_16), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_17() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_17)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_17() const { return ___m_HandleRect_17; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_17() { return &___m_HandleRect_17; }
	inline void set_m_HandleRect_17(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_17), value);
	}

	inline static int32_t get_offset_of_m_Direction_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_18)); }
	inline int32_t get_m_Direction_18() const { return ___m_Direction_18; }
	inline int32_t* get_address_of_m_Direction_18() { return &___m_Direction_18; }
	inline void set_m_Direction_18(int32_t value)
	{
		___m_Direction_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_19)); }
	inline float get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline float* get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(float value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_20)); }
	inline float get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline float* get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(float value)
	{
		___m_MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_21)); }
	inline bool get_m_WholeNumbers_21() const { return ___m_WholeNumbers_21; }
	inline bool* get_address_of_m_WholeNumbers_21() { return &___m_WholeNumbers_21; }
	inline void set_m_WholeNumbers_21(bool value)
	{
		___m_WholeNumbers_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_23)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_FillImage_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_24)); }
	inline Image_t2670269651 * get_m_FillImage_24() const { return ___m_FillImage_24; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_24() { return &___m_FillImage_24; }
	inline void set_m_FillImage_24(Image_t2670269651 * value)
	{
		___m_FillImage_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_24), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_25)); }
	inline Transform_t3600365921 * get_m_FillTransform_25() const { return ___m_FillTransform_25; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_25() { return &___m_FillTransform_25; }
	inline void set_m_FillTransform_25(Transform_t3600365921 * value)
	{
		___m_FillTransform_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_25), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_26)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_26() const { return ___m_FillContainerRect_26; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_26() { return &___m_FillContainerRect_26; }
	inline void set_m_FillContainerRect_26(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_26), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_27)); }
	inline Transform_t3600365921 * get_m_HandleTransform_27() const { return ___m_HandleTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_27() { return &___m_HandleTransform_27; }
	inline void set_m_HandleTransform_27(Transform_t3600365921 * value)
	{
		___m_HandleTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_27), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_28() const { return ___m_HandleContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_28() { return &___m_HandleContainerRect_28; }
	inline void set_m_HandleContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_Offset_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_29)); }
	inline Vector2_t2156229523  get_m_Offset_29() const { return ___m_Offset_29; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_29() { return &___m_Offset_29; }
	inline void set_m_Offset_29(Vector2_t2156229523  value)
	{
		___m_Offset_29 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_30)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_30() const { return ___m_Tracker_30; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_30() { return &___m_Tracker_30; }
	inline void set_m_Tracker_30(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
#ifndef LEVELGOALSCORED_T1233295862_H
#define LEVELGOALSCORED_T1233295862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelGoalScored
struct  LevelGoalScored_t1233295862  : public LevelGoal_t786700456
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELGOALSCORED_T1233295862_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef LEVELGOALCOLLECTED_T1758280699_H
#define LEVELGOALCOLLECTED_T1758280699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelGoalCollected
struct  LevelGoalCollected_t1758280699  : public LevelGoal_t786700456
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELGOALCOLLECTED_T1758280699_H
#ifndef LEVELGOALTIMED_T3825364430_H
#define LEVELGOALTIMED_T3825364430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelGoalTimed
struct  LevelGoalTimed_t3825364430  : public LevelGoal_t786700456
{
public:
	// Timer LevelGoalTimed::timer
	Timer_t4185932343 * ___timer_7;
	// System.Int32 LevelGoalTimed::m_maxTime
	int32_t ___m_maxTime_8;

public:
	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(LevelGoalTimed_t3825364430, ___timer_7)); }
	inline Timer_t4185932343 * get_timer_7() const { return ___timer_7; }
	inline Timer_t4185932343 ** get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(Timer_t4185932343 * value)
	{
		___timer_7 = value;
		Il2CppCodeGenWriteBarrier((&___timer_7), value);
	}

	inline static int32_t get_offset_of_m_maxTime_8() { return static_cast<int32_t>(offsetof(LevelGoalTimed_t3825364430, ___m_maxTime_8)); }
	inline int32_t get_m_maxTime_8() const { return ___m_maxTime_8; }
	inline int32_t* get_address_of_m_maxTime_8() { return &___m_maxTime_8; }
	inline void set_m_maxTime_8(int32_t value)
	{
		___m_maxTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELGOALTIMED_T3825364430_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// Tile[0...,0...]
struct TileU5B0___U2C0___U5D_t3330163934  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Tile_t2634157908 * m_Items[1];

public:
	inline Tile_t2634157908 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tile_t2634157908 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tile_t2634157908 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t2634157908 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Tile_t2634157908 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Tile_t2634157908 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Tile_t2634157908 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GamePiece[0...,0...]
struct GamePieceU5B0___U2C0___U5D_t3033866021  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GamePiece_t2515063641 * m_Items[1];

public:
	inline GamePiece_t2515063641 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GamePiece_t2515063641 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GamePiece_t2515063641 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GamePiece_t2515063641 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GamePiece_t2515063641 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GamePiece_t2515063641 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GamePiece_t2515063641 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GamePiece_t2515063641 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GamePiece_t2515063641 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GamePiece_t2515063641 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GamePiece_t2515063641 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GamePiece_t2515063641 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Board/StartingObject[]
struct StartingObjectU5BU5D_t3554278542  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StartingObject_t2785957559 * m_Items[1];

public:
	inline StartingObject_t2785957559 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StartingObject_t2785957559 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StartingObject_t2785957559 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StartingObject_t2785957559 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StartingObject_t2785957559 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StartingObject_t2785957559 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t3089334924  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleSystem_t1800779281 * m_Items[1];

public:
	inline ParticleSystem_t1800779281 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_t1800779281 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_t1800779281 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParticleSystem_t1800779281 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_t1800779281 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_t1800779281 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ScoreStar[]
struct ScoreStarU5BU5D_t2250574351  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ScoreStar_t1530904714 * m_Items[1];

public:
	inline ScoreStar_t1530904714 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScoreStar_t1530904714 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScoreStar_t1530904714 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ScoreStar_t1530904714 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScoreStar_t1530904714 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScoreStar_t1530904714 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t3680889665 * m_Items[1];

public:
	inline AudioClip_t3680889665 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t3680889665 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ScreenFader[]
struct ScreenFaderU5BU5D_t291289071  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ScreenFader_t840564778 * m_Items[1];

public:
	inline ScreenFader_t840564778 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScreenFader_t840564778 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScreenFader_t840564778 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ScreenFader_t840564778 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScreenFader_t840564778 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScreenFader_t840564778 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void Queue_1__ctor_m3641083948_gshared (Queue_1_t2926365658 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Union_TisRuntimeObject_m2107694175_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m3517240806_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
extern "C"  RuntimeObject * Singleton_1_get_Instance_m549117796_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2017297076  List_1_GetEnumerator_m593114157_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C"  int32_t Enumerator_get_Current_m207670954_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3181700225_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m222348240_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
extern "C"  bool List_1_Contains_m2263725670_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Except<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Except_TisRuntimeObject_m3394329176_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m2455545331_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,MatchValue>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2685595130_gshared (Func_2_t3038590500 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Object,MatchValue>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_GroupBy_TisRuntimeObject_TisMatchValue_t3671566290_m2776188121_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3038590500 * p1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisRuntimeObject_m119961155_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m714693565_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<!0>)
extern "C"  List_1_t257213610 * List_1_FindAll_m2721883856_gshared (List_1_t257213610 * __this, Predicate_1_t3905400288 * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::.ctor()
extern "C"  void Singleton_1__ctor_m2322677222_gshared (Singleton_1_t4256952909 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::Awake()
extern "C"  void Singleton_1_Awake_m3606143491_gshared (Singleton_1_t4256952909 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindWithTag_m981614592 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ParticleManager>()
#define GameObject_GetComponent_TisParticleManager_t4052332083_m2295773181(__this, method) ((  ParticleManager_t4052332083 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<BoardDeadlock>()
#define Component_GetComponent_TisBoardDeadlock_t1667041069_m2299218111(__this, method) ((  BoardDeadlock_t1667041069 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<BoardShuffler>()
#define Component_GetComponent_TisBoardShuffler_t56952400_m3115292106(__this, method) ((  BoardShuffler_t56952400 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Board::SetupTiles()
extern "C"  void Board_SetupTiles_m3422426117 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::SetupGamePieces()
extern "C"  void Board_SetupGamePieces_m1170738174 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::FindAllCollectibles()
extern "C"  List_1_t3987138383 * Board_FindAllCollectibles_m1120343210 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<GamePiece>::get_Count()
#define List_1_get_Count_m2409895218(__this, method) ((  int32_t (*) (List_1_t3987138383 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void Board::SetupCamera()
extern "C"  void Board_SetupCamera_m2158447469 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::FillBoard(System.Int32,System.Single)
extern "C"  void Board_FillBoard_m4135356354 (Board_t3688305287 * __this, int32_t ___falseYOffset0, float ___moveTime1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsWithinBounds(System.Int32,System.Int32)
extern "C"  bool Board_IsWithinBounds_m774777251 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Tile>()
#define GameObject_GetComponent_TisTile_t2634157908_m2952978531(__this, method) ((  Tile_t2634157908 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::Init(System.Int32,System.Int32,Board)
extern "C"  void Tile_Init_m600517075 (Tile_t2634157908 * __this, int32_t ___x0, int32_t ___y1, Board_t3688305287 * ___board2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<GamePiece>()
#define GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(__this, method) ((  GamePiece_t2515063641 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void GamePiece::Init(Board)
extern "C"  void GamePiece_Init_m2979619987 (GamePiece_t2515063641 * __this, Board_t3688305287 * ___board0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::PlaceGamePiece(GamePiece,System.Int32,System.Int32)
extern "C"  void Board_PlaceGamePiece_m976255011 (Board_t3688305287 * __this, GamePiece_t2515063641 * ___gamePiece0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GamePiece::Move(System.Int32,System.Int32,System.Single)
extern "C"  void GamePiece_Move_m3643451982 (GamePiece_t2515063641 * __this, int32_t ___destX0, int32_t ___destY1, float ___timeToMove2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Bomb>()
#define GameObject_GetComponent_TisBomb_t3788669921_m1557393500(__this, method) ((  Bomb_t3788669921 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void GamePiece::SetCoordinates(System.Int32,System.Int32)
extern "C"  void GamePiece_SetCoordinates_m696969722 (GamePiece_t2515063641 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::MakeTile(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32)
extern "C"  void Board_MakeTile_m1531152762 (Board_t3688305287 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___x1, int32_t ___y2, int32_t ___z3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::MakeGamePiece(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  void Board_MakeGamePiece_m541058416 (Board_t3688305287 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___x1, int32_t ___y2, int32_t ___falseYOffset3, float ___moveTime4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m76971700 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Board::GetRandomObject(UnityEngine.GameObject[])
extern "C"  GameObject_t1113636619 * Board_GetRandomObject_m1852001915 (Board_t3688305287 * __this, GameObjectU5BU5D_t3328599146* ___objectArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Board::GetRandomGamePiece()
extern "C"  GameObject_t1113636619 * Board_GetRandomGamePiece_m855311339 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Board::GetRandomCollectible()
extern "C"  GameObject_t1113636619 * Board_GetRandomCollectible_m1105116223 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<GamePiece>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define Queue_1__ctor_m2804821561(__this, p0, method) ((  void (*) (Queue_1_t2361323135 *, RuntimeObject*, const RuntimeMethod*))Queue_1__ctor_m3641083948_gshared)(__this, p0, method)
// !0 System.Collections.Generic.Queue`1<GamePiece>::Dequeue()
#define Queue_1_Dequeue_m1265396441(__this, method) ((  GamePiece_t2515063641 * (*) (Queue_1_t2361323135 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<GamePiece>::Enqueue(!0)
#define Queue_1_Enqueue_m1646656314(__this, p0, method) ((  void (*) (Queue_1_t2361323135 *, GamePiece_t2515063641 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Boolean Board::HasMatchOnFill(System.Int32,System.Int32,System.Int32)
extern "C"  bool Board_HasMatchOnFill_m2754632473 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___minLength2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::CanAddCollectible()
extern "C"  bool Board_CanAddCollectible_m859479024 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GamePiece Board::FillRandomCollectibleAt(System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  GamePiece_t2515063641 * Board_FillRandomCollectibleAt_m1108202506 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___falseYOffset2, float ___moveTime3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// GamePiece Board::FillRandomGamePieceAt(System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  GamePiece_t2515063641 * Board_FillRandomGamePieceAt_m2210676435 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___falseYOffset2, float ___moveTime3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ClearPieceAt(System.Int32,System.Int32)
extern "C"  void Board_ClearPieceAt_m1883174847 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::FindMatches(System.Int32,System.Int32,UnityEngine.Vector2,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindMatches_m2154912501 (Board_t3688305287 * __this, int32_t ___startX0, int32_t ___startY1, Vector2_t2156229523  ___searchDirection2, int32_t ___minLength3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<GamePiece>::.ctor()
#define List_1__ctor_m1371417690(__this, method) ((  void (*) (List_1_t3987138383 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean Board::IsNextTo(Tile,Tile)
extern "C"  bool Board_IsNextTo_m3991491634 (Board_t3688305287 * __this, Tile_t2634157908 * ___start0, Tile_t2634157908 * ___end1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::SwitchTiles(Tile,Tile)
extern "C"  void Board_SwitchTiles_m3793453304 (Board_t3688305287 * __this, Tile_t2634157908 * ___clickedTile0, Tile_t2634157908 * ___targetTile1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Board::SwitchTilesRoutine(Tile,Tile)
extern "C"  RuntimeObject* Board_SwitchTilesRoutine_m1110949943 (Board_t3688305287 * __this, Tile_t2634157908 * ___clickedTile0, Tile_t2634157908 * ___targetTile1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board/<SwitchTilesRoutine>c__Iterator0::.ctor()
extern "C"  void U3CSwitchTilesRoutineU3Ec__Iterator0__ctor_m1426358335 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
extern "C"  int32_t Mathf_Abs_m2460432655 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<GamePiece>::Add(!0)
#define List_1_Add_m2660902508(__this, p0, method) ((  void (*) (List_1_t3987138383 *, GamePiece_t2515063641 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<GamePiece>::Contains(!0)
#define List_1_Contains_m4165534979(__this, p0, method) ((  bool (*) (List_1_t3987138383 *, GamePiece_t2515063641 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<GamePiece>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Union_TisGamePiece_t2515063641_m1882129319(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m2107694175_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<GamePiece>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(__this /* static, unused */, p0, method) ((  List_1_t3987138383 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m3517240806_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1<GamePiece> Board::FindHorizontalMatches(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindHorizontalMatches_m3039601801 (Board_t3688305287 * __this, int32_t ___startX0, int32_t ___startY1, int32_t ___minLength2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::FindVerticalMatches(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindVerticalMatches_m3863594397 (Board_t3688305287 * __this, int32_t ___startX0, int32_t ___startY1, int32_t ___minLength2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GamePiece>::GetEnumerator()
#define List_1_GetEnumerator_m1773421007(__this, method) ((  Enumerator_t1581414964  (*) (List_1_t3987138383 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<GamePiece>::get_Current()
#define Enumerator_get_Current_m3778693135(__this, method) ((  GamePiece_t2515063641 * (*) (Enumerator_t1581414964 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Collections.Generic.List`1<GamePiece> Board::FindMatchesAt(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindMatchesAt_m2762353033 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___minLength2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<GamePiece>::MoveNext()
#define Enumerator_MoveNext_m3882589515(__this, method) ((  bool (*) (Enumerator_t1581414964 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<GamePiece>::Dispose()
#define Enumerator_Dispose_m162058403(__this, method) ((  void (*) (Enumerator_t1581414964 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C"  Color_t2555686324  SpriteRenderer_get_color_m904197748 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::HighlightTileOff(System.Int32,System.Int32)
extern "C"  void Board_HighlightTileOff_m4257695520 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::HighlightTileOn(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Board_HighlightTileOn_m418029858 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, Color_t2555686324  ___color2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::HighlightMatchesAt(System.Int32,System.Int32)
extern "C"  void Board_HighlightMatchesAt_m914917651 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::ClearPieceFXAt(System.Int32,System.Int32,System.Int32)
extern "C"  void ParticleManager_ClearPieceFXAt_m644113273 (ParticleManager_t4052332083 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T Singleton`1<GameManager>::get_Instance()
#define Singleton_1_get_Instance_m1826857602(__this /* static, unused */, method) ((  GameManager_t1536523654 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method)
// System.Void GameManager::ScorePoints(GamePiece,System.Int32,System.Int32)
extern "C"  void GameManager_ScorePoints_m1504656847 (GameManager_t1536523654 * __this, GamePiece_t2515063641 * ___piece0, int32_t ___multiplier1, int32_t ___bonus2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<TimeBonus>()
#define Component_GetComponent_TisTimeBonus_t1511394491_m140418344(__this, method) ((  TimeBonus_t1511394491 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void GameManager::AddTime(System.Int32)
extern "C"  void GameManager_AddTime_m868571206 (GameManager_t1536523654 * __this, int32_t ___timeValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::BombFXAt(System.Int32,System.Int32,System.Int32)
extern "C"  void ParticleManager_BombFXAt_m3785780858 (ParticleManager_t4052332083 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::BreakTileFXAt(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void ParticleManager_BreakTileFXAt_m1617400814 (ParticleManager_t4052332083 * __this, int32_t ___breakableValue0, int32_t ___x1, int32_t ___y2, int32_t ___z3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile::BreakTile()
extern "C"  void Tile_BreakTile_m1777725321 (Tile_t2634157908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::BreakTileAt(System.Int32,System.Int32)
extern "C"  void Board_BreakTileAt_m3903482239 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
#define List_1_GetEnumerator_m593114157(__this, method) ((  Enumerator_t2017297076  (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_GetEnumerator_m593114157_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
#define Enumerator_get_Current_m207670954(__this, method) ((  int32_t (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_get_Current_m207670954_gshared)(__this, method)
// System.Collections.Generic.List`1<GamePiece> Board::CollapseColumn(System.Int32,System.Single)
extern "C"  List_1_t3987138383 * Board_CollapseColumn_m288295586 (Board_t3688305287 * __this, int32_t ___column0, float ___collapseTime1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
#define Enumerator_MoveNext_m3181700225(__this, method) ((  bool (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_MoveNext_m3181700225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
#define Enumerator_Dispose_m222348240(__this, method) ((  void (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_Dispose_m222348240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
#define List_1_Contains_m2263725670(__this, p0, method) ((  bool (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Contains_m2263725670_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Collections.IEnumerator Board::ClearAndRefillBoardRoutine(System.Collections.Generic.List`1<GamePiece>)
extern "C"  RuntimeObject* Board_ClearAndRefillBoardRoutine_m1498106826 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board/<ClearAndRefillBoardRoutine>c__Iterator1::.ctor()
extern "C"  void U3CClearAndRefillBoardRoutineU3Ec__Iterator1__ctor_m3236499710 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board/<ClearAndCollapseRoutine>c__Iterator2::.ctor()
extern "C"  void U3CClearAndCollapseRoutineU3Ec__Iterator2__ctor_m3919208797 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board/<RefillRoutine>c__Iterator3::.ctor()
extern "C"  void U3CRefillRoutineU3Ec__Iterator3__ctor_m860219970 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Bomb>()
#define Component_GetComponent_TisBomb_t3788669921_m15523362(__this, method) ((  Bomb_t3788669921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.Generic.List`1<GamePiece> Board::GetColumnPieces(System.Int32)
extern "C"  List_1_t3987138383 * Board_GetColumnPieces_m3981118180 (Board_t3688305287 * __this, int32_t ___column0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::GetRowPieces(System.Int32)
extern "C"  List_1_t3987138383 * Board_GetRowPieces_m880279812 (Board_t3688305287 * __this, int32_t ___row0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::GetAdjacentPieces(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_GetAdjacentPieces_m1903585789 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___offset2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::RemoveCollectibles(System.Collections.Generic.List`1<GamePiece>)
extern "C"  List_1_t3987138383 * Board_RemoveCollectibles_m1284833940 (Board_t3688305287 * __this, List_1_t3987138383 * ___bombedPieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// MatchValue Board::FindMatchValue(System.Collections.Generic.List`1<GamePiece>)
extern "C"  int32_t Board_FindMatchValue_m1911026667 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsCornerMatch(System.Collections.Generic.List`1<GamePiece>)
extern "C"  bool Board_IsCornerMatch_m4225474114 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Board::FindGamePieceByMatchValue(UnityEngine.GameObject[],MatchValue)
extern "C"  GameObject_t1113636619 * Board_FindGamePieceByMatchValue_m2636574511 (Board_t3688305287 * __this, GameObjectU5BU5D_t3328599146* ___gamePiecePrefabs0, int32_t ___matchValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Board::MakeBomb(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  GameObject_t1113636619 * Board_MakeBomb_m433889367 (Board_t3688305287 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Collectible>()
#define Component_GetComponent_TisCollectible_t2768877883_m916769468(__this, method) ((  Collectible_t2768877883 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.Generic.List`1<GamePiece> Board::FindCollectiblesAt(System.Int32,System.Boolean)
extern "C"  List_1_t3987138383 * Board_FindCollectiblesAt_m3054997612 (Board_t3688305287 * __this, int32_t ___row0, bool ___clearedAtBottomOnly1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Except<GamePiece>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Except_TisGamePiece_t2515063641_m1956769829(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Except_TisRuntimeObject_m3394329176_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean BoardDeadlock::IsDeadlocked(GamePiece[0...,0...],System.Int32)
extern "C"  bool BoardDeadlock_IsDeadlocked_m1749050910 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, int32_t ___listLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Board::ShuffleBoardRoutine()
extern "C"  RuntimeObject* Board_ShuffleBoardRoutine_m1798833413 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board/<ShuffleBoardRoutine>c__Iterator4::.ctor()
extern "C"  void U3CShuffleBoardRoutineU3Ec__Iterator4__ctor_m3509774155 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::GetBombedPieces(System.Collections.Generic.List`1<GamePiece>)
extern "C"  List_1_t3987138383 * Board_GetBombedPieces_m2387319224 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<GamePiece>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Intersect_TisGamePiece_t2515063641_m3480136198(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m2455545331_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<System.Int32> Board::GetColumns(System.Collections.Generic.List`1<GamePiece>)
extern "C"  List_1_t128053199 * Board_GetColumns_m4057264076 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ClearPieceAt(System.Collections.Generic.List`1<GamePiece>,System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_ClearPieceAt_m828649804 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, List_1_t3987138383 * ___bombedPieces1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::BreakTileAt(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_BreakTileAt_m3419637014 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ActivateBomb(UnityEngine.GameObject)
extern "C"  void Board_ActivateBomb_m98435486 (Board_t3688305287 * __this, GameObject_t1113636619 * ___bomb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::CollapseColumn(System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t3987138383 * Board_CollapseColumn_m2464865477 (Board_t3688305287 * __this, List_1_t128053199 * ___columnsToCollapse0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsCollapsed(System.Collections.Generic.List`1<GamePiece>)
extern "C"  bool Board_IsCollapsed_m3450711880 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::FindMatchesAt(System.Collections.Generic.List`1<GamePiece>,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindMatchesAt_m305391169 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, int32_t ___minLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Board::ClearAndCollapseRoutine(System.Collections.Generic.List`1<GamePiece>)
extern "C"  RuntimeObject* Board_ClearAndCollapseRoutine_m798933950 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Board::RefillRoutine()
extern "C"  RuntimeObject* Board_RefillRoutine_m1488639427 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::FindAllMatches()
extern "C"  List_1_t3987138383 * Board_FindAllMatches_m2302013884 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2178203778 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> BoardShuffler::RemoveNormalPieces(GamePiece[0...,0...])
extern "C"  List_1_t3987138383 * BoardShuffler_RemoveNormalPieces_m3486924482 (BoardShuffler_t56952400 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BoardShuffler::ShuffleList(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void BoardShuffler_ShuffleList_m2531927563 (BoardShuffler_t56952400 * __this, List_1_t3987138383 * ___piecesToShuffle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::FillBoardFromList(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_FillBoardFromList_m2380270472 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BoardShuffler::MovePieces(GamePiece[0...,0...],System.Single)
extern "C"  void BoardShuffler_MovePieces_m4260695126 (BoardShuffler_t56952400 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, float ___swapTime1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::get_IsGameOver()
extern "C"  bool GameManager_get_IsGameOver_m1911883697 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Board::IsColorBomb(GamePiece)
extern "C"  bool Board_IsColorBomb_m3202758182 (Board_t3688305287 * __this, GamePiece_t2515063641 * ___gamePiece0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> Board::FindAllMatchValue(MatchValue)
extern "C"  List_1_t3987138383 * Board_FindAllMatchValue_m3520378586 (Board_t3688305287 * __this, int32_t ___mValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UpdateMoves()
extern "C"  void GameManager_UpdateMoves_m2091666798 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Board::DropBomb(System.Int32,System.Int32,UnityEngine.Vector2,System.Collections.Generic.List`1<GamePiece>)
extern "C"  GameObject_t1113636619 * Board_DropBomb_m4209785306 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, Vector2_t2156229523  ___swapDirection2, List_1_t3987138383 * ___gamePieces3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GamePiece::ChangeColor(GamePiece)
extern "C"  void GamePiece_ChangeColor_m2323782627 (GamePiece_t2515063641 * __this, GamePiece_t2515063641 * ___pieceToMatch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ClearAndRefillBoard(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_ClearAndRefillBoard_m3579737852 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<GamePiece,MatchValue>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1301189790(__this, p0, p1, method) ((  void (*) (Func_2_t3228517195 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2685595130_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<GamePiece,MatchValue>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_GroupBy_TisGamePiece_t2515063641_TisMatchValue_t3671566290_m350021335(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3228517195 *, const RuntimeMethod*))Enumerable_GroupBy_TisRuntimeObject_TisMatchValue_t3671566290_m2776188121_gshared)(__this /* static, unused */, p0, p1, method)
// System.Int32 System.Linq.Enumerable::Count<GamePiece>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisGamePiece_t2515063641_m3216069146(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m119961155_gshared)(__this /* static, unused */, p0, method)
// System.Void BoardDeadlock/<HasMoveAt>c__AnonStorey0::.ctor()
extern "C"  void U3CHasMoveAtU3Ec__AnonStorey0__ctor_m1931590031 (U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> BoardDeadlock::GetRowColumnList(GamePiece[0...,0...],System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  List_1_t3987138383 * BoardDeadlock_GetRowColumnList_m1116894549 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allpieces0, int32_t ___x1, int32_t ___y2, int32_t ___listLength3, bool ___checkRow4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GamePiece> BoardDeadlock::GetMinimumMatches(System.Collections.Generic.List`1<GamePiece>,System.Int32)
extern "C"  List_1_t3987138383 * BoardDeadlock_GetMinimumMatches_m6474523 (BoardDeadlock_t1667041069 * __this, List_1_t3987138383 * ___gamePieces0, int32_t ___minForMatch1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::FirstOrDefault<GamePiece>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_FirstOrDefault_TisGamePiece_t2515063641_m1166263980(__this /* static, unused */, p0, method) ((  GamePiece_t2515063641 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m714693565_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1<GamePiece> BoardDeadlock::GetNeighbors(GamePiece[0...,0...],System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * BoardDeadlock_GetNeighbors_m3964018393 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Predicate`1<GamePiece>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m106490625(__this, p0, p1, method) ((  void (*) (Predicate_1_t3340357765 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method)
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<GamePiece>::FindAll(System.Predicate`1<!0>)
#define List_1_FindAll_m573018364(__this, p0, method) ((  List_1_t3987138383 * (*) (List_1_t3987138383 *, Predicate_1_t3340357765 *, const RuntimeMethod*))List_1_FindAll_m2721883856_gshared)(__this, p0, method)
// System.Boolean BoardDeadlock::HasMoveAt(GamePiece[0...,0...],System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  bool BoardDeadlock_HasMoveAt_m384078838 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, int32_t ___x1, int32_t ___y2, int32_t ___listLength3, bool ___checkRow4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<GamePiece>::get_Item(System.Int32)
#define List_1_get_Item_m77600249(__this, p0, method) ((  GamePiece_t2515063641 * (*) (List_1_t3987138383 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<GamePiece>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2419564865(__this, p0, p1, method) ((  void (*) (List_1_t3987138383 *, int32_t, GamePiece_t2515063641 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method)
// System.Void GamePiece::.ctor()
extern "C"  void GamePiece__ctor_m480520445 (GamePiece_t2515063641 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
extern "C"  Sprite_t280657092 * SpriteRenderer_get_sprite_m663386871 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Singleton`1<GameManager>::.ctor()
#define Singleton_1__ctor_m671125834(__this, method) ((  void (*) (Singleton_1_t2713370399 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method)
// System.Void Singleton`1<GameManager>::Awake()
#define Singleton_1_Awake_m2904899739(__this, method) ((  void (*) (Singleton_1_t2713370399 *, const RuntimeMethod*))Singleton_1_Awake_m3606143491_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<LevelGoal>()
#define Component_GetComponent_TisLevelGoal_t786700456_m4187797462(__this, method) ((  LevelGoal_t786700456 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<LevelGoalTimed>()
#define Component_GetComponent_TisLevelGoalTimed_t3825364430_m1931629761(__this, method) ((  LevelGoalTimed_t3825364430 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<Board>()
#define Object_FindObjectOfType_TisBoard_t3688305287_m1871462073(__this /* static, unused */, method) ((  Board_t3688305287 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Component::GetComponent<Board>()
#define Component_GetComponent_TisBoard_t3688305287_m1597239221(__this, method) ((  Board_t3688305287 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void ScoreMeter::SetupStars(LevelGoal)
extern "C"  void ScoreMeter_SetupStars_m1460901484 (ScoreMeter_t2365063754 * __this, LevelGoal_t786700456 * ___levelGoal0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
extern "C"  int32_t SceneManager_get_sceneCount_m2961241469 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::ExecuteGameLoop()
extern "C"  RuntimeObject* GameManager_ExecuteGameLoop_m3680256769 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C"  void Text_set_fontSize_m3617617524 (Text_t1901882714 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/<ExecuteGameLoop>c__Iterator0::.ctor()
extern "C"  void U3CExecuteGameLoopU3Ec__Iterator0__ctor_m384007181 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/<StartGameRoutine>c__Iterator1::.ctor()
extern "C"  void U3CStartGameRoutineU3Ec__Iterator1__ctor_m837716400 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/<PlayGameRoutine>c__Iterator2::.ctor()
extern "C"  void U3CPlayGameRoutineU3Ec__Iterator2__ctor_m4119556898 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/<WaitForBoardRoutine>c__Iterator3::.ctor()
extern "C"  void U3CWaitForBoardRoutineU3Ec__Iterator3__ctor_m3944732490 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/<EndGameRoutine>c__Iterator4::.ctor()
extern "C"  void U3CEndGameRoutineU3Ec__Iterator4__ctor_m2445518961 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T Singleton`1<ScoreManager>::get_Instance()
#define Singleton_1_get_Instance_m1225640580(__this /* static, unused */, method) ((  ScoreManager_t3621325103 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method)
// System.Void ScoreManager::AddScore(System.Int32)
extern "C"  void ScoreManager_AddScore_m2139830493 (ScoreManager_t3621325103 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScoreManager::get_CurrentScore()
extern "C"  int32_t ScoreManager_get_CurrentScore_m4017375753 (ScoreManager_t3621325103 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelGoal::UpdateScoreStars(System.Int32)
extern "C"  void LevelGoal_UpdateScoreStars_m2419828507 (LevelGoal_t786700456 * __this, int32_t ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreMeter::UpdateScoreMeter(System.Int32,System.Int32)
extern "C"  void ScoreMeter_UpdateScoreMeter_m3696812769 (ScoreMeter_t2365063754 * __this, int32_t ___score0, int32_t ___starCount1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T Singleton`1<SoundManager>::get_Instance()
#define Singleton_1_get_Instance_m3757570477(__this /* static, unused */, method) ((  SoundManager_t2102329059 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource SoundManager::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  AudioSource_t3935305588 * SoundManager_PlayClipAtPoint_m1045118740 (SoundManager_t2102329059 * __this, AudioClip_t3680889665 * ___clip0, Vector3_t3722313464  ___position1, float ___volume2, bool ___randomizePitch3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelGoalTimed::AddTime(System.Int32)
extern "C"  void LevelGoalTimed_AddTime_m2547915689 (LevelGoalTimed_t3825364430 * __this, int32_t ___timeValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<RectXFormMover>()
#define Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199(__this, method) ((  RectXFormMover_t3830425495 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void RectXFormMover::MoveOn()
extern "C"  void RectXFormMover_MoveOn_m1152315647 (RectXFormMover_t3830425495 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MessageWindow::ShowMessage(UnityEngine.Sprite,System.String,System.String)
extern "C"  void MessageWindow_ShowMessage_m381883926 (MessageWindow_t4170584992 * __this, Sprite_t280657092 * ___sprite0, String_t* ___message1, String_t* ___buttonMsg2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayWinSound()
extern "C"  void SoundManager_PlayWinSound_m2177567815 (SoundManager_t2102329059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenFader::FadeOn()
extern "C"  void ScreenFader_FadeOn_m2182675462 (ScreenFader_t840564778 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m270272723 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
extern "C"  int32_t SceneManager_get_sceneCountInBuildSettings_m1247885472 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameManager::ChangeLevel(System.Int32,System.Int32)
extern "C"  int32_t GameManager_ChangeLevel_m941026445 (GameManager_t1536523654 * __this, int32_t ___activeScene0, int32_t ___amount1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m2618285814 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m1654577315 (MonoBehaviour_t3962482529 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelGoalTimed::StartCountdown()
extern "C"  void LevelGoalTimed_StartCountdown_m2269274181 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenFader::FadeOff()
extern "C"  void ScreenFader_FadeOff_m3851179821 (ScreenFader_t840564778 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::SetupBoard()
extern "C"  void Board_SetupBoard_m1019592939 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::FadeOff()
extern "C"  void Timer_FadeOff_m2085329431 (Timer_t4185932343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GamePiece::MoveRoutine(UnityEngine.Vector3,System.Single)
extern "C"  RuntimeObject* GamePiece_MoveRoutine_m2722760447 (GamePiece_t2515063641 * __this, Vector3_t3722313464  ___destination0, float ___timeToMove1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GamePiece/<MoveRoutine>c__Iterator0::.ctor()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0__ctor_m1297760928 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C"  Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Singleton`1<LevelGoal>::.ctor()
#define Singleton_1__ctor_m799740360(__this, method) ((  void (*) (Singleton_1_t1963547201 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method)
// System.Void LevelGoal::Init()
extern "C"  void LevelGoal_Init_m1323533292 (LevelGoal_t786700456 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelGoal::UpdateScore(System.Int32)
extern "C"  int32_t LevelGoal_UpdateScore_m3990050120 (LevelGoal_t786700456 * __this, int32_t ___score0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelGoal::.ctor()
extern "C"  void LevelGoal__ctor_m2738173615 (LevelGoal_t786700456 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::InitTimer(System.Int32)
extern "C"  void Timer_InitTimer_m536240261 (Timer_t4185932343 * __this, int32_t ___maxTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LevelGoalTimed::CountDownRoutine()
extern "C"  RuntimeObject* LevelGoalTimed_CountDownRoutine_m599542716 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelGoalTimed/<CountDownRoutine>c__Iterator0::.ctor()
extern "C"  void U3CCountDownRoutineU3Ec__Iterator0__ctor_m2653225981 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::UpdateTimer(System.Int32)
extern "C"  void Timer_UpdateTimer_m3105605545 (Timer_t4185932343 * __this, int32_t ___currentTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ParticlePlayer>()
#define GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024(__this, method) ((  ParticlePlayer_t339043229 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void ParticlePlayer::Play()
extern "C"  void ParticlePlayer_Play_m1704575969 (ParticlePlayer_t339043229 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m796275405(__this, method) ((  ParticleSystemU5BU5D_t3089334924* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C"  void ParticleSystem_Stop_m3125854227 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.IEnumerator RectXFormMover::MoveRoutine(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  RuntimeObject* RectXFormMover_MoveRoutine_m3279753072 (RectXFormMover_t3830425495 * __this, Vector3_t3722313464  ___startPos0, Vector3_t3722313464  ___endPos1, float ___timeToMove2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RectXFormMover/<MoveRoutine>c__Iterator0::.ctor()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0__ctor_m1019061308 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RectXFormMover::Move(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void RectXFormMover_Move_m2266801239 (RectXFormMover_t3830425495 * __this, Vector3_t3722313464  ___startPos0, Vector3_t3722313464  ___endPos1, float ___timeToMove2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C"  Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Singleton`1<ScoreManager>::.ctor()
#define Singleton_1__ctor_m476637395(__this, method) ((  void (*) (Singleton_1_t503204552 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method)
// System.Void ScoreManager::UpdateScoreText(System.Int32)
extern "C"  void ScoreManager_UpdateScoreText_m1234541438 (ScoreManager_t3621325103 * __this, int32_t ___scoreValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScoreManager::CountScoreRoutine()
extern "C"  RuntimeObject* ScoreManager_CountScoreRoutine_m2953619159 (ScoreManager_t3621325103 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreManager/<CountScoreRoutine>c__Iterator0::.ctor()
extern "C"  void U3CCountScoreRoutineU3Ec__Iterator0__ctor_m1563709736 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
#define Component_GetComponent_TisSlider_t3903728902_m2161493141(__this, method) ((  Slider_t3903728902 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreStar::Activate()
extern "C"  void ScoreStar_Activate_m2924319444 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreStar::SetActive(System.Boolean)
extern "C"  void ScoreStar_SetActive_m4188645778 (ScoreStar_t1530904714 * __this, bool ___state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScoreStar::ActivateRoutine()
extern "C"  RuntimeObject* ScoreStar_ActivateRoutine_m3514958748 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreStar/<ActivateRoutine>c__Iterator0::.ctor()
extern "C"  void U3CActivateRoutineU3Ec__Iterator0__ctor_m2903826167 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreStar/<TestRoutine>c__Iterator1::.ctor()
extern "C"  void U3CTestRoutineU3Ec__Iterator1__ctor_m737039290 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.MaskableGraphic>()
#define Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343(__this, method) ((  MaskableGraphic_t3839221559 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void ScreenFader/<FadeRoutine>c__Iterator0::.ctor()
extern "C"  void U3CFadeRoutineU3Ec__Iterator0__ctor_m2326256812 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenFader::FadeRoutine(System.Single)
extern "C"  RuntimeObject* ScreenFader_FadeRoutine_m2641814482 (ScreenFader_t840564778 * __this, float ___alpha0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Singleton`1<SoundManager>::.ctor()
#define Singleton_1__ctor_m1284254857(__this, method) ((  void (*) (Singleton_1_t3279175804 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method)
// System.Void SoundManager::PlayMusic()
extern "C"  void SoundManager_PlayMusic_m3316504667 (SoundManager_t2102329059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m2413801168 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioClip::get_length()
extern "C"  float AudioClip_get_length_m4269890037 (AudioClip_t3680889665 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource SoundManager::PlayRandom(UnityEngine.AudioClip[],UnityEngine.Vector3,System.Single)
extern "C"  AudioSource_t3935305588 * SoundManager_PlayRandom_m2395206716 (SoundManager_t2102329059 * __this, AudioClipU5BU5D_t143221404* ___clips0, Vector3_t3722313464  ___position1, float ___volume2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ClickTile(Tile)
extern "C"  void Board_ClickTile_m1521009140 (Board_t3688305287 * __this, Tile_t2634157908 * ___tile0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::DragToTile(Tile)
extern "C"  void Board_DragToTile_m2909868625 (Board_t3688305287 * __this, Tile_t2634157908 * ___tile0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::ReleaseTile()
extern "C"  void Board_ReleaseTile_m2927120086 (Board_t3688305287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Tile::BreakTileRoutine()
extern "C"  RuntimeObject* Tile_BreakTileRoutine_m4187600944 (Tile_t2634157908 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Tile/<BreakTileRoutine>c__Iterator0::.ctor()
extern "C"  void U3CBreakTileRoutineU3Ec__Iterator0__ctor_m1234500558 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LevelGoalTimed GameManager::get_levelGoalTimed()
extern "C"  LevelGoalTimed_t3825364430 * GameManager_get_levelGoalTimed_m3381075194 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TimeBonus::SetActive(System.Boolean)
extern "C"  void TimeBonus_SetActive_m2925298885 (TimeBonus_t1511394491 * __this, bool ___state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TimeBonus::SetupMaterial(System.Int32,UnityEngine.GameObject)
extern "C"  void TimeBonus_SetupMaterial_m1094608083 (TimeBonus_t1511394491 * __this, int32_t ___value0, GameObject_t1113636619 * ___bonusGlow1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystemRenderer>()
#define GameObject_GetComponent_TisParticleSystemRenderer_t2065813411_m4196326112(__this, method) ((  ParticleSystemRenderer_t2065813411 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C"  void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
extern "C"  void Image_set_type_m2038193736 (Image_t2670269651 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
extern "C"  void Image_set_fillMethod_m872357774 (Image_t2670269651 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
extern "C"  void Image_set_fillOrigin_m469806249 (Image_t2670269651 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C"  void Image_set_fillAmount_m3737925590 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Timer::FlashRoutine(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern "C"  RuntimeObject* Timer_FlashRoutine_m1870750396 (Timer_t4185932343 * __this, Image_t2670269651 * ___image0, Color_t2555686324  ___targetColor1, float ___interval2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Timer/<FlashRoutine>c__Iterator0::.ctor()
extern "C"  void U3CFlashRoutineU3Ec__Iterator0__ctor_m403712195 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<ScreenFader>()
#define Component_GetComponentsInChildren_TisScreenFader_t840564778_m2539201835(__this, method) ((  ScreenFaderU5BU5D_t291289071* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board::.ctor()
extern "C"  void Board__ctor_m662563078 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		__this->set_maxCollectibles_12(3);
		__this->set_chanceForCollectible_14((0.1f));
		__this->set_swapTime_18((0.5f));
		__this->set_m_playerInputEnabled_23((bool)1);
		__this->set_fillYOffset_27(((int32_t)10));
		__this->set_fillMoveTime_28((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::Start()
extern "C"  void Board_Start_m2081441992 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_Start_m2081441992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_width_2();
		int32_t L_1 = __this->get_height_3();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		TileU5B0___U2C0___U5D_t3330163934* L_2 = (TileU5B0___U2C0___U5D_t3330163934*)GenArrayNew(TileU5B0___U2C0___U5D_t3330163934_il2cpp_TypeInfo_var, L_3);
		__this->set_m_allTiles_19((TileU5B0___U2C0___U5D_t3330163934*)L_2);
		int32_t L_4 = __this->get_width_2();
		int32_t L_5 = __this->get_height_3();
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)L_4, (il2cpp_array_size_t)L_5 };
		GamePieceU5B0___U2C0___U5D_t3033866021* L_6 = (GamePieceU5B0___U2C0___U5D_t3033866021*)GenArrayNew(GamePieceU5B0___U2C0___U5D_t3033866021_il2cpp_TypeInfo_var, L_7);
		__this->set_m_allGamePieces_20((GamePieceU5B0___U2C0___U5D_t3033866021*)L_6);
		GameObject_t1113636619 * L_8 = GameObject_FindWithTag_m981614592(NULL /*static, unused*/, _stringLiteral3047507689, /*hidden argument*/NULL);
		NullCheck(L_8);
		ParticleManager_t4052332083 * L_9 = GameObject_GetComponent_TisParticleManager_t4052332083_m2295773181(L_8, /*hidden argument*/GameObject_GetComponent_TisParticleManager_t4052332083_m2295773181_RuntimeMethod_var);
		__this->set_m_particleManager_26(L_9);
		BoardDeadlock_t1667041069 * L_10 = Component_GetComponent_TisBoardDeadlock_t1667041069_m2299218111(__this, /*hidden argument*/Component_GetComponent_TisBoardDeadlock_t1667041069_m2299218111_RuntimeMethod_var);
		__this->set_m_boardDeadlock_31(L_10);
		BoardShuffler_t56952400 * L_11 = Component_GetComponent_TisBoardShuffler_t56952400_m3115292106(__this, /*hidden argument*/Component_GetComponent_TisBoardShuffler_t56952400_m3115292106_RuntimeMethod_var);
		__this->set_m_boardShuffler_32(L_11);
		return;
	}
}
// System.Void Board::SetupBoard()
extern "C"  void Board_SetupBoard_m1019592939 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_SetupBoard_m1019592939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	{
		Board_SetupTiles_m3422426117(__this, /*hidden argument*/NULL);
		Board_SetupGamePieces_m1170738174(__this, /*hidden argument*/NULL);
		List_1_t3987138383 * L_0 = Board_FindAllCollectibles_m1120343210(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t3987138383 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2409895218(L_1, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		__this->set_collectibleCount_13(L_2);
		Board_SetupCamera_m2158447469(__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_fillYOffset_27();
		float L_4 = __this->get_fillMoveTime_28();
		Board_FillBoard_m4135356354(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::MakeTile(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32)
extern "C"  void Board_MakeTile_m1531152762 (Board_t3688305287 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___x1, int32_t ___y2, int32_t ___z3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_MakeTile_m1531152762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_2 = ___x1;
		int32_t L_3 = ___y2;
		bool L_4 = Board_IsWithinBounds_m774777251(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00a5;
		}
	}
	{
		GameObject_t1113636619 * L_5 = ___prefab0;
		int32_t L_6 = ___x1;
		int32_t L_7 = ___y2;
		int32_t L_8 = ___z3;
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (((float)((float)L_6))), (((float)((float)L_7))), (((float)((float)L_8))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_10 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_11 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_5, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_11;
		GameObject_t1113636619 * L_12 = V_0;
		ObjectU5BU5D_t2843939325* L_13 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral450651776);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral450651776);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		int32_t L_15 = ___x1;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614532);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614532);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		int32_t L_20 = ___y2;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		ObjectU5BU5D_t2843939325* L_23 = L_19;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral3452614535);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2971454694(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_12);
		Object_set_name_m291480324(L_12, L_24, /*hidden argument*/NULL);
		TileU5B0___U2C0___U5D_t3330163934* L_25 = __this->get_m_allTiles_19();
		int32_t L_26 = ___x1;
		int32_t L_27 = ___y2;
		GameObject_t1113636619 * L_28 = V_0;
		NullCheck(L_28);
		Tile_t2634157908 * L_29 = GameObject_GetComponent_TisTile_t2634157908_m2952978531(L_28, /*hidden argument*/GameObject_GetComponent_TisTile_t2634157908_m2952978531_RuntimeMethod_var);
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_25);
		((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_25)->SetAt(L_26, L_27, L_29);
		GameObject_t1113636619 * L_30 = V_0;
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = GameObject_get_transform_m1369836730(L_30, /*hidden argument*/NULL);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_parent_m786917804(L_31, L_32, /*hidden argument*/NULL);
		TileU5B0___U2C0___U5D_t3330163934* L_33 = __this->get_m_allTiles_19();
		int32_t L_34 = ___x1;
		int32_t L_35 = ___y2;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_33);
		Tile_t2634157908 * L_36 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_33)->GetAt(L_34, L_35);
		int32_t L_37 = ___x1;
		int32_t L_38 = ___y2;
		NullCheck(L_36);
		Tile_Init_m600517075(L_36, L_37, L_38, __this, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void Board::MakeGamePiece(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  void Board_MakeGamePiece_m541058416 (Board_t3688305287 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___x1, int32_t ___y2, int32_t ___falseYOffset3, float ___moveTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_MakeGamePiece_m541058416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_2 = ___x1;
		int32_t L_3 = ___y2;
		bool L_4 = Board_IsWithinBounds_m774777251(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		GameObject_t1113636619 * L_5 = ___prefab0;
		NullCheck(L_5);
		GamePiece_t2515063641 * L_6 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_5, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		NullCheck(L_6);
		GamePiece_Init_m2979619987(L_6, __this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = ___prefab0;
		NullCheck(L_7);
		GamePiece_t2515063641 * L_8 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_7, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		int32_t L_9 = ___x1;
		int32_t L_10 = ___y2;
		Board_PlaceGamePiece_m976255011(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = ___falseYOffset3;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		GameObject_t1113636619 * L_12 = ___prefab0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___x1;
		int32_t L_15 = ___y2;
		int32_t L_16 = ___falseYOffset3;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (((float)((float)L_14))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16))))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_m3387557959(L_13, L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = ___prefab0;
		NullCheck(L_18);
		GamePiece_t2515063641 * L_19 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_18, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		int32_t L_20 = ___x1;
		int32_t L_21 = ___y2;
		float L_22 = ___moveTime4;
		NullCheck(L_19);
		GamePiece_Move_m3643451982(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_0065:
	{
		GameObject_t1113636619 * L_23 = ___prefab0;
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_parent_m786917804(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// UnityEngine.GameObject Board::MakeBomb(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  GameObject_t1113636619 * Board_MakeBomb_m433889367 (Board_t3688305287 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_MakeBomb_m433889367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_2 = ___x1;
		int32_t L_3 = ___y2;
		bool L_4 = Board_IsWithinBounds_m774777251(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		GameObject_t1113636619 * L_5 = ___prefab0;
		int32_t L_6 = ___x1;
		int32_t L_7 = ___y2;
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), (((float)((float)L_6))), (((float)((float)L_7))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_9 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_10 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_5, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_10;
		GameObject_t1113636619 * L_11 = V_0;
		NullCheck(L_11);
		Bomb_t3788669921 * L_12 = GameObject_GetComponent_TisBomb_t3788669921_m1557393500(L_11, /*hidden argument*/GameObject_GetComponent_TisBomb_t3788669921_m1557393500_RuntimeMethod_var);
		NullCheck(L_12);
		GamePiece_Init_m2979619987(L_12, __this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_0;
		NullCheck(L_13);
		Bomb_t3788669921 * L_14 = GameObject_GetComponent_TisBomb_t3788669921_m1557393500(L_13, /*hidden argument*/GameObject_GetComponent_TisBomb_t3788669921_m1557393500_RuntimeMethod_var);
		int32_t L_15 = ___x1;
		int32_t L_16 = ___y2;
		NullCheck(L_14);
		GamePiece_SetCoordinates_m696969722(L_14, L_15, L_16, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_17 = V_0;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_parent_m786917804(L_18, L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = V_0;
		return L_20;
	}

IL_005f:
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// System.Void Board::SetupTiles()
extern "C"  void Board_SetupTiles_m3422426117 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_SetupTiles_m3422426117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StartingObject_t2785957559 * V_0 = NULL;
	StartingObjectU5BU5D_t3554278542* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StartingObjectU5BU5D_t3554278542* L_0 = __this->get_startingTiles_24();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0051;
	}

IL_000e:
	{
		StartingObjectU5BU5D_t3554278542* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		StartingObject_t2785957559 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StartingObject_t2785957559 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		StartingObject_t2785957559 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_x_1();
		StartingObject_t2785957559 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_y_2();
		bool L_10 = Board_IsWithinBounds_m774777251(__this, L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		StartingObject_t2785957559 * L_11 = V_0;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = L_11->get_prefab_0();
		StartingObject_t2785957559 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_x_1();
		StartingObject_t2785957559 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_y_2();
		StartingObject_t2785957559 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_z_3();
		Board_MakeTile_m1531152762(__this, L_12, L_14, L_16, L_18, /*hidden argument*/NULL);
	}

IL_004d:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_20 = V_2;
		StartingObjectU5BU5D_t3554278542* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		V_3 = 0;
		goto IL_00a9;
	}

IL_0061:
	{
		V_4 = 0;
		goto IL_0098;
	}

IL_0069:
	{
		TileU5B0___U2C0___U5D_t3330163934* L_22 = __this->get_m_allTiles_19();
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_22);
		Tile_t2634157908 * L_25 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_22)->GetAt(L_23, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_25, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0092;
		}
	}
	{
		GameObject_t1113636619 * L_27 = __this->get_tileNormalPrefab_5();
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		Board_MakeTile_m1531152762(__this, L_27, L_28, L_29, 0, /*hidden argument*/NULL);
	}

IL_0092:
	{
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_31 = V_4;
		int32_t L_32 = __this->get_height_3();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00a9:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = __this->get_width_2();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0061;
		}
	}
	{
		return;
	}
}
// System.Void Board::SetupGamePieces()
extern "C"  void Board_SetupGamePieces_m1170738174 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_SetupGamePieces_m1170738174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StartingObject_t2785957559 * V_0 = NULL;
	StartingObjectU5BU5D_t3554278542* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	{
		StartingObjectU5BU5D_t3554278542* L_0 = __this->get_startingGamePieces_25();
		V_1 = L_0;
		V_2 = 0;
		goto IL_007b;
	}

IL_000e:
	{
		StartingObjectU5BU5D_t3554278542* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		StartingObject_t2785957559 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StartingObject_t2785957559 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0077;
		}
	}
	{
		StartingObject_t2785957559 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_x_1();
		StartingObject_t2785957559 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_y_2();
		bool L_10 = Board_IsWithinBounds_m774777251(__this, L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		StartingObject_t2785957559 * L_11 = V_0;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = L_11->get_prefab_0();
		StartingObject_t2785957559 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_x_1();
		StartingObject_t2785957559 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_y_2();
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (((float)((float)L_14))), (((float)((float)L_16))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_18 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_19 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_12, L_17, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_3 = L_19;
		GameObject_t1113636619 * L_20 = V_3;
		StartingObject_t2785957559 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_x_1();
		StartingObject_t2785957559 * L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_y_2();
		int32_t L_25 = __this->get_fillYOffset_27();
		float L_26 = __this->get_fillMoveTime_28();
		Board_MakeGamePiece_m541058416(__this, L_20, L_22, L_24, L_25, L_26, /*hidden argument*/NULL);
	}

IL_0077:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_28 = V_2;
		StartingObjectU5BU5D_t3554278542* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Board::SetupCamera()
extern "C"  void Board_SetupCamera_m2158447469 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t4157153871 * G_B2_0 = NULL;
	Camera_t4157153871 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Camera_t4157153871 * G_B3_1 = NULL;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_width_2();
		int32_t L_3 = __this->get_height_3();
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))))/(float)(2.0f))), ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))))/(float)(2.0f))), (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_4, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)((float)L_5)))/(float)(((float)((float)L_6)))));
		int32_t L_7 = __this->get_height_3();
		int32_t L_8 = __this->get_borderSize_4();
		V_1 = ((float)il2cpp_codegen_add((float)((float)((float)(((float)((float)L_7)))/(float)(2.0f))), (float)(((float)((float)L_8)))));
		int32_t L_9 = __this->get_width_2();
		int32_t L_10 = __this->get_borderSize_4();
		float L_11 = V_0;
		V_2 = ((float)((float)((float)il2cpp_codegen_add((float)((float)((float)(((float)((float)L_9)))/(float)(2.0f))), (float)(((float)((float)L_10)))))/(float)L_11));
		Camera_t4157153871 * L_12 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = V_1;
		float L_14 = V_2;
		G_B1_0 = L_12;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			G_B2_0 = L_12;
			goto IL_0085;
		}
	}
	{
		float L_15 = V_1;
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		goto IL_0086;
	}

IL_0085:
	{
		float L_16 = V_2;
		G_B3_0 = L_16;
		G_B3_1 = G_B2_0;
	}

IL_0086:
	{
		NullCheck(G_B3_1);
		Camera_set_orthographicSize_m76971700(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Board::GetRandomObject(UnityEngine.GameObject[])
extern "C"  GameObject_t1113636619 * Board_GetRandomObject_m1852001915 (Board_t3688305287 * __this, GameObjectU5BU5D_t3328599146* ___objectArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetRandomObject_m1852001915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = ___objectArray0;
		NullCheck(L_0);
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		GameObjectU5BU5D_t3328599146* L_2 = ___objectArray0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t1113636619 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral990639185, L_9, _stringLiteral2713653176, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0032:
	{
		GameObjectU5BU5D_t3328599146* L_11 = ___objectArray0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t1113636619 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return L_14;
	}
}
// UnityEngine.GameObject Board::GetRandomGamePiece()
extern "C"  GameObject_t1113636619 * Board_GetRandomGamePiece_m855311339 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_gamePiecePrefabs_7();
		GameObject_t1113636619 * L_1 = Board_GetRandomObject_m1852001915(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject Board::GetRandomCollectible()
extern "C"  GameObject_t1113636619 * Board_GetRandomCollectible_m1105116223 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_collectiblePrefabs_15();
		GameObject_t1113636619 * L_1 = Board_GetRandomObject_m1852001915(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Board::PlaceGamePiece(GamePiece,System.Int32,System.Int32)
extern "C"  void Board_PlaceGamePiece_m976255011 (Board_t3688305287 * __this, GamePiece_t2515063641 * ___gamePiece0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_PlaceGamePiece_m976255011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GamePiece_t2515063641 * L_0 = ___gamePiece0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral218241762, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		GamePiece_t2515063641 * L_2 = ___gamePiece0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___x1;
		int32_t L_5 = ___y2;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (((float)((float)L_4))), (((float)((float)L_5))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m3387557959(L_3, L_6, /*hidden argument*/NULL);
		GamePiece_t2515063641 * L_7 = ___gamePiece0;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_9 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m3524318132(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___x1;
		int32_t L_11 = ___y2;
		bool L_12 = Board_IsWithinBounds_m774777251(__this, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_13 = __this->get_m_allGamePieces_20();
		int32_t L_14 = ___x1;
		int32_t L_15 = ___y2;
		GamePiece_t2515063641 * L_16 = ___gamePiece0;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_13);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_13)->SetAt(L_14, L_15, L_16);
	}

IL_005b:
	{
		GamePiece_t2515063641 * L_17 = ___gamePiece0;
		int32_t L_18 = ___x1;
		int32_t L_19 = ___y2;
		NullCheck(L_17);
		GamePiece_SetCoordinates_m696969722(L_17, L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Board::IsWithinBounds(System.Int32,System.Int32)
extern "C"  bool Board_IsWithinBounds_m774777251 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___x0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ___x0;
		int32_t L_2 = __this->get_width_2();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___y1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = ___y1;
		int32_t L_5 = __this->get_height_3();
		G_B5_0 = ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		return (bool)G_B5_0;
	}
}
// GamePiece Board::FillRandomGamePieceAt(System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  GamePiece_t2515063641 * Board_FillRandomGamePieceAt_m2210676435 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___falseYOffset2, float ___moveTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FillRandomGamePieceAt_m2210676435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		bool L_2 = Board_IsWithinBounds_m774777251(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Board_GetRandomGamePiece_m855311339(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_6;
		GameObject_t1113636619 * L_7 = V_0;
		int32_t L_8 = ___x0;
		int32_t L_9 = ___y1;
		int32_t L_10 = ___falseYOffset2;
		float L_11 = ___moveTime3;
		Board_MakeGamePiece_m541058416(__this, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_0;
		NullCheck(L_12);
		GamePiece_t2515063641 * L_13 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_12, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		return L_13;
	}

IL_0036:
	{
		return (GamePiece_t2515063641 *)NULL;
	}
}
// GamePiece Board::FillRandomCollectibleAt(System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  GamePiece_t2515063641 * Board_FillRandomCollectibleAt_m1108202506 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___falseYOffset2, float ___moveTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FillRandomCollectibleAt_m1108202506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		bool L_2 = Board_IsWithinBounds_m774777251(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Board_GetRandomCollectible_m1105116223(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_6;
		GameObject_t1113636619 * L_7 = V_0;
		int32_t L_8 = ___x0;
		int32_t L_9 = ___y1;
		int32_t L_10 = ___falseYOffset2;
		float L_11 = ___moveTime3;
		Board_MakeGamePiece_m541058416(__this, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_0;
		NullCheck(L_12);
		GamePiece_t2515063641 * L_13 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_12, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		return L_13;
	}

IL_0036:
	{
		return (GamePiece_t2515063641 *)NULL;
	}
}
// System.Void Board::FillBoardFromList(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_FillBoardFromList_m2380270472 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FillBoardFromList_m2380270472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t2361323135 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		Queue_1_t2361323135 * L_1 = (Queue_1_t2361323135 *)il2cpp_codegen_object_new(Queue_1_t2361323135_il2cpp_TypeInfo_var);
		Queue_1__ctor_m2804821561(L_1, L_0, /*hidden argument*/Queue_1__ctor_m2804821561_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = ((int32_t)100);
		V_2 = 0;
		V_3 = 0;
		goto IL_00c6;
	}

IL_0013:
	{
		V_4 = 0;
		goto IL_00b5;
	}

IL_001b:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_2 = __this->get_m_allGamePieces_20();
		int32_t L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_2);
		GamePiece_t2515063641 * L_5 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_2)->GetAt(L_3, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00af;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_7 = __this->get_m_allTiles_19();
		int32_t L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_7);
		Tile_t2634157908 * L_10 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_7)->GetAt(L_8, L_9);
		NullCheck(L_10);
		int32_t L_11 = L_10->get_tileType_4();
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_00af;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_12 = __this->get_m_allGamePieces_20();
		int32_t L_13 = V_3;
		int32_t L_14 = V_4;
		Queue_1_t2361323135 * L_15 = V_0;
		NullCheck(L_15);
		GamePiece_t2515063641 * L_16 = Queue_1_Dequeue_m1265396441(L_15, /*hidden argument*/Queue_1_Dequeue_m1265396441_RuntimeMethod_var);
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_12);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_12)->SetAt(L_13, L_14, L_16);
		V_2 = 0;
		goto IL_00a0;
	}

IL_0068:
	{
		Queue_1_t2361323135 * L_17 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_18 = __this->get_m_allGamePieces_20();
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_18);
		GamePiece_t2515063641 * L_21 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_18)->GetAt(L_19, L_20);
		NullCheck(L_17);
		Queue_1_Enqueue_m1646656314(L_17, L_21, /*hidden argument*/Queue_1_Enqueue_m1646656314_RuntimeMethod_var);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_22 = __this->get_m_allGamePieces_20();
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		Queue_1_t2361323135 * L_25 = V_0;
		NullCheck(L_25);
		GamePiece_t2515063641 * L_26 = Queue_1_Dequeue_m1265396441(L_25, /*hidden argument*/Queue_1_Dequeue_m1265396441_RuntimeMethod_var);
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_22);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_22)->SetAt(L_23, L_24, L_26);
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00af;
	}

IL_00a0:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		bool L_32 = Board_HasMatchOnFill_m2754632473(__this, L_30, L_31, 3, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0068;
		}
	}

IL_00af:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = __this->get_height_3();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00c6:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->get_width_2();
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void Board::FillBoard(System.Int32,System.Single)
extern "C"  void Board_FillBoard_m4135356354 (Board_t3688305287 * __this, int32_t ___falseYOffset0, float ___moveTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FillBoard_m4135356354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = ((int32_t)100);
		V_1 = 0;
		V_2 = 0;
		goto IL_00db;
	}

IL_000c:
	{
		V_3 = 0;
		goto IL_00cb;
	}

IL_0013:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_0 = __this->get_m_allGamePieces_20();
		int32_t L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_0);
		GamePiece_t2515063641 * L_3 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_0)->GetAt(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00c7;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_5 = __this->get_m_allTiles_19();
		int32_t L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_5);
		Tile_t2634157908 * L_8 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_5)->GetAt(L_6, L_7);
		NullCheck(L_8);
		int32_t L_9 = L_8->get_tileType_4();
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_10 = V_3;
		int32_t L_11 = __this->get_height_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1))))))
		{
			goto IL_007a;
		}
	}
	{
		bool L_12 = Board_CanAddCollectible_m859479024(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15 = ___falseYOffset0;
		float L_16 = ___moveTime1;
		Board_FillRandomCollectibleAt_m1108202506(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_collectibleCount_13();
		__this->set_collectibleCount_13(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		goto IL_00c7;
	}

IL_007a:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = ___falseYOffset0;
		float L_21 = ___moveTime1;
		Board_FillRandomGamePieceAt_m2210676435(__this, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00b9;
	}

IL_008c:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		Board_ClearPieceAt_m1883174847(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = ___falseYOffset0;
		float L_27 = ___moveTime1;
		Board_FillRandomGamePieceAt_m2210676435(__this, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00b9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1492276719, /*hidden argument*/NULL);
		goto IL_00c7;
	}

IL_00b9:
	{
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		bool L_33 = Board_HasMatchOnFill_m2754632473(__this, L_31, L_32, 3, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_008c;
		}
	}

IL_00c7:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cb:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->get_height_3();
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00db:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = __this->get_width_2();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Boolean Board::HasMatchOnFill(System.Int32,System.Int32,System.Int32)
extern "C"  bool Board_HasMatchOnFill_m2754632473 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___minLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_HasMatchOnFill_m2754632473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	List_1_t3987138383 * V_1 = NULL;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (-1.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_3 = ___minLength2;
		List_1_t3987138383 * L_4 = Board_FindMatches_m2154912501(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___x0;
		int32_t L_6 = ___y1;
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), (0.0f), (-1.0f), /*hidden argument*/NULL);
		int32_t L_8 = ___minLength2;
		List_1_t3987138383 * L_9 = Board_FindMatches_m2154912501(__this, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		List_1_t3987138383 * L_10 = V_0;
		if (L_10)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t3987138383 * L_11 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_11, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_11;
	}

IL_003e:
	{
		List_1_t3987138383 * L_12 = V_1;
		if (L_12)
		{
			goto IL_004a;
		}
	}
	{
		List_1_t3987138383 * L_13 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_13, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_1 = L_13;
	}

IL_004a:
	{
		List_1_t3987138383 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m2409895218(L_14, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		List_1_t3987138383 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m2409895218(L_16, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B7_0 = 1;
	}

IL_0062:
	{
		return (bool)G_B7_0;
	}
}
// System.Void Board::ClickTile(Tile)
extern "C"  void Board_ClickTile_m1521009140 (Board_t3688305287 * __this, Tile_t2634157908 * ___tile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ClickTile_m1521009140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tile_t2634157908 * L_0 = __this->get_m_clickedTile_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Tile_t2634157908 * L_2 = ___tile0;
		__this->set_m_clickedTile_21(L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Board::DragToTile(Tile)
extern "C"  void Board_DragToTile_m2909868625 (Board_t3688305287 * __this, Tile_t2634157908 * ___tile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_DragToTile_m2909868625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tile_t2634157908 * L_0 = __this->get_m_clickedTile_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Tile_t2634157908 * L_2 = ___tile0;
		Tile_t2634157908 * L_3 = __this->get_m_clickedTile_21();
		bool L_4 = Board_IsNextTo_m3991491634(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		Tile_t2634157908 * L_5 = ___tile0;
		__this->set_m_targetTile_22(L_5);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Board::ReleaseTile()
extern "C"  void Board_ReleaseTile_m2927120086 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ReleaseTile_m2927120086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tile_t2634157908 * L_0 = __this->get_m_clickedTile_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Tile_t2634157908 * L_2 = __this->get_m_targetTile_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Tile_t2634157908 * L_4 = __this->get_m_clickedTile_21();
		Tile_t2634157908 * L_5 = __this->get_m_targetTile_22();
		Board_SwitchTiles_m3793453304(__this, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		__this->set_m_clickedTile_21((Tile_t2634157908 *)NULL);
		__this->set_m_targetTile_22((Tile_t2634157908 *)NULL);
		return;
	}
}
// System.Void Board::SwitchTiles(Tile,Tile)
extern "C"  void Board_SwitchTiles_m3793453304 (Board_t3688305287 * __this, Tile_t2634157908 * ___clickedTile0, Tile_t2634157908 * ___targetTile1, const RuntimeMethod* method)
{
	{
		Tile_t2634157908 * L_0 = ___clickedTile0;
		Tile_t2634157908 * L_1 = ___targetTile1;
		RuntimeObject* L_2 = Board_SwitchTilesRoutine_m1110949943(__this, L_0, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Board::SwitchTilesRoutine(Tile,Tile)
extern "C"  RuntimeObject* Board_SwitchTilesRoutine_m1110949943 (Board_t3688305287 * __this, Tile_t2634157908 * ___clickedTile0, Tile_t2634157908 * ___targetTile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_SwitchTilesRoutine_m1110949943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * V_0 = NULL;
	{
		U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * L_0 = (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 *)il2cpp_codegen_object_new(U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579_il2cpp_TypeInfo_var);
		U3CSwitchTilesRoutineU3Ec__Iterator0__ctor_m1426358335(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * L_1 = V_0;
		Tile_t2634157908 * L_2 = ___clickedTile0;
		NullCheck(L_1);
		L_1->set_clickedTile_0(L_2);
		U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * L_3 = V_0;
		Tile_t2634157908 * L_4 = ___targetTile1;
		NullCheck(L_3);
		L_3->set_targetTile_2(L_4);
		U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_8(__this);
		U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Board::IsNextTo(Tile,Tile)
extern "C"  bool Board_IsNextTo_m3991491634 (Board_t3688305287 * __this, Tile_t2634157908 * ___start0, Tile_t2634157908 * ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_IsNextTo_m3991491634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tile_t2634157908 * L_0 = ___start0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_xIndex_2();
		Tile_t2634157908 * L_2 = ___end1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_xIndex_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Abs_m2460432655(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		Tile_t2634157908 * L_5 = ___start0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_yIndex_3();
		Tile_t2634157908 * L_7 = ___end1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_yIndex_3();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)1;
	}

IL_002b:
	{
		Tile_t2634157908 * L_9 = ___start0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_yIndex_3();
		Tile_t2634157908 * L_11 = ___end1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_yIndex_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_13 = Mathf_Abs_m2460432655(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_12)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0056;
		}
	}
	{
		Tile_t2634157908 * L_14 = ___start0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_xIndex_2();
		Tile_t2634157908 * L_16 = ___end1;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_xIndex_2();
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)1;
	}

IL_0056:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindMatches(System.Int32,System.Int32,UnityEngine.Vector2,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindMatches_m2154912501 (Board_t3688305287 * __this, int32_t ___startX0, int32_t ___startY1, Vector2_t2156229523  ___searchDirection2, int32_t ___minLength3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindMatches_m2154912501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	GamePiece_t2515063641 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	GamePiece_t2515063641 * V_6 = NULL;
	int32_t G_B8_0 = 0;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (GamePiece_t2515063641 *)NULL;
		int32_t L_1 = ___startX0;
		int32_t L_2 = ___startY1;
		bool L_3 = Board_IsWithinBounds_m774777251(__this, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_4 = __this->get_m_allGamePieces_20();
		int32_t L_5 = ___startX0;
		int32_t L_6 = ___startY1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_4);
		GamePiece_t2515063641 * L_7 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_4)->GetAt(L_5, L_6);
		V_1 = L_7;
	}

IL_0023:
	{
		GamePiece_t2515063641 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		List_1_t3987138383 * L_10 = V_0;
		GamePiece_t2515063641 * L_11 = V_1;
		NullCheck(L_10);
		List_1_Add_m2660902508(L_10, L_11, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
		goto IL_003d;
	}

IL_003b:
	{
		return (List_1_t3987138383 *)NULL;
	}

IL_003d:
	{
		int32_t L_12 = __this->get_width_2();
		int32_t L_13 = __this->get_height_3();
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_14 = __this->get_width_2();
		G_B8_0 = L_14;
		goto IL_005f;
	}

IL_0059:
	{
		int32_t L_15 = __this->get_height_3();
		G_B8_0 = L_15;
	}

IL_005f:
	{
		V_4 = G_B8_0;
		V_5 = 1;
		goto IL_011b;
	}

IL_0069:
	{
		int32_t L_16 = ___startX0;
		float L_17 = (&___searchDirection2)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_17, (-1.0f), (1.0f), /*hidden argument*/NULL);
		int32_t L_19 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_18))), (int32_t)L_19))));
		int32_t L_20 = ___startY1;
		float L_21 = (&___searchDirection2)->get_y_1();
		float L_22 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_21, (-1.0f), (1.0f), /*hidden argument*/NULL);
		int32_t L_23 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)L_22))), (int32_t)L_23))));
		int32_t L_24 = V_2;
		int32_t L_25 = V_3;
		bool L_26 = Board_IsWithinBounds_m774777251(__this, L_24, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_0126;
	}

IL_00b5:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_27 = __this->get_m_allGamePieces_20();
		int32_t L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_27);
		GamePiece_t2515063641 * L_30 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_27)->GetAt(L_28, L_29);
		V_6 = L_30;
		GamePiece_t2515063641 * L_31 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_31, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_0126;
	}

IL_00d6:
	{
		GamePiece_t2515063641 * L_33 = V_6;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_matchValue_7();
		GamePiece_t2515063641 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_matchValue_7();
		if ((!(((uint32_t)L_34) == ((uint32_t)L_36))))
		{
			goto IL_0110;
		}
	}
	{
		List_1_t3987138383 * L_37 = V_0;
		GamePiece_t2515063641 * L_38 = V_6;
		NullCheck(L_37);
		bool L_39 = List_1_Contains_m4165534979(L_37, L_38, /*hidden argument*/List_1_Contains_m4165534979_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0110;
		}
	}
	{
		GamePiece_t2515063641 * L_40 = V_6;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_matchValue_7();
		if ((((int32_t)L_41) == ((int32_t)((int32_t)12))))
		{
			goto IL_0110;
		}
	}
	{
		List_1_t3987138383 * L_42 = V_0;
		GamePiece_t2515063641 * L_43 = V_6;
		NullCheck(L_42);
		List_1_Add_m2660902508(L_42, L_43, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
		goto IL_0115;
	}

IL_0110:
	{
		goto IL_0126;
	}

IL_0115:
	{
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_011b:
	{
		int32_t L_45 = V_5;
		int32_t L_46 = V_4;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)))))
		{
			goto IL_0069;
		}
	}

IL_0126:
	{
		List_1_t3987138383 * L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = List_1_get_Count_m2409895218(L_47, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		int32_t L_49 = ___minLength3;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0135;
		}
	}
	{
		List_1_t3987138383 * L_50 = V_0;
		return L_50;
	}

IL_0135:
	{
		return (List_1_t3987138383 *)NULL;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindVerticalMatches(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindVerticalMatches_m3863594397 (Board_t3688305287 * __this, int32_t ___startX0, int32_t ___startY1, int32_t ___minLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindVerticalMatches_m3863594397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	List_1_t3987138383 * V_1 = NULL;
	List_1_t3987138383 * V_2 = NULL;
	List_1_t3987138383 * G_B7_0 = NULL;
	{
		int32_t L_0 = ___startX0;
		int32_t L_1 = ___startY1;
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		List_1_t3987138383 * L_3 = Board_FindMatches_m2154912501(__this, L_0, L_1, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___startX0;
		int32_t L_5 = ___startY1;
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), (0.0f), (-1.0f), /*hidden argument*/NULL);
		List_1_t3987138383 * L_7 = Board_FindMatches_m2154912501(__this, L_4, L_5, L_6, 2, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_t3987138383 * L_8 = V_0;
		if (L_8)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t3987138383 * L_9 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_9, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_003e:
	{
		List_1_t3987138383 * L_10 = V_1;
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		List_1_t3987138383 * L_11 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_11, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_004a:
	{
		List_1_t3987138383 * L_12 = V_0;
		List_1_t3987138383 * L_13 = V_1;
		RuntimeObject* L_14 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_15 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_14, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		V_2 = L_15;
		List_1_t3987138383 * L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m2409895218(L_16, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		int32_t L_18 = ___minLength2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0069;
		}
	}
	{
		List_1_t3987138383 * L_19 = V_2;
		G_B7_0 = L_19;
		goto IL_006a;
	}

IL_0069:
	{
		G_B7_0 = ((List_1_t3987138383 *)(NULL));
	}

IL_006a:
	{
		return G_B7_0;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindHorizontalMatches(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindHorizontalMatches_m3039601801 (Board_t3688305287 * __this, int32_t ___startX0, int32_t ___startY1, int32_t ___minLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindHorizontalMatches_m3039601801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	List_1_t3987138383 * V_1 = NULL;
	List_1_t3987138383 * V_2 = NULL;
	List_1_t3987138383 * G_B7_0 = NULL;
	{
		int32_t L_0 = ___startX0;
		int32_t L_1 = ___startY1;
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (1.0f), (0.0f), /*hidden argument*/NULL);
		List_1_t3987138383 * L_3 = Board_FindMatches_m2154912501(__this, L_0, L_1, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___startX0;
		int32_t L_5 = ___startY1;
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), (-1.0f), (0.0f), /*hidden argument*/NULL);
		List_1_t3987138383 * L_7 = Board_FindMatches_m2154912501(__this, L_4, L_5, L_6, 2, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_t3987138383 * L_8 = V_0;
		if (L_8)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t3987138383 * L_9 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_9, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_003e:
	{
		List_1_t3987138383 * L_10 = V_1;
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		List_1_t3987138383 * L_11 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_11, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_004a:
	{
		List_1_t3987138383 * L_12 = V_1;
		List_1_t3987138383 * L_13 = V_0;
		RuntimeObject* L_14 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_15 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_14, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		V_2 = L_15;
		List_1_t3987138383 * L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m2409895218(L_16, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		int32_t L_18 = ___minLength2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0069;
		}
	}
	{
		List_1_t3987138383 * L_19 = V_2;
		G_B7_0 = L_19;
		goto IL_006a;
	}

IL_0069:
	{
		G_B7_0 = ((List_1_t3987138383 *)(NULL));
	}

IL_006a:
	{
		return G_B7_0;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindMatchesAt(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindMatchesAt_m2762353033 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___minLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindMatchesAt_m2762353033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	List_1_t3987138383 * V_1 = NULL;
	List_1_t3987138383 * V_2 = NULL;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___minLength2;
		List_1_t3987138383 * L_3 = Board_FindHorizontalMatches_m3039601801(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___x0;
		int32_t L_5 = ___y1;
		int32_t L_6 = ___minLength2;
		List_1_t3987138383 * L_7 = Board_FindVerticalMatches_m3863594397(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		List_1_t3987138383 * L_8 = V_0;
		if (L_8)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t3987138383 * L_9 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_9, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0020:
	{
		List_1_t3987138383 * L_10 = V_1;
		if (L_10)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t3987138383 * L_11 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_11, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_002c:
	{
		List_1_t3987138383 * L_12 = V_0;
		List_1_t3987138383 * L_13 = V_1;
		RuntimeObject* L_14 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_15 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_14, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		V_2 = L_15;
		List_1_t3987138383 * L_16 = V_2;
		return L_16;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindMatchesAt(System.Collections.Generic.List`1<GamePiece>,System.Int32)
extern "C"  List_1_t3987138383 * Board_FindMatchesAt_m305391169 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, int32_t ___minLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindMatchesAt_m305391169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	GamePiece_t2515063641 * V_1 = NULL;
	Enumerator_t1581414964  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3987138383 * L_1 = ___gamePieces0;
		NullCheck(L_1);
		Enumerator_t1581414964  L_2 = List_1_GetEnumerator_m1773421007(L_1, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0012:
		{
			GamePiece_t2515063641 * L_3 = Enumerator_get_Current_m3778693135((&V_2), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t3987138383 * L_4 = V_0;
			GamePiece_t2515063641 * L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = L_5->get_xIndex_2();
			GamePiece_t2515063641 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_yIndex_3();
			int32_t L_9 = ___minLength1;
			List_1_t3987138383 * L_10 = Board_FindMatchesAt_m2762353033(__this, L_6, L_8, L_9, /*hidden argument*/NULL);
			RuntimeObject* L_11 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_4, L_10, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
			List_1_t3987138383 * L_12 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_11, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
			V_0 = L_12;
		}

IL_0039:
		{
			bool L_13 = Enumerator_MoveNext_m3882589515((&V_2), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x58, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_2), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0058:
	{
		List_1_t3987138383 * L_14 = V_0;
		return L_14;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindAllMatches()
extern "C"  List_1_t3987138383 * Board_FindAllMatches_m2302013884 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindAllMatches_m2302013884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t3987138383 * V_3 = NULL;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_000d:
	{
		V_2 = 0;
		goto IL_002f;
	}

IL_0014:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = V_2;
		List_1_t3987138383 * L_3 = Board_FindMatchesAt_m2762353033(__this, L_1, L_2, 3, /*hidden argument*/NULL);
		V_3 = L_3;
		List_1_t3987138383 * L_4 = V_0;
		List_1_t3987138383 * L_5 = V_3;
		RuntimeObject* L_6 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_7 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		V_0 = L_7;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = __this->get_height_3();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->get_width_2();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_14 = V_0;
		return L_14;
	}
}
// System.Void Board::HighlightTileOff(System.Int32,System.Int32)
extern "C"  void Board_HighlightTileOff_m4257695520 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_HighlightTileOff_m4257695520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3235626157 * V_0 = NULL;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Color_t2555686324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = __this->get_m_allTiles_19();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_0);
		Tile_t2634157908 * L_3 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_0)->GetAt(L_1, L_2);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_tileType_4();
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0065;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_5 = __this->get_m_allTiles_19();
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_5);
		Tile_t2634157908 * L_8 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_5)->GetAt(L_6, L_7);
		NullCheck(L_8);
		SpriteRenderer_t3235626157 * L_9 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_8, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_0 = L_9;
		SpriteRenderer_t3235626157 * L_10 = V_0;
		SpriteRenderer_t3235626157 * L_11 = V_0;
		NullCheck(L_11);
		Color_t2555686324  L_12 = SpriteRenderer_get_color_m904197748(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_r_0();
		SpriteRenderer_t3235626157 * L_14 = V_0;
		NullCheck(L_14);
		Color_t2555686324  L_15 = SpriteRenderer_get_color_m904197748(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_g_1();
		SpriteRenderer_t3235626157 * L_17 = V_0;
		NullCheck(L_17);
		Color_t2555686324  L_18 = SpriteRenderer_get_color_m904197748(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		float L_19 = (&V_3)->get_b_2();
		Color_t2555686324  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Color__ctor_m2943235014((&L_20), L_13, L_16, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		SpriteRenderer_set_color_m3056777566(L_10, L_20, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return;
	}
}
// System.Void Board::HighlightTileOn(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Board_HighlightTileOn_m418029858 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, Color_t2555686324  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_HighlightTileOn_m418029858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3235626157 * V_0 = NULL;
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = __this->get_m_allTiles_19();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_0);
		Tile_t2634157908 * L_3 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_0)->GetAt(L_1, L_2);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_tileType_4();
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_5 = __this->get_m_allTiles_19();
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_5);
		Tile_t2634157908 * L_8 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_5)->GetAt(L_6, L_7);
		NullCheck(L_8);
		SpriteRenderer_t3235626157 * L_9 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_8, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_0 = L_9;
		SpriteRenderer_t3235626157 * L_10 = V_0;
		Color_t2555686324  L_11 = ___color2;
		NullCheck(L_10);
		SpriteRenderer_set_color_m3056777566(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Board::HighlightMatchesAt(System.Int32,System.Int32)
extern "C"  void Board_HighlightMatchesAt_m914917651 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_HighlightMatchesAt_m914917651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	GamePiece_t2515063641 * V_1 = NULL;
	Enumerator_t1581414964  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		Board_HighlightTileOff_m4257695520(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		List_1_t3987138383 * L_4 = Board_FindMatchesAt_m2762353033(__this, L_2, L_3, 3, /*hidden argument*/NULL);
		V_0 = L_4;
		List_1_t3987138383 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m2409895218(L_5, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		List_1_t3987138383 * L_7 = V_0;
		NullCheck(L_7);
		Enumerator_t1581414964  L_8 = List_1_GetEnumerator_m1773421007(L_7, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_002a:
		{
			GamePiece_t2515063641 * L_9 = Enumerator_get_Current_m3778693135((&V_2), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_1 = L_9;
			GamePiece_t2515063641 * L_10 = V_1;
			NullCheck(L_10);
			int32_t L_11 = L_10->get_xIndex_2();
			GamePiece_t2515063641 * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->get_yIndex_3();
			GamePiece_t2515063641 * L_14 = V_1;
			NullCheck(L_14);
			SpriteRenderer_t3235626157 * L_15 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_14, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
			NullCheck(L_15);
			Color_t2555686324  L_16 = SpriteRenderer_get_color_m904197748(L_15, /*hidden argument*/NULL);
			Board_HighlightTileOn_m418029858(__this, L_11, L_13, L_16, /*hidden argument*/NULL);
		}

IL_004f:
		{
			bool L_17 = Enumerator_MoveNext_m3882589515((&V_2), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_002a;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_2), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		return;
	}
}
// System.Void Board::HighlightMatches()
extern "C"  void Board_HighlightMatches_m909300792 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_001a;
	}

IL_000e:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Board_HighlightMatchesAt_m914917651(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001a:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_height_3();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_width_2();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Board::HighlightPieces(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_HighlightPieces_m3168730545 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_HighlightPieces_m3168730545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t2515063641 * V_0 = NULL;
	Enumerator_t1581414964  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		NullCheck(L_0);
		Enumerator_t1581414964  L_1 = List_1_GetEnumerator_m1773421007(L_0, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_000c:
		{
			GamePiece_t2515063641 * L_2 = Enumerator_get_Current_m3778693135((&V_1), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_0 = L_2;
			GamePiece_t2515063641 * L_3 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_003d;
			}
		}

IL_0020:
		{
			GamePiece_t2515063641 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = L_5->get_xIndex_2();
			GamePiece_t2515063641 * L_7 = V_0;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_yIndex_3();
			GamePiece_t2515063641 * L_9 = V_0;
			NullCheck(L_9);
			SpriteRenderer_t3235626157 * L_10 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_9, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
			NullCheck(L_10);
			Color_t2555686324  L_11 = SpriteRenderer_get_color_m904197748(L_10, /*hidden argument*/NULL);
			Board_HighlightTileOn_m418029858(__this, L_6, L_8, L_11, /*hidden argument*/NULL);
		}

IL_003d:
		{
			bool L_12 = Enumerator_MoveNext_m3882589515((&V_1), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_000c;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_1), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void Board::ClearPieceAt(System.Int32,System.Int32)
extern "C"  void Board_ClearPieceAt_m1883174847 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ClearPieceAt_m1883174847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t2515063641 * V_0 = NULL;
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_0 = __this->get_m_allGamePieces_20();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_0);
		GamePiece_t2515063641 * L_3 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_0)->GetAt(L_1, L_2);
		V_0 = L_3;
		GamePiece_t2515063641 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_6 = __this->get_m_allGamePieces_20();
		int32_t L_7 = ___x0;
		int32_t L_8 = ___y1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_6);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_6)->SetAt(L_7, L_8, (GamePiece_t2515063641 *)NULL);
		GamePiece_t2515063641 * L_9 = V_0;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void Board::ClearBoard()
extern "C"  void Board_ClearBoard_m1714545786 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ClearBoard_m1714545786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0049;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_000e:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Board_ClearPieceAt_m1883174847(__this, L_0, L_1, /*hidden argument*/NULL);
		ParticleManager_t4052332083 * L_2 = __this->get_m_particleManager_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		ParticleManager_t4052332083 * L_4 = __this->get_m_particleManager_26();
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		ParticleManager_ClearPieceFXAt_m644113273(L_4, L_5, L_6, 0, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_height_3();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_width_2();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Board::ClearPieceAt(System.Collections.Generic.List`1<GamePiece>,System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_ClearPieceAt_m828649804 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, List_1_t3987138383 * ___bombedPieces1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ClearPieceAt_m828649804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t2515063641 * V_0 = NULL;
	Enumerator_t1581414964  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	TimeBonus_t1511394491 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		NullCheck(L_0);
		Enumerator_t1581414964  L_1 = List_1_GetEnumerator_m1773421007(L_0, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0111;
		}

IL_000c:
		{
			GamePiece_t2515063641 * L_2 = Enumerator_get_Current_m3778693135((&V_1), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_0 = L_2;
			GamePiece_t2515063641 * L_3 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0111;
			}
		}

IL_0020:
		{
			GamePiece_t2515063641 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = L_5->get_xIndex_2();
			GamePiece_t2515063641 * L_7 = V_0;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_yIndex_3();
			Board_ClearPieceAt_m1883174847(__this, L_6, L_8, /*hidden argument*/NULL);
			V_2 = 0;
			List_1_t3987138383 * L_9 = ___gamePieces0;
			NullCheck(L_9);
			int32_t L_10 = List_1_get_Count_m2409895218(L_9, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
			if ((((int32_t)L_10) < ((int32_t)4)))
			{
				goto IL_0043;
			}
		}

IL_0040:
		{
			V_2 = ((int32_t)20);
		}

IL_0043:
		{
			GameManager_t1536523654 * L_11 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_00bf;
			}
		}

IL_0053:
		{
			GameManager_t1536523654 * L_13 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
			GamePiece_t2515063641 * L_14 = V_0;
			int32_t L_15 = __this->get_m_scoreMultiplier_29();
			NullCheck(L_13);
			GameManager_ScorePoints_m1504656847(L_13, L_14, L_15, 0, /*hidden argument*/NULL);
			GamePiece_t2515063641 * L_16 = V_0;
			NullCheck(L_16);
			TimeBonus_t1511394491 * L_17 = Component_GetComponent_TisTimeBonus_t1511394491_m140418344(L_16, /*hidden argument*/Component_GetComponent_TisTimeBonus_t1511394491_m140418344_RuntimeMethod_var);
			V_3 = L_17;
			TimeBonus_t1511394491 * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_00bf;
			}
		}

IL_0078:
		{
			GameManager_t1536523654 * L_20 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
			TimeBonus_t1511394491 * L_21 = V_3;
			NullCheck(L_21);
			int32_t L_22 = L_21->get_bonusValue_2();
			NullCheck(L_20);
			GameManager_AddTime_m868571206(L_20, L_22, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, _stringLiteral3278628834);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3278628834);
			ObjectU5BU5D_t2843939325* L_24 = L_23;
			GamePiece_t2515063641 * L_25 = V_0;
			NullCheck(L_25);
			String_t* L_26 = Object_get_name_m4211327027(L_25, /*hidden argument*/NULL);
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, L_26);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_26);
			ObjectU5BU5D_t2843939325* L_27 = L_24;
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, _stringLiteral2606445996);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2606445996);
			ObjectU5BU5D_t2843939325* L_28 = L_27;
			TimeBonus_t1511394491 * L_29 = V_3;
			NullCheck(L_29);
			int32_t L_30 = L_29->get_bonusValue_2();
			int32_t L_31 = L_30;
			RuntimeObject * L_32 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_31);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_32);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_32);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		}

IL_00bf:
		{
			ParticleManager_t4052332083 * L_34 = __this->get_m_particleManager_26();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_35 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_34, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_0111;
			}
		}

IL_00d0:
		{
			List_1_t3987138383 * L_36 = ___bombedPieces1;
			GamePiece_t2515063641 * L_37 = V_0;
			NullCheck(L_36);
			bool L_38 = List_1_Contains_m4165534979(L_36, L_37, /*hidden argument*/List_1_Contains_m4165534979_RuntimeMethod_var);
			if (!L_38)
			{
				goto IL_00f9;
			}
		}

IL_00dc:
		{
			ParticleManager_t4052332083 * L_39 = __this->get_m_particleManager_26();
			GamePiece_t2515063641 * L_40 = V_0;
			NullCheck(L_40);
			int32_t L_41 = L_40->get_xIndex_2();
			GamePiece_t2515063641 * L_42 = V_0;
			NullCheck(L_42);
			int32_t L_43 = L_42->get_yIndex_3();
			NullCheck(L_39);
			ParticleManager_BombFXAt_m3785780858(L_39, L_41, L_43, 0, /*hidden argument*/NULL);
			goto IL_0111;
		}

IL_00f9:
		{
			ParticleManager_t4052332083 * L_44 = __this->get_m_particleManager_26();
			GamePiece_t2515063641 * L_45 = V_0;
			NullCheck(L_45);
			int32_t L_46 = L_45->get_xIndex_2();
			GamePiece_t2515063641 * L_47 = V_0;
			NullCheck(L_47);
			int32_t L_48 = L_47->get_yIndex_3();
			NullCheck(L_44);
			ParticleManager_ClearPieceFXAt_m644113273(L_44, L_46, L_48, 0, /*hidden argument*/NULL);
		}

IL_0111:
		{
			bool L_49 = Enumerator_MoveNext_m3882589515((&V_1), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_000c;
			}
		}

IL_011d:
		{
			IL2CPP_LEAVE(0x130, FINALLY_0122);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0122;
	}

FINALLY_0122:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_1), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(290)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(290)
	{
		IL2CPP_JUMP_TBL(0x130, IL_0130)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0130:
	{
		return;
	}
}
// System.Void Board::BreakTileAt(System.Int32,System.Int32)
extern "C"  void Board_BreakTileAt_m3903482239 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_BreakTileAt_m3903482239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tile_t2634157908 * V_0 = NULL;
	{
		TileU5B0___U2C0___U5D_t3330163934* L_0 = __this->get_m_allTiles_19();
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_0);
		Tile_t2634157908 * L_3 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_0)->GetAt(L_1, L_2);
		V_0 = L_3;
		Tile_t2634157908 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Tile_t2634157908 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_tileType_4();
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		ParticleManager_t4052332083 * L_8 = __this->get_m_particleManager_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		ParticleManager_t4052332083 * L_10 = __this->get_m_particleManager_26();
		Tile_t2634157908 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_breakableValue_8();
		int32_t L_13 = ___x0;
		int32_t L_14 = ___y1;
		NullCheck(L_10);
		ParticleManager_BreakTileFXAt_m1617400814(L_10, L_12, L_13, L_14, 0, /*hidden argument*/NULL);
	}

IL_004b:
	{
		Tile_t2634157908 * L_15 = V_0;
		NullCheck(L_15);
		Tile_BreakTile_m1777725321(L_15, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void Board::BreakTileAt(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_BreakTileAt_m3419637014 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_BreakTileAt_m3419637014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t2515063641 * V_0 = NULL;
	Enumerator_t1581414964  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		NullCheck(L_0);
		Enumerator_t1581414964  L_1 = List_1_GetEnumerator_m1773421007(L_0, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_000c:
		{
			GamePiece_t2515063641 * L_2 = Enumerator_get_Current_m3778693135((&V_1), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_0 = L_2;
			GamePiece_t2515063641 * L_3 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0032;
			}
		}

IL_0020:
		{
			GamePiece_t2515063641 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = L_5->get_xIndex_2();
			GamePiece_t2515063641 * L_7 = V_0;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_yIndex_3();
			Board_BreakTileAt_m3903482239(__this, L_6, L_8, /*hidden argument*/NULL);
		}

IL_0032:
		{
			bool L_9 = Enumerator_MoveNext_m3882589515((&V_1), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_1), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		return;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::CollapseColumn(System.Int32,System.Single)
extern "C"  List_1_t3987138383 * Board_CollapseColumn_m288295586 (Board_t3688305287 * __this, int32_t ___column0, float ___collapseTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_CollapseColumn_m288295586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00f8;
	}

IL_000d:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = __this->get_m_allGamePieces_20();
		int32_t L_2 = ___column0;
		int32_t L_3 = V_1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1);
		GamePiece_t2515063641 * L_4 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00f4;
		}
	}
	{
		TileU5B0___U2C0___U5D_t3330163934* L_6 = __this->get_m_allTiles_19();
		int32_t L_7 = ___column0;
		int32_t L_8 = V_1;
		NullCheck((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_6);
		Tile_t2634157908 * L_9 = ((TileU5B0___U2C0___U5D_t3330163934*)(TileU5B0___U2C0___U5D_t3330163934*)L_6)->GetAt(L_7, L_8);
		NullCheck(L_9);
		int32_t L_10 = L_9->get_tileType_4();
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_11 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		goto IL_00e8;
	}

IL_0046:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_12 = __this->get_m_allGamePieces_20();
		int32_t L_13 = ___column0;
		int32_t L_14 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_12);
		GamePiece_t2515063641 * L_15 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_12)->GetAt(L_13, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e4;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_17 = __this->get_m_allGamePieces_20();
		int32_t L_18 = ___column0;
		int32_t L_19 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_17);
		GamePiece_t2515063641 * L_20 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_17)->GetAt(L_18, L_19);
		int32_t L_21 = ___column0;
		int32_t L_22 = V_1;
		float L_23 = ___collapseTime1;
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		NullCheck(L_20);
		GamePiece_Move_m3643451982(L_20, L_21, L_22, ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))))))), /*hidden argument*/NULL);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_26 = __this->get_m_allGamePieces_20();
		int32_t L_27 = ___column0;
		int32_t L_28 = V_1;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_29 = __this->get_m_allGamePieces_20();
		int32_t L_30 = ___column0;
		int32_t L_31 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_29);
		GamePiece_t2515063641 * L_32 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_29)->GetAt(L_30, L_31);
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_26);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_26)->SetAt(L_27, L_28, L_32);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_33 = __this->get_m_allGamePieces_20();
		int32_t L_34 = ___column0;
		int32_t L_35 = V_1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_33);
		GamePiece_t2515063641 * L_36 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_33)->GetAt(L_34, L_35);
		int32_t L_37 = ___column0;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		GamePiece_SetCoordinates_m696969722(L_36, L_37, L_38, /*hidden argument*/NULL);
		List_1_t3987138383 * L_39 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_40 = __this->get_m_allGamePieces_20();
		int32_t L_41 = ___column0;
		int32_t L_42 = V_1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_40);
		GamePiece_t2515063641 * L_43 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_40)->GetAt(L_41, L_42);
		NullCheck(L_39);
		bool L_44 = List_1_Contains_m4165534979(L_39, L_43, /*hidden argument*/List_1_Contains_m4165534979_RuntimeMethod_var);
		if (L_44)
		{
			goto IL_00d1;
		}
	}
	{
		List_1_t3987138383 * L_45 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_46 = __this->get_m_allGamePieces_20();
		int32_t L_47 = ___column0;
		int32_t L_48 = V_1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_46);
		GamePiece_t2515063641 * L_49 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_46)->GetAt(L_47, L_48);
		NullCheck(L_45);
		List_1_Add_m2660902508(L_45, L_49, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_00d1:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_50 = __this->get_m_allGamePieces_20();
		int32_t L_51 = ___column0;
		int32_t L_52 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_50);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_50)->SetAt(L_51, L_52, (GamePiece_t2515063641 *)NULL);
		goto IL_00f4;
	}

IL_00e4:
	{
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00e8:
	{
		int32_t L_54 = V_2;
		int32_t L_55 = __this->get_height_3();
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0046;
		}
	}

IL_00f4:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_00f8:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = __this->get_height_3();
		if ((((int32_t)L_57) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)))))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_59 = V_0;
		return L_59;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::CollapseColumn(System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t3987138383 * Board_CollapseColumn_m2464865477 (Board_t3688305287 * __this, List_1_t128053199 * ___columnsToCollapse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_CollapseColumn_m2464865477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t2017297076  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t128053199 * L_1 = ___columnsToCollapse0;
		NullCheck(L_1);
		Enumerator_t2017297076  L_2 = List_1_GetEnumerator_m593114157(L_1, /*hidden argument*/List_1_GetEnumerator_m593114157_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0012:
		{
			int32_t L_3 = Enumerator_get_Current_m207670954((&V_2), /*hidden argument*/Enumerator_get_Current_m207670954_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t3987138383 * L_4 = V_0;
			int32_t L_5 = V_1;
			List_1_t3987138383 * L_6 = Board_CollapseColumn_m288295586(__this, L_5, (0.1f), /*hidden argument*/NULL);
			RuntimeObject* L_7 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
			List_1_t3987138383 * L_8 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_7, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
			V_0 = L_8;
		}

IL_0032:
		{
			bool L_9 = Enumerator_MoveNext_m3181700225((&V_2), /*hidden argument*/Enumerator_MoveNext_m3181700225_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0012;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m222348240((&V_2), /*hidden argument*/Enumerator_Dispose_m222348240_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		List_1_t3987138383 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.List`1<System.Int32> Board::GetColumns(System.Collections.Generic.List`1<GamePiece>)
extern "C"  List_1_t128053199 * Board_GetColumns_m4057264076 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetColumns_m4057264076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	GamePiece_t2515063641 * V_1 = NULL;
	Enumerator_t1581414964  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3987138383 * L_1 = ___gamePieces0;
		NullCheck(L_1);
		Enumerator_t1581414964  L_2 = List_1_GetEnumerator_m1773421007(L_1, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0012:
		{
			GamePiece_t2515063641 * L_3 = Enumerator_get_Current_m3778693135((&V_2), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t128053199 * L_4 = V_0;
			GamePiece_t2515063641 * L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = L_5->get_xIndex_2();
			NullCheck(L_4);
			bool L_7 = List_1_Contains_m2263725670(L_4, L_6, /*hidden argument*/List_1_Contains_m2263725670_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			List_1_t128053199 * L_8 = V_0;
			GamePiece_t2515063641 * L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = L_9->get_xIndex_2();
			NullCheck(L_8);
			List_1_Add_m697420525(L_8, L_10, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		}

IL_0037:
		{
			bool L_11 = Enumerator_MoveNext_m3882589515((&V_2), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_2), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		List_1_t128053199 * L_12 = V_0;
		return L_12;
	}
}
// System.Void Board::ClearAndRefillBoard(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void Board_ClearAndRefillBoard_m3579737852 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		RuntimeObject* L_1 = Board_ClearAndRefillBoardRoutine_m1498106826(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Board::ClearAndRefillBoardRoutine(System.Collections.Generic.List`1<GamePiece>)
extern "C"  RuntimeObject* Board_ClearAndRefillBoardRoutine_m1498106826 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ClearAndRefillBoardRoutine_m1498106826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * V_0 = NULL;
	{
		U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * L_0 = (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 *)il2cpp_codegen_object_new(U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871_il2cpp_TypeInfo_var);
		U3CClearAndRefillBoardRoutineU3Ec__Iterator1__ctor_m3236499710(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * L_1 = V_0;
		List_1_t3987138383 * L_2 = ___gamePieces0;
		NullCheck(L_1);
		L_1->set_gamePieces_0(L_2);
		U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Board::ClearAndCollapseRoutine(System.Collections.Generic.List`1<GamePiece>)
extern "C"  RuntimeObject* Board_ClearAndCollapseRoutine_m798933950 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ClearAndCollapseRoutine_m798933950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * V_0 = NULL;
	{
		U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * L_0 = (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 *)il2cpp_codegen_object_new(U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387_il2cpp_TypeInfo_var);
		U3CClearAndCollapseRoutineU3Ec__Iterator2__ctor_m3919208797(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * L_1 = V_0;
		List_1_t3987138383 * L_2 = ___gamePieces0;
		NullCheck(L_1);
		L_1->set_gamePieces_3(L_2);
		U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_9(__this);
		U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Board::RefillRoutine()
extern "C"  RuntimeObject* Board_RefillRoutine_m1488639427 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_RefillRoutine_m1488639427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRefillRoutineU3Ec__Iterator3_t217515380 * V_0 = NULL;
	{
		U3CRefillRoutineU3Ec__Iterator3_t217515380 * L_0 = (U3CRefillRoutineU3Ec__Iterator3_t217515380 *)il2cpp_codegen_object_new(U3CRefillRoutineU3Ec__Iterator3_t217515380_il2cpp_TypeInfo_var);
		U3CRefillRoutineU3Ec__Iterator3__ctor_m860219970(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRefillRoutineU3Ec__Iterator3_t217515380 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CRefillRoutineU3Ec__Iterator3_t217515380 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Board::IsCollapsed(System.Collections.Generic.List`1<GamePiece>)
extern "C"  bool Board_IsCollapsed_m3450711880 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_IsCollapsed_m3450711880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t2515063641 * V_0 = NULL;
	Enumerator_t1581414964  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		NullCheck(L_0);
		Enumerator_t1581414964  L_1 = List_1_GetEnumerator_m1773421007(L_0, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_000c:
		{
			GamePiece_t2515063641 * L_2 = Enumerator_get_Current_m3778693135((&V_1), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_0 = L_2;
			GamePiece_t2515063641 * L_3 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0079;
			}
		}

IL_0020:
		{
			GamePiece_t2515063641 * L_5 = V_0;
			NullCheck(L_5);
			Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			float L_8 = (&V_2)->get_y_2();
			GamePiece_t2515063641 * L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10 = L_9->get_yIndex_3();
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_8, (float)(((float)((float)L_10)))))) > ((float)(0.001f)))))
			{
				goto IL_004c;
			}
		}

IL_0045:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x9A, FINALLY_008a);
		}

IL_004c:
		{
			GamePiece_t2515063641 * L_11 = V_0;
			NullCheck(L_11);
			Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
			V_4 = L_13;
			float L_14 = (&V_4)->get_x_1();
			GamePiece_t2515063641 * L_15 = V_0;
			NullCheck(L_15);
			int32_t L_16 = L_15->get_xIndex_2();
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_14, (float)(((float)((float)L_16)))))) > ((float)(0.001f)))))
			{
				goto IL_0079;
			}
		}

IL_0072:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x9A, FINALLY_008a);
		}

IL_0079:
		{
			bool L_17 = Enumerator_MoveNext_m3882589515((&V_1), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_000c;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_1), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0098:
	{
		return (bool)1;
	}

IL_009a:
	{
		bool L_18 = V_3;
		return L_18;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::GetRowPieces(System.Int32)
extern "C"  List_1_t3987138383 * Board_GetRowPieces_m880279812 (Board_t3688305287 * __this, int32_t ___row0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetRowPieces_m880279812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_000d:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = __this->get_m_allGamePieces_20();
		int32_t L_2 = V_1;
		int32_t L_3 = ___row0;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1);
		GamePiece_t2515063641 * L_4 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t3987138383 * L_6 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_7 = __this->get_m_allGamePieces_20();
		int32_t L_8 = V_1;
		int32_t L_9 = ___row0;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_7);
		GamePiece_t2515063641 * L_10 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_7)->GetAt(L_8, L_9);
		NullCheck(L_6);
		List_1_Add_m2660902508(L_6, L_10, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_0038:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->get_width_2();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_14 = V_0;
		return L_14;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::GetColumnPieces(System.Int32)
extern "C"  List_1_t3987138383 * Board_GetColumnPieces_m3981118180 (Board_t3688305287 * __this, int32_t ___column0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetColumnPieces_m3981118180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_000d:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = __this->get_m_allGamePieces_20();
		int32_t L_2 = ___column0;
		int32_t L_3 = V_1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1);
		GamePiece_t2515063641 * L_4 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t3987138383 * L_6 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_7 = __this->get_m_allGamePieces_20();
		int32_t L_8 = ___column0;
		int32_t L_9 = V_1;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_7);
		GamePiece_t2515063641 * L_10 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_7)->GetAt(L_8, L_9);
		NullCheck(L_6);
		List_1_Add_m2660902508(L_6, L_10, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_0038:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->get_height_3();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_14 = V_0;
		return L_14;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::GetAdjacentPieces(System.Int32,System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * Board_GetAdjacentPieces_m1903585789 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, int32_t ___offset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetAdjacentPieces_m1903585789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___offset2;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		goto IL_0049;
	}

IL_000f:
	{
		int32_t L_3 = ___y1;
		int32_t L_4 = ___offset2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		goto IL_003c;
	}

IL_0018:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		bool L_7 = Board_IsWithinBounds_m774777251(__this, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t3987138383 * L_8 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_9 = __this->get_m_allGamePieces_20();
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_9);
		GamePiece_t2515063641 * L_12 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_9)->GetAt(L_10, L_11);
		NullCheck(L_8);
		List_1_Add_m2660902508(L_8, L_12, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_0038:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = ___y1;
		int32_t L_16 = ___offset2;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___x0;
		int32_t L_20 = ___offset2;
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)))))
		{
			goto IL_000f;
		}
	}
	{
		List_1_t3987138383 * L_21 = V_0;
		return L_21;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::GetBombedPieces(System.Collections.Generic.List`1<GamePiece>)
extern "C"  List_1_t3987138383 * Board_GetBombedPieces_m2387319224 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GetBombedPieces_m2387319224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	GamePiece_t2515063641 * V_1 = NULL;
	Enumerator_t1581414964  V_2;
	memset(&V_2, 0, sizeof(V_2));
	List_1_t3987138383 * V_3 = NULL;
	Bomb_t3788669921 * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3987138383 * L_1 = ___gamePieces0;
		NullCheck(L_1);
		Enumerator_t1581414964  L_2 = List_1_GetEnumerator_m1773421007(L_1, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c3;
		}

IL_0012:
		{
			GamePiece_t2515063641 * L_3 = Enumerator_get_Current_m3778693135((&V_2), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_1 = L_3;
			GamePiece_t2515063641 * L_4 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_00c3;
			}
		}

IL_0026:
		{
			List_1_t3987138383 * L_6 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
			List_1__ctor_m1371417690(L_6, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
			V_3 = L_6;
			GamePiece_t2515063641 * L_7 = V_1;
			NullCheck(L_7);
			Bomb_t3788669921 * L_8 = Component_GetComponent_TisBomb_t3788669921_m15523362(L_7, /*hidden argument*/Component_GetComponent_TisBomb_t3788669921_m15523362_RuntimeMethod_var);
			V_4 = L_8;
			Bomb_t3788669921 * L_9 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00c3;
			}
		}

IL_0041:
		{
			Bomb_t3788669921 * L_11 = V_4;
			NullCheck(L_11);
			int32_t L_12 = L_11->get_bombType_10();
			V_5 = L_12;
			int32_t L_13 = V_5;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0068;
				}
				case 1:
				{
					goto IL_007b;
				}
				case 2:
				{
					goto IL_008e;
				}
				case 3:
				{
					goto IL_00a9;
				}
			}
		}

IL_0063:
		{
			goto IL_00ae;
		}

IL_0068:
		{
			Bomb_t3788669921 * L_14 = V_4;
			NullCheck(L_14);
			int32_t L_15 = ((GamePiece_t2515063641 *)L_14)->get_xIndex_2();
			List_1_t3987138383 * L_16 = Board_GetColumnPieces_m3981118180(__this, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			goto IL_00ae;
		}

IL_007b:
		{
			Bomb_t3788669921 * L_17 = V_4;
			NullCheck(L_17);
			int32_t L_18 = ((GamePiece_t2515063641 *)L_17)->get_yIndex_3();
			List_1_t3987138383 * L_19 = Board_GetRowPieces_m880279812(__this, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			goto IL_00ae;
		}

IL_008e:
		{
			Bomb_t3788669921 * L_20 = V_4;
			NullCheck(L_20);
			int32_t L_21 = ((GamePiece_t2515063641 *)L_20)->get_xIndex_2();
			Bomb_t3788669921 * L_22 = V_4;
			NullCheck(L_22);
			int32_t L_23 = ((GamePiece_t2515063641 *)L_22)->get_yIndex_3();
			List_1_t3987138383 * L_24 = Board_GetAdjacentPieces_m1903585789(__this, L_21, L_23, 1, /*hidden argument*/NULL);
			V_3 = L_24;
			goto IL_00ae;
		}

IL_00a9:
		{
			goto IL_00ae;
		}

IL_00ae:
		{
			List_1_t3987138383 * L_25 = V_0;
			List_1_t3987138383 * L_26 = V_3;
			RuntimeObject* L_27 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
			List_1_t3987138383 * L_28 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_27, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
			V_0 = L_28;
			List_1_t3987138383 * L_29 = V_0;
			List_1_t3987138383 * L_30 = Board_RemoveCollectibles_m1284833940(__this, L_29, /*hidden argument*/NULL);
			V_0 = L_30;
		}

IL_00c3:
		{
			bool L_31 = Enumerator_MoveNext_m3882589515((&V_2), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0012;
			}
		}

IL_00cf:
		{
			IL2CPP_LEAVE(0xE2, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_2), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e2:
	{
		List_1_t3987138383 * L_32 = V_0;
		return L_32;
	}
}
// System.Boolean Board::IsCornerMatch(System.Collections.Generic.List`1<GamePiece>)
extern "C"  bool Board_IsCornerMatch_m4225474114 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_IsCornerMatch_m4225474114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GamePiece_t2515063641 * V_4 = NULL;
	Enumerator_t1581414964  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B18_0 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		V_2 = (-1);
		V_3 = (-1);
		List_1_t3987138383 * L_0 = ___gamePieces0;
		NullCheck(L_0);
		Enumerator_t1581414964  L_1 = List_1_GetEnumerator_m1773421007(L_0, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_5 = L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_0015:
		{
			GamePiece_t2515063641 * L_2 = Enumerator_get_Current_m3778693135((&V_5), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_4 = L_2;
			GamePiece_t2515063641 * L_3 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0086;
			}
		}

IL_002b:
		{
			int32_t L_5 = V_2;
			if ((((int32_t)L_5) == ((int32_t)(-1))))
			{
				goto IL_0039;
			}
		}

IL_0032:
		{
			int32_t L_6 = V_3;
			if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
			{
				goto IL_004e;
			}
		}

IL_0039:
		{
			GamePiece_t2515063641 * L_7 = V_4;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_xIndex_2();
			V_2 = L_8;
			GamePiece_t2515063641 * L_9 = V_4;
			NullCheck(L_9);
			int32_t L_10 = L_9->get_yIndex_3();
			V_3 = L_10;
			goto IL_0086;
		}

IL_004e:
		{
			GamePiece_t2515063641 * L_11 = V_4;
			NullCheck(L_11);
			int32_t L_12 = L_11->get_xIndex_2();
			int32_t L_13 = V_2;
			if ((((int32_t)L_12) == ((int32_t)L_13)))
			{
				goto IL_006a;
			}
		}

IL_005b:
		{
			GamePiece_t2515063641 * L_14 = V_4;
			NullCheck(L_14);
			int32_t L_15 = L_14->get_yIndex_3();
			int32_t L_16 = V_3;
			if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
			{
				goto IL_006a;
			}
		}

IL_0068:
		{
			V_1 = (bool)1;
		}

IL_006a:
		{
			GamePiece_t2515063641 * L_17 = V_4;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_xIndex_2();
			int32_t L_19 = V_2;
			if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
			{
				goto IL_0086;
			}
		}

IL_0077:
		{
			GamePiece_t2515063641 * L_20 = V_4;
			NullCheck(L_20);
			int32_t L_21 = L_20->get_yIndex_3();
			int32_t L_22 = V_3;
			if ((((int32_t)L_21) == ((int32_t)L_22)))
			{
				goto IL_0086;
			}
		}

IL_0084:
		{
			V_0 = (bool)1;
		}

IL_0086:
		{
			bool L_23 = Enumerator_MoveNext_m3882589515((&V_5), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0015;
			}
		}

IL_0092:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_5), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(151)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00ae;
		}
	}
	{
		bool L_25 = V_0;
		G_B18_0 = ((int32_t)(L_25));
		goto IL_00af;
	}

IL_00ae:
	{
		G_B18_0 = 0;
	}

IL_00af:
	{
		return (bool)G_B18_0;
	}
}
// UnityEngine.GameObject Board::DropBomb(System.Int32,System.Int32,UnityEngine.Vector2,System.Collections.Generic.List`1<GamePiece>)
extern "C"  GameObject_t1113636619 * Board_DropBomb_m4209785306 (Board_t3688305287 * __this, int32_t ___x0, int32_t ___y1, Vector2_t2156229523  ___swapDirection2, List_1_t3987138383 * ___gamePieces3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_DropBomb_m4209785306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	GameObject_t1113636619 * V_3 = NULL;
	GameObject_t1113636619 * V_4 = NULL;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		V_1 = ((int32_t)12);
		List_1_t3987138383 * L_0 = ___gamePieces3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_t3987138383 * L_1 = ___gamePieces3;
		int32_t L_2 = Board_FindMatchValue_m1911026667(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0015:
	{
		List_1_t3987138383 * L_3 = ___gamePieces3;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m2409895218(L_3, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)5)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)12))))
		{
			goto IL_0085;
		}
	}
	{
		List_1_t3987138383 * L_6 = ___gamePieces3;
		bool L_7 = Board_IsCornerMatch_m4225474114(__this, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_8 = __this->get_adjacentBombPrefabs_8();
		int32_t L_9 = V_1;
		GameObject_t1113636619 * L_10 = Board_FindGamePieceByMatchValue_m2636574511(__this, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		GameObject_t1113636619 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t1113636619 * L_13 = V_2;
		int32_t L_14 = ___x0;
		int32_t L_15 = ___y1;
		GameObject_t1113636619 * L_16 = Board_MakeBomb_m433889367(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_005b:
	{
		goto IL_0080;
	}

IL_0060:
	{
		GameObject_t1113636619 * L_17 = __this->get_colorBombPrefab_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		GameObject_t1113636619 * L_19 = __this->get_colorBombPrefab_11();
		int32_t L_20 = ___x0;
		int32_t L_21 = ___y1;
		GameObject_t1113636619 * L_22 = Board_MakeBomb_m433889367(__this, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_0080:
	{
		goto IL_00fb;
	}

IL_0085:
	{
		List_1_t3987138383 * L_23 = ___gamePieces3;
		NullCheck(L_23);
		int32_t L_24 = List_1_get_Count_m2409895218(L_23, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if ((!(((uint32_t)L_24) == ((uint32_t)4))))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)12))))
		{
			goto IL_00fb;
		}
	}
	{
		float L_26 = (&___swapDirection2)->get_x_0();
		if ((((float)L_26) == ((float)(0.0f))))
		{
			goto IL_00d4;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_27 = __this->get_rowBombPrefabs_10();
		int32_t L_28 = V_1;
		GameObject_t1113636619 * L_29 = Board_FindGamePieceByMatchValue_m2636574511(__this, L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		GameObject_t1113636619 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_31 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_30, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00cf;
		}
	}
	{
		GameObject_t1113636619 * L_32 = V_3;
		int32_t L_33 = ___x0;
		int32_t L_34 = ___y1;
		GameObject_t1113636619 * L_35 = Board_MakeBomb_m433889367(__this, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
	}

IL_00cf:
	{
		goto IL_00fb;
	}

IL_00d4:
	{
		GameObjectU5BU5D_t3328599146* L_36 = __this->get_rowBombPrefabs_10();
		int32_t L_37 = V_1;
		GameObject_t1113636619 * L_38 = Board_FindGamePieceByMatchValue_m2636574511(__this, L_36, L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		GameObject_t1113636619 * L_39 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_40 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_39, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00fb;
		}
	}
	{
		GameObject_t1113636619 * L_41 = V_4;
		int32_t L_42 = ___x0;
		int32_t L_43 = ___y1;
		GameObject_t1113636619 * L_44 = Board_MakeBomb_m433889367(__this, L_41, L_42, L_43, /*hidden argument*/NULL);
		V_0 = L_44;
	}

IL_00fb:
	{
		GameObject_t1113636619 * L_45 = V_0;
		return L_45;
	}
}
// System.Void Board::ActivateBomb(UnityEngine.GameObject)
extern "C"  void Board_ActivateBomb_m98435486 (Board_t3688305287 * __this, GameObject_t1113636619 * ___bomb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ActivateBomb_m98435486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = ___bomb0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_x_1();
		V_0 = (((int32_t)((int32_t)L_3)));
		GameObject_t1113636619 * L_4 = ___bomb0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_3)->get_y_2();
		V_2 = (((int32_t)((int32_t)L_7)));
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		bool L_10 = Board_IsWithinBounds_m774777251(__this, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_11 = __this->get_m_allGamePieces_20();
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		GameObject_t1113636619 * L_14 = ___bomb0;
		NullCheck(L_14);
		GamePiece_t2515063641 * L_15 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_14, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_11);
		((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_11)->SetAt(L_12, L_13, L_15);
	}

IL_004a:
	{
		return;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindAllMatchValue(MatchValue)
extern "C"  List_1_t3987138383 * Board_FindAllMatchValue_m3520378586 (Board_t3688305287 * __this, int32_t ___mValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindAllMatchValue_m3520378586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_006b;
	}

IL_000d:
	{
		V_2 = 0;
		goto IL_005b;
	}

IL_0014:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = __this->get_m_allGamePieces_20();
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1);
		GamePiece_t2515063641 * L_4 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_6 = __this->get_m_allGamePieces_20();
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_6);
		GamePiece_t2515063641 * L_9 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_6)->GetAt(L_7, L_8);
		NullCheck(L_9);
		int32_t L_10 = L_9->get_matchValue_7();
		int32_t L_11 = ___mValue0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0057;
		}
	}
	{
		List_1_t3987138383 * L_12 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_13 = __this->get_m_allGamePieces_20();
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_13);
		GamePiece_t2515063641 * L_16 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_13)->GetAt(L_14, L_15);
		NullCheck(L_12);
		List_1_Add_m2660902508(L_12, L_16, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = __this->get_height_3();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = __this->get_width_2();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_23 = V_0;
		return L_23;
	}
}
// System.Boolean Board::IsColorBomb(GamePiece)
extern "C"  bool Board_IsColorBomb_m3202758182 (Board_t3688305287 * __this, GamePiece_t2515063641 * ___gamePiece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_IsColorBomb_m3202758182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bomb_t3788669921 * V_0 = NULL;
	{
		GamePiece_t2515063641 * L_0 = ___gamePiece0;
		NullCheck(L_0);
		Bomb_t3788669921 * L_1 = Component_GetComponent_TisBomb_t3788669921_m15523362(L_0, /*hidden argument*/Component_GetComponent_TisBomb_t3788669921_m15523362_RuntimeMethod_var);
		V_0 = L_1;
		Bomb_t3788669921 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Bomb_t3788669921 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bombType_10();
		return (bool)((((int32_t)L_5) == ((int32_t)4))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindCollectiblesAt(System.Int32,System.Boolean)
extern "C"  List_1_t3987138383 * Board_FindCollectiblesAt_m3054997612 (Board_t3688305287 * __this, int32_t ___row0, bool ___clearedAtBottomOnly1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindCollectiblesAt_m3054997612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	Collectible_t2768877883 * V_2 = NULL;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0072;
	}

IL_000d:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = __this->get_m_allGamePieces_20();
		int32_t L_2 = V_1;
		int32_t L_3 = ___row0;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1);
		GamePiece_t2515063641 * L_4 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1)->GetAt(L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_6 = __this->get_m_allGamePieces_20();
		int32_t L_7 = V_1;
		int32_t L_8 = ___row0;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_6);
		GamePiece_t2515063641 * L_9 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_6)->GetAt(L_7, L_8);
		NullCheck(L_9);
		Collectible_t2768877883 * L_10 = Component_GetComponent_TisCollectible_t2768877883_m916769468(L_9, /*hidden argument*/Component_GetComponent_TisCollectible_t2768877883_m916769468_RuntimeMethod_var);
		V_2 = L_10;
		Collectible_t2768877883 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		bool L_13 = ___clearedAtBottomOnly1;
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		bool L_14 = ___clearedAtBottomOnly1;
		if (!L_14)
		{
			goto IL_006e;
		}
	}
	{
		Collectible_t2768877883 * L_15 = V_2;
		NullCheck(L_15);
		bool L_16 = L_15->get_clearedAtBottom_11();
		if (!L_16)
		{
			goto IL_006e;
		}
	}

IL_005b:
	{
		List_1_t3987138383 * L_17 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_18 = __this->get_m_allGamePieces_20();
		int32_t L_19 = V_1;
		int32_t L_20 = ___row0;
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_18);
		GamePiece_t2515063641 * L_21 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_18)->GetAt(L_19, L_20);
		NullCheck(L_17);
		List_1_Add_m2660902508(L_17, L_21, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_006e:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_width_2();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_25 = V_0;
		return L_25;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::FindAllCollectibles()
extern "C"  List_1_t3987138383 * Board_FindAllCollectibles_m1120343210 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindAllCollectibles_m1120343210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t3987138383 * V_2 = NULL;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0027;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		List_1_t3987138383 * L_2 = Board_FindCollectiblesAt_m3054997612(__this, L_1, (bool)0, /*hidden argument*/NULL);
		V_2 = L_2;
		List_1_t3987138383 * L_3 = V_0;
		List_1_t3987138383 * L_4 = V_2;
		RuntimeObject* L_5 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_6 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		V_0 = L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_height_3();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t3987138383 * L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Board::CanAddCollectible()
extern "C"  bool Board_CanAddCollectible_m859479024 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		float L_0 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_1 = __this->get_chanceForCollectible_14();
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_2 = __this->get_collectiblePrefabs_15();
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_3 = __this->get_collectibleCount_13();
		int32_t L_4 = __this->get_maxCollectibles_12();
		G_B4_0 = ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		return (bool)G_B4_0;
	}
}
// System.Collections.Generic.List`1<GamePiece> Board::RemoveCollectibles(System.Collections.Generic.List`1<GamePiece>)
extern "C"  List_1_t3987138383 * Board_RemoveCollectibles_m1284833940 (Board_t3688305287 * __this, List_1_t3987138383 * ___bombedPieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_RemoveCollectibles_m1284833940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	List_1_t3987138383 * V_1 = NULL;
	GamePiece_t2515063641 * V_2 = NULL;
	Enumerator_t1581414964  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Collectible_t2768877883 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = Board_FindAllCollectibles_m1120343210(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t3987138383 * L_1 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_1, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_1 = L_1;
		List_1_t3987138383 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t1581414964  L_3 = List_1_GetEnumerator_m1773421007(L_2, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_3 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_0019:
		{
			GamePiece_t2515063641 * L_4 = Enumerator_get_Current_m3778693135((&V_3), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_2 = L_4;
			GamePiece_t2515063641 * L_5 = V_2;
			NullCheck(L_5);
			Collectible_t2768877883 * L_6 = Component_GetComponent_TisCollectible_t2768877883_m916769468(L_5, /*hidden argument*/Component_GetComponent_TisCollectible_t2768877883_m916769468_RuntimeMethod_var);
			V_4 = L_6;
			Collectible_t2768877883 * L_7 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0049;
			}
		}

IL_0036:
		{
			Collectible_t2768877883 * L_9 = V_4;
			NullCheck(L_9);
			bool L_10 = L_9->get_clearedByBomb_10();
			if (L_10)
			{
				goto IL_0049;
			}
		}

IL_0042:
		{
			List_1_t3987138383 * L_11 = V_1;
			GamePiece_t2515063641 * L_12 = V_2;
			NullCheck(L_11);
			List_1_Add_m2660902508(L_11, L_12, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
		}

IL_0049:
		{
			bool L_13 = Enumerator_MoveNext_m3882589515((&V_3), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0019;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_3), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		List_1_t3987138383 * L_14 = ___bombedPieces0;
		List_1_t3987138383 * L_15 = V_1;
		RuntimeObject* L_16 = Enumerable_Except_TisGamePiece_t2515063641_m1956769829(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/Enumerable_Except_TisGamePiece_t2515063641_m1956769829_RuntimeMethod_var);
		List_1_t3987138383 * L_17 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_16, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		return L_17;
	}
}
// MatchValue Board::FindMatchValue(System.Collections.Generic.List`1<GamePiece>)
extern "C"  int32_t Board_FindMatchValue_m1911026667 (Board_t3688305287 * __this, List_1_t3987138383 * ___gamePieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindMatchValue_m1911026667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GamePiece_t2515063641 * V_0 = NULL;
	Enumerator_t1581414964  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3987138383 * L_0 = ___gamePieces0;
		NullCheck(L_0);
		Enumerator_t1581414964  L_1 = List_1_GetEnumerator_m1773421007(L_0, /*hidden argument*/List_1_GetEnumerator_m1773421007_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_000c:
		{
			GamePiece_t2515063641 * L_2 = Enumerator_get_Current_m3778693135((&V_1), /*hidden argument*/Enumerator_get_Current_m3778693135_RuntimeMethod_var);
			V_0 = L_2;
			GamePiece_t2515063641 * L_3 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0020:
		{
			GamePiece_t2515063641 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = L_5->get_matchValue_7();
			V_2 = L_6;
			IL2CPP_LEAVE(0x4E, FINALLY_003d);
		}

IL_002c:
		{
			bool L_7 = Enumerator_MoveNext_m3882589515((&V_1), /*hidden argument*/Enumerator_MoveNext_m3882589515_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000c;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m162058403((&V_1), /*hidden argument*/Enumerator_Dispose_m162058403_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return (int32_t)(((int32_t)12));
	}

IL_004e:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.GameObject Board::FindGamePieceByMatchValue(UnityEngine.GameObject[],MatchValue)
extern "C"  GameObject_t1113636619 * Board_FindGamePieceByMatchValue_m2636574511 (Board_t3688305287 * __this, GameObjectU5BU5D_t3328599146* ___gamePiecePrefabs0, int32_t ___matchValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_FindGamePieceByMatchValue_m2636574511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	GamePiece_t2515063641 * V_3 = NULL;
	{
		int32_t L_0 = ___matchValue1;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_000a;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_000a:
	{
		GameObjectU5BU5D_t3328599146* L_1 = ___gamePiecePrefabs0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_003c;
	}

IL_0013:
	{
		GameObjectU5BU5D_t3328599146* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t1113636619 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		GamePiece_t2515063641 * L_7 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_6, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		V_3 = L_7;
		GamePiece_t2515063641 * L_8 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		GamePiece_t2515063641 * L_10 = V_3;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_matchValue_7();
		int32_t L_12 = ___matchValue1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_15 = V_2;
		GameObjectU5BU5D_t3328599146* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// System.Void Board::TestDeadLock()
extern "C"  void Board_TestDeadLock_m3362457823 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		BoardDeadlock_t1667041069 * L_0 = __this->get_m_boardDeadlock_31();
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = __this->get_m_allGamePieces_20();
		NullCheck(L_0);
		BoardDeadlock_IsDeadlocked_m1749050910(L_0, (GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_1, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::ShuffleBoard()
extern "C"  void Board_ShuffleBoard_m2797163674 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_playerInputEnabled_23();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = Board_ShuffleBoardRoutine_m1798833413(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Collections.IEnumerator Board::ShuffleBoardRoutine()
extern "C"  RuntimeObject* Board_ShuffleBoardRoutine_m1798833413 (Board_t3688305287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_ShuffleBoardRoutine_m1798833413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * V_0 = NULL;
	{
		U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * L_0 = (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 *)il2cpp_codegen_object_new(U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714_il2cpp_TypeInfo_var);
		U3CShuffleBoardRoutineU3Ec__Iterator4__ctor_m3509774155(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_8(__this);
		U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board/<ClearAndCollapseRoutine>c__Iterator2::.ctor()
extern "C"  void U3CClearAndCollapseRoutineU3Ec__Iterator2__ctor_m3919208797 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Board/<ClearAndCollapseRoutine>c__Iterator2::MoveNext()
extern "C"  bool U3CClearAndCollapseRoutineU3Ec__Iterator2_MoveNext_m2440499875 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CClearAndCollapseRoutineU3Ec__Iterator2_MoveNext_m2440499875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_12();
		V_0 = L_0;
		__this->set_U24PC_12((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_0249;
			}
			case 3:
			{
				goto IL_0280;
			}
			case 4:
			{
				goto IL_02ba;
			}
			case 5:
			{
				goto IL_0366;
			}
			case 6:
			{
				goto IL_038c;
			}
		}
	}
	{
		goto IL_0393;
	}

IL_0035:
	{
		List_1_t3987138383 * L_2 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_2, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		__this->set_U3CmovingPiecesU3E__0_0(L_2);
		List_1_t3987138383 * L_3 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_3, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		__this->set_U3CmatchesU3E__0_1(L_3);
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, (0.4f), /*hidden argument*/NULL);
		__this->set_U24current_10(L_4);
		bool L_5 = __this->get_U24disposing_11();
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_U24PC_12(1);
	}

IL_006a:
	{
		goto IL_0395;
	}

IL_006f:
	{
		__this->set_U3CisFinishedU3E__0_2((bool)0);
		goto IL_0366;
	}

IL_007b:
	{
		Board_t3688305287 * L_6 = __this->get_U24this_9();
		List_1_t3987138383 * L_7 = __this->get_gamePieces_3();
		NullCheck(L_6);
		List_1_t3987138383 * L_8 = Board_GetBombedPieces_m2387319224(L_6, L_7, /*hidden argument*/NULL);
		__this->set_U3CbombedPiecesU3E__1_4(L_8);
		List_1_t3987138383 * L_9 = __this->get_gamePieces_3();
		List_1_t3987138383 * L_10 = __this->get_U3CbombedPiecesU3E__1_4();
		RuntimeObject* L_11 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_12 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_11, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		__this->set_gamePieces_3(L_12);
		Board_t3688305287 * L_13 = __this->get_U24this_9();
		List_1_t3987138383 * L_14 = __this->get_gamePieces_3();
		NullCheck(L_13);
		List_1_t3987138383 * L_15 = Board_GetBombedPieces_m2387319224(L_13, L_14, /*hidden argument*/NULL);
		__this->set_U3CbombedPiecesU3E__1_4(L_15);
		List_1_t3987138383 * L_16 = __this->get_gamePieces_3();
		List_1_t3987138383 * L_17 = __this->get_U3CbombedPiecesU3E__1_4();
		RuntimeObject* L_18 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_19 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_18, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		__this->set_gamePieces_3(L_19);
		Board_t3688305287 * L_20 = __this->get_U24this_9();
		NullCheck(L_20);
		List_1_t3987138383 * L_21 = Board_FindCollectiblesAt_m3054997612(L_20, 0, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CcollectedPiecesU3E__1_5(L_21);
		Board_t3688305287 * L_22 = __this->get_U24this_9();
		NullCheck(L_22);
		List_1_t3987138383 * L_23 = Board_FindAllCollectibles_m1120343210(L_22, /*hidden argument*/NULL);
		__this->set_U3CallCollectiblesU3E__1_6(L_23);
		List_1_t3987138383 * L_24 = __this->get_gamePieces_3();
		List_1_t3987138383 * L_25 = __this->get_U3CallCollectiblesU3E__1_6();
		RuntimeObject* L_26 = Enumerable_Intersect_TisGamePiece_t2515063641_m3480136198(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/Enumerable_Intersect_TisGamePiece_t2515063641_m3480136198_RuntimeMethod_var);
		List_1_t3987138383 * L_27 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_26, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		__this->set_U3CblockersU3E__1_7(L_27);
		List_1_t3987138383 * L_28 = __this->get_U3CcollectedPiecesU3E__1_5();
		List_1_t3987138383 * L_29 = __this->get_U3CblockersU3E__1_7();
		RuntimeObject* L_30 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_31 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_30, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		__this->set_U3CcollectedPiecesU3E__1_5(L_31);
		Board_t3688305287 * L_32 = __this->get_U24this_9();
		Board_t3688305287 * L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_collectibleCount_13();
		List_1_t3987138383 * L_35 = __this->get_U3CcollectedPiecesU3E__1_5();
		NullCheck(L_35);
		int32_t L_36 = List_1_get_Count_m2409895218(L_35, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		NullCheck(L_33);
		L_33->set_collectibleCount_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_36)));
		List_1_t3987138383 * L_37 = __this->get_gamePieces_3();
		List_1_t3987138383 * L_38 = __this->get_U3CcollectedPiecesU3E__1_5();
		RuntimeObject* L_39 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_40 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_39, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		__this->set_gamePieces_3(L_40);
		Board_t3688305287 * L_41 = __this->get_U24this_9();
		List_1_t3987138383 * L_42 = __this->get_gamePieces_3();
		NullCheck(L_41);
		List_1_t128053199 * L_43 = Board_GetColumns_m4057264076(L_41, L_42, /*hidden argument*/NULL);
		__this->set_U3CcolumnsToCollapseU3E__1_8(L_43);
		Board_t3688305287 * L_44 = __this->get_U24this_9();
		List_1_t3987138383 * L_45 = __this->get_gamePieces_3();
		List_1_t3987138383 * L_46 = __this->get_U3CbombedPiecesU3E__1_4();
		NullCheck(L_44);
		Board_ClearPieceAt_m828649804(L_44, L_45, L_46, /*hidden argument*/NULL);
		Board_t3688305287 * L_47 = __this->get_U24this_9();
		List_1_t3987138383 * L_48 = __this->get_gamePieces_3();
		NullCheck(L_47);
		Board_BreakTileAt_m3419637014(L_47, L_48, /*hidden argument*/NULL);
		Board_t3688305287 * L_49 = __this->get_U24this_9();
		NullCheck(L_49);
		GameObject_t1113636619 * L_50 = L_49->get_m_clickedTileBomb_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_51 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_50, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01ed;
		}
	}
	{
		Board_t3688305287 * L_52 = __this->get_U24this_9();
		Board_t3688305287 * L_53 = __this->get_U24this_9();
		NullCheck(L_53);
		GameObject_t1113636619 * L_54 = L_53->get_m_clickedTileBomb_16();
		NullCheck(L_52);
		Board_ActivateBomb_m98435486(L_52, L_54, /*hidden argument*/NULL);
		Board_t3688305287 * L_55 = __this->get_U24this_9();
		NullCheck(L_55);
		L_55->set_m_clickedTileBomb_16((GameObject_t1113636619 *)NULL);
	}

IL_01ed:
	{
		Board_t3688305287 * L_56 = __this->get_U24this_9();
		NullCheck(L_56);
		GameObject_t1113636619 * L_57 = L_56->get_m_targetTileBomb_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_57, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0225;
		}
	}
	{
		Board_t3688305287 * L_59 = __this->get_U24this_9();
		Board_t3688305287 * L_60 = __this->get_U24this_9();
		NullCheck(L_60);
		GameObject_t1113636619 * L_61 = L_60->get_m_targetTileBomb_17();
		NullCheck(L_59);
		Board_ActivateBomb_m98435486(L_59, L_61, /*hidden argument*/NULL);
		Board_t3688305287 * L_62 = __this->get_U24this_9();
		NullCheck(L_62);
		L_62->set_m_targetTileBomb_17((GameObject_t1113636619 *)NULL);
	}

IL_0225:
	{
		WaitForSeconds_t1699091251 * L_63 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_63, (0.2f), /*hidden argument*/NULL);
		__this->set_U24current_10(L_63);
		bool L_64 = __this->get_U24disposing_11();
		if (L_64)
		{
			goto IL_0244;
		}
	}
	{
		__this->set_U24PC_12(2);
	}

IL_0244:
	{
		goto IL_0395;
	}

IL_0249:
	{
		Board_t3688305287 * L_65 = __this->get_U24this_9();
		List_1_t128053199 * L_66 = __this->get_U3CcolumnsToCollapseU3E__1_8();
		NullCheck(L_65);
		List_1_t3987138383 * L_67 = Board_CollapseColumn_m2464865477(L_65, L_66, /*hidden argument*/NULL);
		__this->set_U3CmovingPiecesU3E__0_0(L_67);
		goto IL_0280;
	}

IL_0265:
	{
		__this->set_U24current_10(NULL);
		bool L_68 = __this->get_U24disposing_11();
		if (L_68)
		{
			goto IL_027b;
		}
	}
	{
		__this->set_U24PC_12(3);
	}

IL_027b:
	{
		goto IL_0395;
	}

IL_0280:
	{
		Board_t3688305287 * L_69 = __this->get_U24this_9();
		List_1_t3987138383 * L_70 = __this->get_U3CmovingPiecesU3E__0_0();
		NullCheck(L_69);
		bool L_71 = Board_IsCollapsed_m3450711880(L_69, L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0265;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_72 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_72, (0.2f), /*hidden argument*/NULL);
		__this->set_U24current_10(L_72);
		bool L_73 = __this->get_U24disposing_11();
		if (L_73)
		{
			goto IL_02b5;
		}
	}
	{
		__this->set_U24PC_12(4);
	}

IL_02b5:
	{
		goto IL_0395;
	}

IL_02ba:
	{
		Board_t3688305287 * L_74 = __this->get_U24this_9();
		List_1_t3987138383 * L_75 = __this->get_U3CmovingPiecesU3E__0_0();
		NullCheck(L_74);
		List_1_t3987138383 * L_76 = Board_FindMatchesAt_m305391169(L_74, L_75, 3, /*hidden argument*/NULL);
		__this->set_U3CmatchesU3E__0_1(L_76);
		Board_t3688305287 * L_77 = __this->get_U24this_9();
		NullCheck(L_77);
		List_1_t3987138383 * L_78 = Board_FindCollectiblesAt_m3054997612(L_77, 0, (bool)1, /*hidden argument*/NULL);
		__this->set_U3CcollectedPiecesU3E__1_5(L_78);
		List_1_t3987138383 * L_79 = __this->get_U3CmatchesU3E__0_1();
		List_1_t3987138383 * L_80 = __this->get_U3CcollectedPiecesU3E__1_5();
		RuntimeObject* L_81 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_82 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_81, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		__this->set_U3CmatchesU3E__0_1(L_82);
		List_1_t3987138383 * L_83 = __this->get_U3CmatchesU3E__0_1();
		NullCheck(L_83);
		int32_t L_84 = List_1_get_Count_m2409895218(L_83, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if (L_84)
		{
			goto IL_031d;
		}
	}
	{
		__this->set_U3CisFinishedU3E__0_2((bool)1);
		goto IL_0371;
	}

IL_031d:
	{
		Board_t3688305287 * L_85 = __this->get_U24this_9();
		Board_t3688305287 * L_86 = L_85;
		NullCheck(L_86);
		int32_t L_87 = L_86->get_m_scoreMultiplier_29();
		NullCheck(L_86);
		L_86->set_m_scoreMultiplier_29(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1)));
		Board_t3688305287 * L_88 = __this->get_U24this_9();
		Board_t3688305287 * L_89 = __this->get_U24this_9();
		List_1_t3987138383 * L_90 = __this->get_U3CmatchesU3E__0_1();
		NullCheck(L_89);
		RuntimeObject* L_91 = Board_ClearAndCollapseRoutine_m798933950(L_89, L_90, /*hidden argument*/NULL);
		NullCheck(L_88);
		Coroutine_t3829159415 * L_92 = MonoBehaviour_StartCoroutine_m3411253000(L_88, L_91, /*hidden argument*/NULL);
		__this->set_U24current_10(L_92);
		bool L_93 = __this->get_U24disposing_11();
		if (L_93)
		{
			goto IL_0361;
		}
	}
	{
		__this->set_U24PC_12(5);
	}

IL_0361:
	{
		goto IL_0395;
	}

IL_0366:
	{
		bool L_94 = __this->get_U3CisFinishedU3E__0_2();
		if (!L_94)
		{
			goto IL_007b;
		}
	}

IL_0371:
	{
		__this->set_U24current_10(NULL);
		bool L_95 = __this->get_U24disposing_11();
		if (L_95)
		{
			goto IL_0387;
		}
	}
	{
		__this->set_U24PC_12(6);
	}

IL_0387:
	{
		goto IL_0395;
	}

IL_038c:
	{
		__this->set_U24PC_12((-1));
	}

IL_0393:
	{
		return (bool)0;
	}

IL_0395:
	{
		return (bool)1;
	}
}
// System.Object Board/<ClearAndCollapseRoutine>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CClearAndCollapseRoutineU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3428396411 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Object Board/<ClearAndCollapseRoutine>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CClearAndCollapseRoutineU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m266305839 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Void Board/<ClearAndCollapseRoutine>c__Iterator2::Dispose()
extern "C"  void U3CClearAndCollapseRoutineU3Ec__Iterator2_Dispose_m319884841 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_11((bool)1);
		__this->set_U24PC_12((-1));
		return;
	}
}
// System.Void Board/<ClearAndCollapseRoutine>c__Iterator2::Reset()
extern "C"  void U3CClearAndCollapseRoutineU3Ec__Iterator2_Reset_m2604774453 (U3CClearAndCollapseRoutineU3Ec__Iterator2_t3054617387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CClearAndCollapseRoutineU3Ec__Iterator2_Reset_m2604774453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board/<ClearAndRefillBoardRoutine>c__Iterator1::.ctor()
extern "C"  void U3CClearAndRefillBoardRoutineU3Ec__Iterator1__ctor_m3236499710 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Board/<ClearAndRefillBoardRoutine>c__Iterator1::MoveNext()
extern "C"  bool U3CClearAndRefillBoardRoutineU3Ec__Iterator1_MoveNext_m3830365732 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_MoveNext_m3830365732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_00b6;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_0101;
			}
			case 4:
			{
				goto IL_0136;
			}
			case 5:
			{
				goto IL_018b;
			}
			case 6:
			{
				goto IL_01bb;
			}
			case 7:
			{
				goto IL_01df;
			}
			case 8:
			{
				goto IL_020f;
			}
		}
	}
	{
		goto IL_022e;
	}

IL_003d:
	{
		Board_t3688305287 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		L_2->set_m_playerInputEnabled_23((bool)0);
		List_1_t3987138383 * L_3 = __this->get_gamePieces_0();
		__this->set_U3CmatchesU3E__0_1(L_3);
		Board_t3688305287 * L_4 = __this->get_U24this_2();
		NullCheck(L_4);
		L_4->set_isRefilling_30((bool)1);
		Board_t3688305287 * L_5 = __this->get_U24this_2();
		NullCheck(L_5);
		L_5->set_m_scoreMultiplier_29(0);
	}

IL_006d:
	{
		Board_t3688305287 * L_6 = __this->get_U24this_2();
		Board_t3688305287 * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_scoreMultiplier_29();
		NullCheck(L_7);
		L_7->set_m_scoreMultiplier_29(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		Board_t3688305287 * L_9 = __this->get_U24this_2();
		Board_t3688305287 * L_10 = __this->get_U24this_2();
		List_1_t3987138383 * L_11 = __this->get_U3CmatchesU3E__0_1();
		NullCheck(L_10);
		RuntimeObject* L_12 = Board_ClearAndCollapseRoutine_m798933950(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Coroutine_t3829159415 * L_13 = MonoBehaviour_StartCoroutine_m3411253000(L_9, L_12, /*hidden argument*/NULL);
		__this->set_U24current_3(L_13);
		bool L_14 = __this->get_U24disposing_4();
		if (L_14)
		{
			goto IL_00b1;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00b1:
	{
		goto IL_0230;
	}

IL_00b6:
	{
		__this->set_U24current_3(NULL);
		bool L_15 = __this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00cc:
	{
		goto IL_0230;
	}

IL_00d1:
	{
		Board_t3688305287 * L_16 = __this->get_U24this_2();
		Board_t3688305287 * L_17 = __this->get_U24this_2();
		NullCheck(L_17);
		RuntimeObject* L_18 = Board_RefillRoutine_m1488639427(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Coroutine_t3829159415 * L_19 = MonoBehaviour_StartCoroutine_m3411253000(L_16, L_18, /*hidden argument*/NULL);
		__this->set_U24current_3(L_19);
		bool L_20 = __this->get_U24disposing_4();
		if (L_20)
		{
			goto IL_00fc;
		}
	}
	{
		__this->set_U24PC_5(3);
	}

IL_00fc:
	{
		goto IL_0230;
	}

IL_0101:
	{
		Board_t3688305287 * L_21 = __this->get_U24this_2();
		NullCheck(L_21);
		List_1_t3987138383 * L_22 = Board_FindAllMatches_m2302013884(L_21, /*hidden argument*/NULL);
		__this->set_U3CmatchesU3E__0_1(L_22);
		WaitForSeconds_t1699091251 * L_23 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_23, (0.2f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_23);
		bool L_24 = __this->get_U24disposing_4();
		if (L_24)
		{
			goto IL_0131;
		}
	}
	{
		__this->set_U24PC_5(4);
	}

IL_0131:
	{
		goto IL_0230;
	}

IL_0136:
	{
		List_1_t3987138383 * L_25 = __this->get_U3CmatchesU3E__0_1();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m2409895218(L_25, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_006d;
		}
	}
	{
		Board_t3688305287 * L_27 = __this->get_U24this_2();
		NullCheck(L_27);
		BoardDeadlock_t1667041069 * L_28 = L_27->get_m_boardDeadlock_31();
		Board_t3688305287 * L_29 = __this->get_U24this_2();
		NullCheck(L_29);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_30 = L_29->get_m_allGamePieces_20();
		NullCheck(L_28);
		bool L_31 = BoardDeadlock_IsDeadlocked_m1749050910(L_28, (GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_30, 3, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_020f;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_32 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_32, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_32);
		bool L_33 = __this->get_U24disposing_4();
		if (L_33)
		{
			goto IL_0186;
		}
	}
	{
		__this->set_U24PC_5(5);
	}

IL_0186:
	{
		goto IL_0230;
	}

IL_018b:
	{
		Board_t3688305287 * L_34 = __this->get_U24this_2();
		Board_t3688305287 * L_35 = __this->get_U24this_2();
		NullCheck(L_35);
		RuntimeObject* L_36 = Board_ShuffleBoardRoutine_m1798833413(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Coroutine_t3829159415 * L_37 = MonoBehaviour_StartCoroutine_m3411253000(L_34, L_36, /*hidden argument*/NULL);
		__this->set_U24current_3(L_37);
		bool L_38 = __this->get_U24disposing_4();
		if (L_38)
		{
			goto IL_01b6;
		}
	}
	{
		__this->set_U24PC_5(6);
	}

IL_01b6:
	{
		goto IL_0230;
	}

IL_01bb:
	{
		WaitForSeconds_t1699091251 * L_39 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_39, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_39);
		bool L_40 = __this->get_U24disposing_4();
		if (L_40)
		{
			goto IL_01da;
		}
	}
	{
		__this->set_U24PC_5(7);
	}

IL_01da:
	{
		goto IL_0230;
	}

IL_01df:
	{
		Board_t3688305287 * L_41 = __this->get_U24this_2();
		Board_t3688305287 * L_42 = __this->get_U24this_2();
		NullCheck(L_42);
		RuntimeObject* L_43 = Board_RefillRoutine_m1488639427(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Coroutine_t3829159415 * L_44 = MonoBehaviour_StartCoroutine_m3411253000(L_41, L_43, /*hidden argument*/NULL);
		__this->set_U24current_3(L_44);
		bool L_45 = __this->get_U24disposing_4();
		if (L_45)
		{
			goto IL_020a;
		}
	}
	{
		__this->set_U24PC_5(8);
	}

IL_020a:
	{
		goto IL_0230;
	}

IL_020f:
	{
		Board_t3688305287 * L_46 = __this->get_U24this_2();
		NullCheck(L_46);
		L_46->set_m_playerInputEnabled_23((bool)1);
		Board_t3688305287 * L_47 = __this->get_U24this_2();
		NullCheck(L_47);
		L_47->set_isRefilling_30((bool)0);
		__this->set_U24PC_5((-1));
	}

IL_022e:
	{
		return (bool)0;
	}

IL_0230:
	{
		return (bool)1;
	}
}
// System.Object Board/<ClearAndRefillBoardRoutine>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CClearAndRefillBoardRoutineU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m539929223 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object Board/<ClearAndRefillBoardRoutine>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CClearAndRefillBoardRoutineU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3270553061 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void Board/<ClearAndRefillBoardRoutine>c__Iterator1::Dispose()
extern "C"  void U3CClearAndRefillBoardRoutineU3Ec__Iterator1_Dispose_m689704958 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void Board/<ClearAndRefillBoardRoutine>c__Iterator1::Reset()
extern "C"  void U3CClearAndRefillBoardRoutineU3Ec__Iterator1_Reset_m492302731 (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_t2545447871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CClearAndRefillBoardRoutineU3Ec__Iterator1_Reset_m492302731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board/<RefillRoutine>c__Iterator3::.ctor()
extern "C"  void U3CRefillRoutineU3Ec__Iterator3__ctor_m860219970 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Board/<RefillRoutine>c__Iterator3::MoveNext()
extern "C"  bool U3CRefillRoutineU3Ec__Iterator3_MoveNext_m4279506886 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_005d;
			}
		}
	}
	{
		goto IL_0064;
	}

IL_0021:
	{
		Board_t3688305287 * L_2 = __this->get_U24this_0();
		Board_t3688305287 * L_3 = __this->get_U24this_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_fillYOffset_27();
		Board_t3688305287 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		float L_6 = L_5->get_fillMoveTime_28();
		NullCheck(L_2);
		Board_FillBoard_m4135356354(L_2, L_4, L_6, /*hidden argument*/NULL);
		__this->set_U24current_1(NULL);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0058:
	{
		goto IL_0066;
	}

IL_005d:
	{
		__this->set_U24PC_3((-1));
	}

IL_0064:
	{
		return (bool)0;
	}

IL_0066:
	{
		return (bool)1;
	}
}
// System.Object Board/<RefillRoutine>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRefillRoutineU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1927794506 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Board/<RefillRoutine>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRefillRoutineU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m3075538565 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Board/<RefillRoutine>c__Iterator3::Dispose()
extern "C"  void U3CRefillRoutineU3Ec__Iterator3_Dispose_m1790344722 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Board/<RefillRoutine>c__Iterator3::Reset()
extern "C"  void U3CRefillRoutineU3Ec__Iterator3_Reset_m1035623542 (U3CRefillRoutineU3Ec__Iterator3_t217515380 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefillRoutineU3Ec__Iterator3_Reset_m1035623542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board/<ShuffleBoardRoutine>c__Iterator4::.ctor()
extern "C"  void U3CShuffleBoardRoutineU3Ec__Iterator4__ctor_m3509774155 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Board/<ShuffleBoardRoutine>c__Iterator4::MoveNext()
extern "C"  bool U3CShuffleBoardRoutineU3Ec__Iterator4_MoveNext_m4148582962 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShuffleBoardRoutineU3Ec__Iterator4_MoveNext_m4148582962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	GamePiece_t2515063641 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_11();
		V_0 = L_0;
		__this->set_U24PC_11((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_01b4;
	}

IL_0021:
	{
		List_1_t3987138383 * L_2 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_2, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		__this->set_U3CallPiecesU3E__0_0(L_2);
		Board_t3688305287 * L_3 = __this->get_U24this_8();
		NullCheck(L_3);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_4 = L_3->get_m_allGamePieces_20();
		__this->set_U24locvar0_1(L_4);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_5 = __this->get_U24locvar0_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_5);
		int32_t L_6 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_5, 0, /*hidden argument*/NULL);
		__this->set_U24locvar2_3(L_6);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_7 = __this->get_U24locvar0_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		int32_t L_8 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_7, 1, /*hidden argument*/NULL);
		__this->set_U24locvar4_5(L_8);
		__this->set_U24locvar1_2(0);
		goto IL_00ca;
	}

IL_006d:
	{
		__this->set_U24locvar3_4(0);
		goto IL_00ab;
	}

IL_0079:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_9 = __this->get_U24locvar0_1();
		int32_t L_10 = __this->get_U24locvar1_2();
		int32_t L_11 = __this->get_U24locvar3_4();
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_9);
		GamePiece_t2515063641 * L_12 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_9)->GetAt(L_10, L_11);
		V_1 = L_12;
		List_1_t3987138383 * L_13 = __this->get_U3CallPiecesU3E__0_0();
		GamePiece_t2515063641 * L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m2660902508(L_13, L_14, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
		int32_t L_15 = __this->get_U24locvar3_4();
		__this->set_U24locvar3_4(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
	}

IL_00ab:
	{
		int32_t L_16 = __this->get_U24locvar3_4();
		int32_t L_17 = __this->get_U24locvar4_5();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_18 = __this->get_U24locvar1_2();
		__this->set_U24locvar1_2(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_00ca:
	{
		int32_t L_19 = __this->get_U24locvar1_2();
		int32_t L_20 = __this->get_U24locvar2_3();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00fb;
	}

IL_00e0:
	{
		__this->set_U24current_9(NULL);
		bool L_21 = __this->get_U24disposing_10();
		if (L_21)
		{
			goto IL_00f6;
		}
	}
	{
		__this->set_U24PC_11(1);
	}

IL_00f6:
	{
		goto IL_01b6;
	}

IL_00fb:
	{
		Board_t3688305287 * L_22 = __this->get_U24this_8();
		List_1_t3987138383 * L_23 = __this->get_U3CallPiecesU3E__0_0();
		NullCheck(L_22);
		bool L_24 = Board_IsCollapsed_m3450711880(L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e0;
		}
	}
	{
		Board_t3688305287 * L_25 = __this->get_U24this_8();
		NullCheck(L_25);
		BoardShuffler_t56952400 * L_26 = L_25->get_m_boardShuffler_32();
		Board_t3688305287 * L_27 = __this->get_U24this_8();
		NullCheck(L_27);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_28 = L_27->get_m_allGamePieces_20();
		NullCheck(L_26);
		List_1_t3987138383 * L_29 = BoardShuffler_RemoveNormalPieces_m3486924482(L_26, (GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_28, /*hidden argument*/NULL);
		__this->set_U3CnormalPiecesU3E__0_6(L_29);
		Board_t3688305287 * L_30 = __this->get_U24this_8();
		NullCheck(L_30);
		BoardShuffler_t56952400 * L_31 = L_30->get_m_boardShuffler_32();
		List_1_t3987138383 * L_32 = __this->get_U3CnormalPiecesU3E__0_6();
		NullCheck(L_31);
		BoardShuffler_ShuffleList_m2531927563(L_31, L_32, /*hidden argument*/NULL);
		Board_t3688305287 * L_33 = __this->get_U24this_8();
		List_1_t3987138383 * L_34 = __this->get_U3CnormalPiecesU3E__0_6();
		NullCheck(L_33);
		Board_FillBoardFromList_m2380270472(L_33, L_34, /*hidden argument*/NULL);
		Board_t3688305287 * L_35 = __this->get_U24this_8();
		NullCheck(L_35);
		BoardShuffler_t56952400 * L_36 = L_35->get_m_boardShuffler_32();
		Board_t3688305287 * L_37 = __this->get_U24this_8();
		NullCheck(L_37);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_38 = L_37->get_m_allGamePieces_20();
		Board_t3688305287 * L_39 = __this->get_U24this_8();
		NullCheck(L_39);
		float L_40 = L_39->get_swapTime_18();
		NullCheck(L_36);
		BoardShuffler_MovePieces_m4260695126(L_36, (GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_38, L_40, /*hidden argument*/NULL);
		Board_t3688305287 * L_41 = __this->get_U24this_8();
		NullCheck(L_41);
		List_1_t3987138383 * L_42 = Board_FindAllMatches_m2302013884(L_41, /*hidden argument*/NULL);
		__this->set_U3CmatchesU3E__0_7(L_42);
		Board_t3688305287 * L_43 = __this->get_U24this_8();
		Board_t3688305287 * L_44 = __this->get_U24this_8();
		List_1_t3987138383 * L_45 = __this->get_U3CmatchesU3E__0_7();
		NullCheck(L_44);
		RuntimeObject* L_46 = Board_ClearAndRefillBoardRoutine_m1498106826(L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		MonoBehaviour_StartCoroutine_m3411253000(L_43, L_46, /*hidden argument*/NULL);
		__this->set_U24PC_11((-1));
	}

IL_01b4:
	{
		return (bool)0;
	}

IL_01b6:
	{
		return (bool)1;
	}
}
// System.Object Board/<ShuffleBoardRoutine>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CShuffleBoardRoutineU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3200908788 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Object Board/<ShuffleBoardRoutine>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CShuffleBoardRoutineU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m2075454882 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Void Board/<ShuffleBoardRoutine>c__Iterator4::Dispose()
extern "C"  void U3CShuffleBoardRoutineU3Ec__Iterator4_Dispose_m3590983954 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_10((bool)1);
		__this->set_U24PC_11((-1));
		return;
	}
}
// System.Void Board/<ShuffleBoardRoutine>c__Iterator4::Reset()
extern "C"  void U3CShuffleBoardRoutineU3Ec__Iterator4_Reset_m3146110799 (U3CShuffleBoardRoutineU3Ec__Iterator4_t2217112714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShuffleBoardRoutineU3Ec__Iterator4_Reset_m3146110799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board/<SwitchTilesRoutine>c__Iterator0::.ctor()
extern "C"  void U3CSwitchTilesRoutineU3Ec__Iterator0__ctor_m1426358335 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Board/<SwitchTilesRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CSwitchTilesRoutineU3Ec__Iterator0_MoveNext_m3319531132 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSwitchTilesRoutineU3Ec__Iterator0_MoveNext_m3319531132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	GamePiece_t2515063641 * V_1 = NULL;
	GamePieceU5B0___U2C0___U5D_t3033866021* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	GamePiece_t2515063641 * V_7 = NULL;
	GamePiece_t2515063641 * V_8 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_11();
		V_0 = L_0;
		__this->set_U24PC_11((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0140;
			}
			case 2:
			{
				goto IL_03d0;
			}
		}
	}
	{
		goto IL_0563;
	}

IL_0025:
	{
		Board_t3688305287 * L_2 = __this->get_U24this_8();
		NullCheck(L_2);
		bool L_3 = L_2->get_m_playerInputEnabled_23();
		if (!L_3)
		{
			goto IL_055c;
		}
	}
	{
		GameManager_t1536523654 * L_4 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = GameManager_get_IsGameOver_m1911883697(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_055c;
		}
	}
	{
		Board_t3688305287 * L_6 = __this->get_U24this_8();
		NullCheck(L_6);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_7 = L_6->get_m_allGamePieces_20();
		Tile_t2634157908 * L_8 = __this->get_clickedTile_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_xIndex_2();
		Tile_t2634157908 * L_10 = __this->get_clickedTile_0();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_yIndex_3();
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_7);
		GamePiece_t2515063641 * L_12 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_7)->GetAt(L_9, L_11);
		__this->set_U3CclickedPieceU3E__1_1(L_12);
		Board_t3688305287 * L_13 = __this->get_U24this_8();
		NullCheck(L_13);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_14 = L_13->get_m_allGamePieces_20();
		Tile_t2634157908 * L_15 = __this->get_targetTile_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_xIndex_2();
		Tile_t2634157908 * L_17 = __this->get_targetTile_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_yIndex_3();
		NullCheck((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_14);
		GamePiece_t2515063641 * L_19 = ((GamePieceU5B0___U2C0___U5D_t3033866021*)(GamePieceU5B0___U2C0___U5D_t3033866021*)L_14)->GetAt(L_16, L_18);
		__this->set_U3CtargetPieceU3E__1_3(L_19);
		GamePiece_t2515063641 * L_20 = __this->get_U3CtargetPieceU3E__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_055c;
		}
	}
	{
		GamePiece_t2515063641 * L_22 = __this->get_U3CclickedPieceU3E__1_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_22, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_055c;
		}
	}
	{
		GamePiece_t2515063641 * L_24 = __this->get_U3CclickedPieceU3E__1_1();
		Tile_t2634157908 * L_25 = __this->get_targetTile_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_xIndex_2();
		Tile_t2634157908 * L_27 = __this->get_targetTile_2();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_yIndex_3();
		Board_t3688305287 * L_29 = __this->get_U24this_8();
		NullCheck(L_29);
		float L_30 = L_29->get_swapTime_18();
		NullCheck(L_24);
		GamePiece_Move_m3643451982(L_24, L_26, L_28, L_30, /*hidden argument*/NULL);
		GamePiece_t2515063641 * L_31 = __this->get_U3CtargetPieceU3E__1_3();
		Tile_t2634157908 * L_32 = __this->get_clickedTile_0();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_xIndex_2();
		Tile_t2634157908 * L_34 = __this->get_clickedTile_0();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_yIndex_3();
		Board_t3688305287 * L_36 = __this->get_U24this_8();
		NullCheck(L_36);
		float L_37 = L_36->get_swapTime_18();
		NullCheck(L_31);
		GamePiece_Move_m3643451982(L_31, L_33, L_35, L_37, /*hidden argument*/NULL);
		Board_t3688305287 * L_38 = __this->get_U24this_8();
		NullCheck(L_38);
		float L_39 = L_38->get_swapTime_18();
		WaitForSeconds_t1699091251 * L_40 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_40, L_39, /*hidden argument*/NULL);
		__this->set_U24current_9(L_40);
		bool L_41 = __this->get_U24disposing_10();
		if (L_41)
		{
			goto IL_013b;
		}
	}
	{
		__this->set_U24PC_11(1);
	}

IL_013b:
	{
		goto IL_0565;
	}

IL_0140:
	{
		Board_t3688305287 * L_42 = __this->get_U24this_8();
		Tile_t2634157908 * L_43 = __this->get_clickedTile_0();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_xIndex_2();
		Tile_t2634157908 * L_45 = __this->get_clickedTile_0();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_yIndex_3();
		NullCheck(L_42);
		List_1_t3987138383 * L_47 = Board_FindMatchesAt_m2762353033(L_42, L_44, L_46, 3, /*hidden argument*/NULL);
		__this->set_U3CclickedPieceMatchesU3E__2_4(L_47);
		Board_t3688305287 * L_48 = __this->get_U24this_8();
		Tile_t2634157908 * L_49 = __this->get_targetTile_2();
		NullCheck(L_49);
		int32_t L_50 = L_49->get_xIndex_2();
		Tile_t2634157908 * L_51 = __this->get_targetTile_2();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_yIndex_3();
		NullCheck(L_48);
		List_1_t3987138383 * L_53 = Board_FindMatchesAt_m2762353033(L_48, L_50, L_52, 3, /*hidden argument*/NULL);
		__this->set_U3CtargetPieceMatchesU3E__2_5(L_53);
		List_1_t3987138383 * L_54 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_54, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		__this->set_U3CcolorMatchesU3E__2_6(L_54);
		Board_t3688305287 * L_55 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_56 = __this->get_U3CclickedPieceU3E__1_1();
		NullCheck(L_55);
		bool L_57 = Board_IsColorBomb_m3202758182(L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_01fe;
		}
	}
	{
		Board_t3688305287 * L_58 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_59 = __this->get_U3CtargetPieceU3E__1_3();
		NullCheck(L_58);
		bool L_60 = Board_IsColorBomb_m3202758182(L_58, L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_01fe;
		}
	}
	{
		GamePiece_t2515063641 * L_61 = __this->get_U3CclickedPieceU3E__1_1();
		GamePiece_t2515063641 * L_62 = __this->get_U3CtargetPieceU3E__1_3();
		NullCheck(L_62);
		int32_t L_63 = L_62->get_matchValue_7();
		NullCheck(L_61);
		L_61->set_matchValue_7(L_63);
		Board_t3688305287 * L_64 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_65 = __this->get_U3CclickedPieceU3E__1_1();
		NullCheck(L_65);
		int32_t L_66 = L_65->get_matchValue_7();
		NullCheck(L_64);
		List_1_t3987138383 * L_67 = Board_FindAllMatchValue_m3520378586(L_64, L_66, /*hidden argument*/NULL);
		__this->set_U3CcolorMatchesU3E__2_6(L_67);
		goto IL_02ff;
	}

IL_01fe:
	{
		Board_t3688305287 * L_68 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_69 = __this->get_U3CclickedPieceU3E__1_1();
		NullCheck(L_68);
		bool L_70 = Board_IsColorBomb_m3202758182(L_68, L_69, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_0261;
		}
	}
	{
		Board_t3688305287 * L_71 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_72 = __this->get_U3CtargetPieceU3E__1_3();
		NullCheck(L_71);
		bool L_73 = Board_IsColorBomb_m3202758182(L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0261;
		}
	}
	{
		GamePiece_t2515063641 * L_74 = __this->get_U3CtargetPieceU3E__1_3();
		GamePiece_t2515063641 * L_75 = __this->get_U3CclickedPieceU3E__1_1();
		NullCheck(L_75);
		int32_t L_76 = L_75->get_matchValue_7();
		NullCheck(L_74);
		L_74->set_matchValue_7(L_76);
		Board_t3688305287 * L_77 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_78 = __this->get_U3CtargetPieceU3E__1_3();
		NullCheck(L_78);
		int32_t L_79 = L_78->get_matchValue_7();
		NullCheck(L_77);
		List_1_t3987138383 * L_80 = Board_FindAllMatchValue_m3520378586(L_77, L_79, /*hidden argument*/NULL);
		__this->set_U3CcolorMatchesU3E__2_6(L_80);
		goto IL_02ff;
	}

IL_0261:
	{
		Board_t3688305287 * L_81 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_82 = __this->get_U3CclickedPieceU3E__1_1();
		NullCheck(L_81);
		bool L_83 = Board_IsColorBomb_m3202758182(L_81, L_82, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_02ff;
		}
	}
	{
		Board_t3688305287 * L_84 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_85 = __this->get_U3CtargetPieceU3E__1_3();
		NullCheck(L_84);
		bool L_86 = Board_IsColorBomb_m3202758182(L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_02ff;
		}
	}
	{
		Board_t3688305287 * L_87 = __this->get_U24this_8();
		NullCheck(L_87);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_88 = L_87->get_m_allGamePieces_20();
		V_2 = (GamePieceU5B0___U2C0___U5D_t3033866021*)L_88;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_89 = V_2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_89);
		int32_t L_90 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_89, 0, /*hidden argument*/NULL);
		V_3 = L_90;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_91 = V_2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_91);
		int32_t L_92 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_91, 1, /*hidden argument*/NULL);
		V_4 = L_92;
		V_5 = 0;
		goto IL_02f7;
	}

IL_02b2:
	{
		V_6 = 0;
		goto IL_02e8;
	}

IL_02ba:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_93 = V_2;
		int32_t L_94 = V_5;
		int32_t L_95 = V_6;
		NullCheck(L_93);
		GamePiece_t2515063641 * L_96 = (L_93)->GetAt(L_94, L_95);
		V_1 = L_96;
		List_1_t3987138383 * L_97 = __this->get_U3CcolorMatchesU3E__2_6();
		GamePiece_t2515063641 * L_98 = V_1;
		NullCheck(L_97);
		bool L_99 = List_1_Contains_m4165534979(L_97, L_98, /*hidden argument*/List_1_Contains_m4165534979_RuntimeMethod_var);
		if (L_99)
		{
			goto IL_02e2;
		}
	}
	{
		List_1_t3987138383 * L_100 = __this->get_U3CcolorMatchesU3E__2_6();
		GamePiece_t2515063641 * L_101 = V_1;
		NullCheck(L_100);
		List_1_Add_m2660902508(L_100, L_101, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_02e2:
	{
		int32_t L_102 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_02e8:
	{
		int32_t L_103 = V_6;
		int32_t L_104 = V_4;
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_02ba;
		}
	}
	{
		int32_t L_105 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_02f7:
	{
		int32_t L_106 = V_5;
		int32_t L_107 = V_3;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_02b2;
		}
	}

IL_02ff:
	{
		List_1_t3987138383 * L_108 = __this->get_U3CtargetPieceMatchesU3E__2_5();
		NullCheck(L_108);
		int32_t L_109 = List_1_get_Count_m2409895218(L_108, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if (L_109)
		{
			goto IL_038c;
		}
	}
	{
		List_1_t3987138383 * L_110 = __this->get_U3CclickedPieceMatchesU3E__2_4();
		NullCheck(L_110);
		int32_t L_111 = List_1_get_Count_m2409895218(L_110, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if (L_111)
		{
			goto IL_038c;
		}
	}
	{
		List_1_t3987138383 * L_112 = __this->get_U3CcolorMatchesU3E__2_6();
		NullCheck(L_112);
		int32_t L_113 = List_1_get_Count_m2409895218(L_112, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		if (L_113)
		{
			goto IL_038c;
		}
	}
	{
		GamePiece_t2515063641 * L_114 = __this->get_U3CclickedPieceU3E__1_1();
		Tile_t2634157908 * L_115 = __this->get_clickedTile_0();
		NullCheck(L_115);
		int32_t L_116 = L_115->get_xIndex_2();
		Tile_t2634157908 * L_117 = __this->get_clickedTile_0();
		NullCheck(L_117);
		int32_t L_118 = L_117->get_yIndex_3();
		Board_t3688305287 * L_119 = __this->get_U24this_8();
		NullCheck(L_119);
		float L_120 = L_119->get_swapTime_18();
		NullCheck(L_114);
		GamePiece_Move_m3643451982(L_114, L_116, L_118, L_120, /*hidden argument*/NULL);
		GamePiece_t2515063641 * L_121 = __this->get_U3CtargetPieceU3E__1_3();
		Tile_t2634157908 * L_122 = __this->get_targetTile_2();
		NullCheck(L_122);
		int32_t L_123 = L_122->get_xIndex_2();
		Tile_t2634157908 * L_124 = __this->get_targetTile_2();
		NullCheck(L_124);
		int32_t L_125 = L_124->get_yIndex_3();
		Board_t3688305287 * L_126 = __this->get_U24this_8();
		NullCheck(L_126);
		float L_127 = L_126->get_swapTime_18();
		NullCheck(L_121);
		GamePiece_Move_m3643451982(L_121, L_123, L_125, L_127, /*hidden argument*/NULL);
		goto IL_055c;
	}

IL_038c:
	{
		GameManager_t1536523654 * L_128 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_129 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_128, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_129)
		{
			goto IL_03a6;
		}
	}
	{
		GameManager_t1536523654 * L_130 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
		NullCheck(L_130);
		GameManager_UpdateMoves_m2091666798(L_130, /*hidden argument*/NULL);
	}

IL_03a6:
	{
		Board_t3688305287 * L_131 = __this->get_U24this_8();
		NullCheck(L_131);
		float L_132 = L_131->get_swapTime_18();
		WaitForSeconds_t1699091251 * L_133 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_133, L_132, /*hidden argument*/NULL);
		__this->set_U24current_9(L_133);
		bool L_134 = __this->get_U24disposing_10();
		if (L_134)
		{
			goto IL_03cb;
		}
	}
	{
		__this->set_U24PC_11(2);
	}

IL_03cb:
	{
		goto IL_0565;
	}

IL_03d0:
	{
		Tile_t2634157908 * L_135 = __this->get_targetTile_2();
		NullCheck(L_135);
		int32_t L_136 = L_135->get_xIndex_2();
		Tile_t2634157908 * L_137 = __this->get_clickedTile_0();
		NullCheck(L_137);
		int32_t L_138 = L_137->get_xIndex_2();
		Tile_t2634157908 * L_139 = __this->get_targetTile_2();
		NullCheck(L_139);
		int32_t L_140 = L_139->get_yIndex_3();
		Tile_t2634157908 * L_141 = __this->get_clickedTile_0();
		NullCheck(L_141);
		int32_t L_142 = L_141->get_yIndex_3();
		Vector2_t2156229523  L_143;
		memset(&L_143, 0, sizeof(L_143));
		Vector2__ctor_m3970636864((&L_143), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)L_138))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)L_142))))), /*hidden argument*/NULL);
		__this->set_U3CswipeDirectionU3E__3_7(L_143);
		Board_t3688305287 * L_144 = __this->get_U24this_8();
		Board_t3688305287 * L_145 = __this->get_U24this_8();
		Tile_t2634157908 * L_146 = __this->get_clickedTile_0();
		NullCheck(L_146);
		int32_t L_147 = L_146->get_xIndex_2();
		Tile_t2634157908 * L_148 = __this->get_clickedTile_0();
		NullCheck(L_148);
		int32_t L_149 = L_148->get_yIndex_3();
		Vector2_t2156229523  L_150 = __this->get_U3CswipeDirectionU3E__3_7();
		List_1_t3987138383 * L_151 = __this->get_U3CclickedPieceMatchesU3E__2_4();
		NullCheck(L_145);
		GameObject_t1113636619 * L_152 = Board_DropBomb_m4209785306(L_145, L_147, L_149, L_150, L_151, /*hidden argument*/NULL);
		NullCheck(L_144);
		L_144->set_m_clickedTileBomb_16(L_152);
		Board_t3688305287 * L_153 = __this->get_U24this_8();
		Board_t3688305287 * L_154 = __this->get_U24this_8();
		Tile_t2634157908 * L_155 = __this->get_targetTile_2();
		NullCheck(L_155);
		int32_t L_156 = L_155->get_xIndex_2();
		Tile_t2634157908 * L_157 = __this->get_targetTile_2();
		NullCheck(L_157);
		int32_t L_158 = L_157->get_yIndex_3();
		Vector2_t2156229523  L_159 = __this->get_U3CswipeDirectionU3E__3_7();
		List_1_t3987138383 * L_160 = __this->get_U3CtargetPieceMatchesU3E__2_5();
		NullCheck(L_154);
		GameObject_t1113636619 * L_161 = Board_DropBomb_m4209785306(L_154, L_156, L_158, L_159, L_160, /*hidden argument*/NULL);
		NullCheck(L_153);
		L_153->set_m_targetTileBomb_17(L_161);
		Board_t3688305287 * L_162 = __this->get_U24this_8();
		NullCheck(L_162);
		GameObject_t1113636619 * L_163 = L_162->get_m_clickedTileBomb_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_164 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_163, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_164)
		{
			goto IL_04d3;
		}
	}
	{
		GamePiece_t2515063641 * L_165 = __this->get_U3CtargetPieceU3E__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_166 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_165, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_166)
		{
			goto IL_04d3;
		}
	}
	{
		Board_t3688305287 * L_167 = __this->get_U24this_8();
		NullCheck(L_167);
		GameObject_t1113636619 * L_168 = L_167->get_m_clickedTileBomb_16();
		NullCheck(L_168);
		GamePiece_t2515063641 * L_169 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_168, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		V_7 = L_169;
		Board_t3688305287 * L_170 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_171 = V_7;
		NullCheck(L_170);
		bool L_172 = Board_IsColorBomb_m3202758182(L_170, L_171, /*hidden argument*/NULL);
		if (L_172)
		{
			goto IL_04d3;
		}
	}
	{
		GamePiece_t2515063641 * L_173 = V_7;
		GamePiece_t2515063641 * L_174 = __this->get_U3CtargetPieceU3E__1_3();
		NullCheck(L_173);
		GamePiece_ChangeColor_m2323782627(L_173, L_174, /*hidden argument*/NULL);
	}

IL_04d3:
	{
		Board_t3688305287 * L_175 = __this->get_U24this_8();
		NullCheck(L_175);
		GameObject_t1113636619 * L_176 = L_175->get_m_targetTileBomb_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_177 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_176, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_177)
		{
			goto IL_052b;
		}
	}
	{
		GamePiece_t2515063641 * L_178 = __this->get_U3CclickedPieceU3E__1_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_179 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_178, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_179)
		{
			goto IL_052b;
		}
	}
	{
		Board_t3688305287 * L_180 = __this->get_U24this_8();
		NullCheck(L_180);
		GameObject_t1113636619 * L_181 = L_180->get_m_targetTileBomb_17();
		NullCheck(L_181);
		GamePiece_t2515063641 * L_182 = GameObject_GetComponent_TisGamePiece_t2515063641_m771852946(L_181, /*hidden argument*/GameObject_GetComponent_TisGamePiece_t2515063641_m771852946_RuntimeMethod_var);
		V_8 = L_182;
		Board_t3688305287 * L_183 = __this->get_U24this_8();
		GamePiece_t2515063641 * L_184 = V_8;
		NullCheck(L_183);
		bool L_185 = Board_IsColorBomb_m3202758182(L_183, L_184, /*hidden argument*/NULL);
		if (L_185)
		{
			goto IL_052b;
		}
	}
	{
		GamePiece_t2515063641 * L_186 = V_8;
		GamePiece_t2515063641 * L_187 = __this->get_U3CclickedPieceU3E__1_1();
		NullCheck(L_186);
		GamePiece_ChangeColor_m2323782627(L_186, L_187, /*hidden argument*/NULL);
	}

IL_052b:
	{
		Board_t3688305287 * L_188 = __this->get_U24this_8();
		List_1_t3987138383 * L_189 = __this->get_U3CclickedPieceMatchesU3E__2_4();
		List_1_t3987138383 * L_190 = __this->get_U3CtargetPieceMatchesU3E__2_5();
		RuntimeObject* L_191 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_189, L_190, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_192 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_191, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		List_1_t3987138383 * L_193 = __this->get_U3CcolorMatchesU3E__2_6();
		RuntimeObject* L_194 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_192, L_193, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_195 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_194, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		NullCheck(L_188);
		Board_ClearAndRefillBoard_m3579737852(L_188, L_195, /*hidden argument*/NULL);
	}

IL_055c:
	{
		__this->set_U24PC_11((-1));
	}

IL_0563:
	{
		return (bool)0;
	}

IL_0565:
	{
		return (bool)1;
	}
}
// System.Object Board/<SwitchTilesRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CSwitchTilesRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2244937257 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Object Board/<SwitchTilesRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CSwitchTilesRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3017463320 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_9();
		return L_0;
	}
}
// System.Void Board/<SwitchTilesRoutine>c__Iterator0::Dispose()
extern "C"  void U3CSwitchTilesRoutineU3Ec__Iterator0_Dispose_m1015164418 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_10((bool)1);
		__this->set_U24PC_11((-1));
		return;
	}
}
// System.Void Board/<SwitchTilesRoutine>c__Iterator0::Reset()
extern "C"  void U3CSwitchTilesRoutineU3Ec__Iterator0_Reset_m990462176 (U3CSwitchTilesRoutineU3Ec__Iterator0_t14771579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSwitchTilesRoutineU3Ec__Iterator0_Reset_m990462176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board/StartingObject::.ctor()
extern "C"  void StartingObject__ctor_m2373857848 (StartingObject_t2785957559 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoardDeadlock::.ctor()
extern "C"  void BoardDeadlock__ctor_m262164921 (BoardDeadlock_t1667041069 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<GamePiece> BoardDeadlock::GetRowColumnList(GamePiece[0...,0...],System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  List_1_t3987138383 * BoardDeadlock_GetRowColumnList_m1116894549 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allpieces0, int32_t ___x1, int32_t ___y2, int32_t ___listLength3, bool ___checkRow4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardDeadlock_GetRowColumnList_m1116894549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t3987138383 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_0 = ___allpieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_2 = ___allpieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		List_1_t3987138383 * L_4 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_4, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0097;
	}

IL_001d:
	{
		bool L_5 = ___checkRow4;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = ___x1;
		int32_t L_7 = V_3;
		int32_t L_8 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_9 = ___y2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0059;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_11 = ___allpieces0;
		int32_t L_12 = ___x1;
		int32_t L_13 = V_3;
		int32_t L_14 = ___y2;
		NullCheck(L_11);
		GamePiece_t2515063641 * L_15 = (L_11)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		List_1_t3987138383 * L_17 = V_2;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_18 = ___allpieces0;
		int32_t L_19 = ___x1;
		int32_t L_20 = V_3;
		int32_t L_21 = ___y2;
		NullCheck(L_18);
		GamePiece_t2515063641 * L_22 = (L_18)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)), L_21);
		NullCheck(L_17);
		List_1_Add_m2660902508(L_17, L_22, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_0059:
	{
		goto IL_0093;
	}

IL_005e:
	{
		int32_t L_23 = ___x1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_25 = ___y2;
		int32_t L_26 = V_3;
		int32_t L_27 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26))) >= ((int32_t)L_27)))
		{
			goto IL_0093;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_28 = ___allpieces0;
		int32_t L_29 = ___x1;
		int32_t L_30 = ___y2;
		int32_t L_31 = V_3;
		NullCheck(L_28);
		GamePiece_t2515063641 * L_32 = (L_28)->GetAt(L_29, ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_32, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0093;
		}
	}
	{
		List_1_t3987138383 * L_34 = V_2;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_35 = ___allpieces0;
		int32_t L_36 = ___x1;
		int32_t L_37 = ___y2;
		int32_t L_38 = V_3;
		NullCheck(L_35);
		GamePiece_t2515063641 * L_39 = (L_35)->GetAt(L_36, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)));
		NullCheck(L_34);
		List_1_Add_m2660902508(L_34, L_39, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_0093:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_41 = V_3;
		int32_t L_42 = ___listLength3;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_001d;
		}
	}
	{
		List_1_t3987138383 * L_43 = V_2;
		return L_43;
	}
}
// System.Collections.Generic.List`1<GamePiece> BoardDeadlock::GetMinimumMatches(System.Collections.Generic.List`1<GamePiece>,System.Int32)
extern "C"  List_1_t3987138383 * BoardDeadlock_GetMinimumMatches_m6474523 (BoardDeadlock_t1667041069 * __this, List_1_t3987138383 * ___gamePieces0, int32_t ___minForMatch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardDeadlock_GetMinimumMatches_m6474523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	List_1_t3987138383 * G_B2_0 = NULL;
	List_1_t3987138383 * G_B1_0 = NULL;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3987138383 * L_1 = ___gamePieces0;
		Func_2_t3228517195 * L_2 = ((BoardDeadlock_t1667041069_StaticFields*)il2cpp_codegen_static_fields_for(BoardDeadlock_t1667041069_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)BoardDeadlock_U3CGetMinimumMatchesU3Em__0_m2871735036_RuntimeMethod_var;
		Func_2_t3228517195 * L_4 = (Func_2_t3228517195 *)il2cpp_codegen_object_new(Func_2_t3228517195_il2cpp_TypeInfo_var);
		Func_2__ctor_m1301189790(L_4, NULL, L_3, /*hidden argument*/Func_2__ctor_m1301189790_RuntimeMethod_var);
		((BoardDeadlock_t1667041069_StaticFields*)il2cpp_codegen_static_fields_for(BoardDeadlock_t1667041069_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_2(L_4);
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		Func_2_t3228517195 * L_5 = ((BoardDeadlock_t1667041069_StaticFields*)il2cpp_codegen_static_fields_for(BoardDeadlock_t1667041069_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		RuntimeObject* L_6 = Enumerable_GroupBy_TisGamePiece_t2515063641_TisMatchValue_t3671566290_m350021335(NULL /*static, unused*/, G_B2_0, L_5, /*hidden argument*/Enumerable_GroupBy_TisGamePiece_t2515063641_TisMatchValue_t3671566290_m350021335_RuntimeMethod_var);
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<MatchValue,GamePiece>>::GetEnumerator() */, IEnumerable_1_t925746392_il2cpp_TypeInfo_var, L_7);
		V_3 = L_8;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_0036:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck(L_9);
			RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<MatchValue,GamePiece>>::get_Current() */, IEnumerator_1_t2378463971_il2cpp_TypeInfo_var, L_9);
			V_2 = L_10;
			RuntimeObject* L_11 = V_2;
			int32_t L_12 = Enumerable_Count_TisGamePiece_t2515063641_m3216069146(NULL /*static, unused*/, L_11, /*hidden argument*/Enumerable_Count_TisGamePiece_t2515063641_m3216069146_RuntimeMethod_var);
			int32_t L_13 = ___minForMatch1;
			if ((((int32_t)L_12) < ((int32_t)L_13)))
			{
				goto IL_005d;
			}
		}

IL_0049:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			int32_t L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Linq.IGrouping`2<MatchValue,GamePiece>::get_Key() */, IGrouping_2_t1945893503_il2cpp_TypeInfo_var, L_14);
			if ((((int32_t)L_15) == ((int32_t)((int32_t)12))))
			{
				goto IL_005d;
			}
		}

IL_0056:
		{
			RuntimeObject* L_16 = V_2;
			List_1_t3987138383 * L_17 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_16, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
			V_0 = L_17;
		}

IL_005d:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0036;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(109)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		List_1_t3987138383 * L_22 = V_0;
		return L_22;
	}
}
// System.Collections.Generic.List`1<GamePiece> BoardDeadlock::GetNeighbors(GamePiece[0...,0...],System.Int32,System.Int32)
extern "C"  List_1_t3987138383 * BoardDeadlock_GetNeighbors_m3964018393 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardDeadlock_GetNeighbors_m3964018393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t3987138383 * V_2 = NULL;
	Vector2U5BU5D_t1457185986* V_3 = NULL;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	int32_t V_6 = 0;
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_0 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_2 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		List_1_t3987138383 * L_4 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_4, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_2 = L_4;
		Vector2U5BU5D_t1457185986* L_5 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_5);
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), (-1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_6;
		Vector2U5BU5D_t1457185986* L_7 = L_5;
		NullCheck(L_7);
		Vector2_t2156229523  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_m3970636864((&L_8), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_8;
		Vector2U5BU5D_t1457185986* L_9 = L_7;
		NullCheck(L_9);
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_10;
		Vector2U5BU5D_t1457185986* L_11 = L_9;
		NullCheck(L_11);
		Vector2_t2156229523  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m3970636864((&L_12), (0.0f), (-1.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_12;
		V_3 = L_11;
		Vector2U5BU5D_t1457185986* L_13 = V_3;
		V_5 = L_13;
		V_6 = 0;
		goto IL_0155;
	}

IL_0094:
	{
		Vector2U5BU5D_t1457185986* L_14 = V_5;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		V_4 = (*(Vector2_t2156229523 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))));
		int32_t L_16 = ___x1;
		float L_17 = (&V_4)->get_x_0();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)(((int32_t)((int32_t)L_17)))))) < ((int32_t)0)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_18 = ___x1;
		float L_19 = (&V_4)->get_x_0();
		int32_t L_20 = V_0;
		if ((!(((float)((float)il2cpp_codegen_add((float)(((float)((float)L_18))), (float)L_19))) < ((float)(((float)((float)L_20)))))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_21 = ___y2;
		float L_22 = (&V_4)->get_y_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)(((int32_t)((int32_t)L_22)))))) < ((int32_t)0)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_23 = ___y2;
		float L_24 = (&V_4)->get_y_1();
		int32_t L_25 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)(((int32_t)((int32_t)L_24)))))) >= ((int32_t)L_25)))
		{
			goto IL_014f;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_26 = ___allPieces0;
		int32_t L_27 = ___x1;
		float L_28 = (&V_4)->get_x_0();
		int32_t L_29 = ___y2;
		float L_30 = (&V_4)->get_y_1();
		NullCheck(L_26);
		GamePiece_t2515063641 * L_31 = (L_26)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)(((int32_t)((int32_t)L_28))))), ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)(((int32_t)((int32_t)L_30))))));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_31, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_014f;
		}
	}
	{
		List_1_t3987138383 * L_33 = V_2;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_34 = ___allPieces0;
		int32_t L_35 = ___x1;
		float L_36 = (&V_4)->get_x_0();
		int32_t L_37 = ___y2;
		float L_38 = (&V_4)->get_y_1();
		NullCheck(L_34);
		GamePiece_t2515063641 * L_39 = (L_34)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)(((int32_t)((int32_t)L_36))))), ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)(((int32_t)((int32_t)L_38))))));
		NullCheck(L_33);
		bool L_40 = List_1_Contains_m4165534979(L_33, L_39, /*hidden argument*/List_1_Contains_m4165534979_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_014f;
		}
	}
	{
		List_1_t3987138383 * L_41 = V_2;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_42 = ___allPieces0;
		int32_t L_43 = ___x1;
		float L_44 = (&V_4)->get_x_0();
		int32_t L_45 = ___y2;
		float L_46 = (&V_4)->get_y_1();
		NullCheck(L_42);
		GamePiece_t2515063641 * L_47 = (L_42)->GetAt(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)(((int32_t)((int32_t)L_44))))), ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)(((int32_t)((int32_t)L_46))))));
		NullCheck(L_41);
		List_1_Add_m2660902508(L_41, L_47, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
	}

IL_014f:
	{
		int32_t L_48 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_0155:
	{
		int32_t L_49 = V_6;
		Vector2U5BU5D_t1457185986* L_50 = V_5;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length)))))))
		{
			goto IL_0094;
		}
	}
	{
		List_1_t3987138383 * L_51 = V_2;
		return L_51;
	}
}
// System.Boolean BoardDeadlock::HasMoveAt(GamePiece[0...,0...],System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  bool BoardDeadlock_HasMoveAt_m384078838 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, int32_t ___x1, int32_t ___y2, int32_t ___listLength3, bool ___checkRow4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardDeadlock_HasMoveAt_m384078838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * V_0 = NULL;
	List_1_t3987138383 * V_1 = NULL;
	GamePiece_t2515063641 * V_2 = NULL;
	List_1_t3987138383 * V_3 = NULL;
	{
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_0 = (U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 *)il2cpp_codegen_object_new(U3CHasMoveAtU3Ec__AnonStorey0_t2576215649_il2cpp_TypeInfo_var);
		U3CHasMoveAtU3Ec__AnonStorey0__ctor_m1931590031(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = ___allPieces0;
		int32_t L_2 = ___x1;
		int32_t L_3 = ___y2;
		int32_t L_4 = ___listLength3;
		bool L_5 = ___checkRow4;
		List_1_t3987138383 * L_6 = BoardDeadlock_GetRowColumnList_m1116894549(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_7 = V_0;
		List_1_t3987138383 * L_8 = V_1;
		int32_t L_9 = ___listLength3;
		List_1_t3987138383 * L_10 = BoardDeadlock_GetMinimumMatches_m6474523(__this, L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_matches_0(L_10);
		V_2 = (GamePiece_t2515063641 *)NULL;
		List_1_t3987138383 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_00db;
		}
	}
	{
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_12 = V_0;
		NullCheck(L_12);
		List_1_t3987138383 * L_13 = L_12->get_matches_0();
		if (!L_13)
		{
			goto IL_00db;
		}
	}
	{
		List_1_t3987138383 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m2409895218(L_14, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		int32_t L_16 = ___listLength3;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_006b;
		}
	}
	{
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_17 = V_0;
		NullCheck(L_17);
		List_1_t3987138383 * L_18 = L_17->get_matches_0();
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m2409895218(L_18, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		int32_t L_20 = ___listLength3;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1))))))
		{
			goto IL_006b;
		}
	}
	{
		List_1_t3987138383 * L_21 = V_1;
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_22 = V_0;
		NullCheck(L_22);
		List_1_t3987138383 * L_23 = L_22->get_matches_0();
		RuntimeObject* L_24 = Enumerable_Except_TisGamePiece_t2515063641_m1956769829(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/Enumerable_Except_TisGamePiece_t2515063641_m1956769829_RuntimeMethod_var);
		GamePiece_t2515063641 * L_25 = Enumerable_FirstOrDefault_TisGamePiece_t2515063641_m1166263980(NULL /*static, unused*/, L_24, /*hidden argument*/Enumerable_FirstOrDefault_TisGamePiece_t2515063641_m1166263980_RuntimeMethod_var);
		V_2 = L_25;
	}

IL_006b:
	{
		GamePiece_t2515063641 * L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_26, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_28 = ___allPieces0;
		GamePiece_t2515063641 * L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_xIndex_2();
		GamePiece_t2515063641 * L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_yIndex_3();
		List_1_t3987138383 * L_33 = BoardDeadlock_GetNeighbors_m3964018393(__this, L_28, L_30, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		List_1_t3987138383 * L_34 = V_3;
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_35 = V_0;
		NullCheck(L_35);
		List_1_t3987138383 * L_36 = L_35->get_matches_0();
		RuntimeObject* L_37 = Enumerable_Except_TisGamePiece_t2515063641_m1956769829(NULL /*static, unused*/, L_34, L_36, /*hidden argument*/Enumerable_Except_TisGamePiece_t2515063641_m1956769829_RuntimeMethod_var);
		List_1_t3987138383 * L_38 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_37, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		V_3 = L_38;
		List_1_t3987138383 * L_39 = V_3;
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_40 = V_0;
		intptr_t L_41 = (intptr_t)U3CHasMoveAtU3Ec__AnonStorey0_U3CU3Em__0_m1200335706_RuntimeMethod_var;
		Predicate_1_t3340357765 * L_42 = (Predicate_1_t3340357765 *)il2cpp_codegen_object_new(Predicate_1_t3340357765_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m106490625(L_42, L_40, L_41, /*hidden argument*/Predicate_1__ctor_m106490625_RuntimeMethod_var);
		NullCheck(L_39);
		List_1_t3987138383 * L_43 = List_1_FindAll_m573018364(L_39, L_42, /*hidden argument*/List_1_FindAll_m573018364_RuntimeMethod_var);
		V_3 = L_43;
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_44 = V_0;
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_45 = V_0;
		NullCheck(L_45);
		List_1_t3987138383 * L_46 = L_45->get_matches_0();
		List_1_t3987138383 * L_47 = V_3;
		RuntimeObject* L_48 = Enumerable_Union_TisGamePiece_t2515063641_m1882129319(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/Enumerable_Union_TisGamePiece_t2515063641_m1882129319_RuntimeMethod_var);
		List_1_t3987138383 * L_49 = Enumerable_ToList_TisGamePiece_t2515063641_m4156089432(NULL /*static, unused*/, L_48, /*hidden argument*/Enumerable_ToList_TisGamePiece_t2515063641_m4156089432_RuntimeMethod_var);
		NullCheck(L_44);
		L_44->set_matches_0(L_49);
	}

IL_00c7:
	{
		U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * L_50 = V_0;
		NullCheck(L_50);
		List_1_t3987138383 * L_51 = L_50->get_matches_0();
		NullCheck(L_51);
		int32_t L_52 = List_1_get_Count_m2409895218(L_51, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		int32_t L_53 = ___listLength3;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Boolean BoardDeadlock::IsDeadlocked(GamePiece[0...,0...],System.Int32)
extern "C"  bool BoardDeadlock_IsDeadlocked_m1749050910 (BoardDeadlock_t1667041069 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, int32_t ___listLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardDeadlock_IsDeadlocked_m1749050910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_0 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_2 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = (bool)1;
		V_3 = 0;
		goto IL_0057;
	}

IL_0019:
	{
		V_4 = 0;
		goto IL_004b;
	}

IL_0021:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_4 = ___allPieces0;
		int32_t L_5 = V_3;
		int32_t L_6 = V_4;
		int32_t L_7 = ___listLength1;
		bool L_8 = BoardDeadlock_HasMoveAt_m384078838(__this, L_4, L_5, L_6, L_7, (bool)1, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_9 = ___allPieces0;
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		int32_t L_12 = ___listLength1;
		bool L_13 = BoardDeadlock_HasMoveAt_m384078838(__this, L_9, L_10, L_11, L_12, (bool)0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		V_2 = (bool)0;
	}

IL_0045:
	{
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_15 = V_4;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3135907937, /*hidden argument*/NULL);
	}

IL_006e:
	{
		bool L_21 = V_2;
		return L_21;
	}
}
// MatchValue BoardDeadlock::<GetMinimumMatches>m__0(GamePiece)
extern "C"  int32_t BoardDeadlock_U3CGetMinimumMatchesU3Em__0_m2871735036 (RuntimeObject * __this /* static, unused */, GamePiece_t2515063641 * ___n0, const RuntimeMethod* method)
{
	{
		GamePiece_t2515063641 * L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_matchValue_7();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoardDeadlock/<HasMoveAt>c__AnonStorey0::.ctor()
extern "C"  void U3CHasMoveAtU3Ec__AnonStorey0__ctor_m1931590031 (U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean BoardDeadlock/<HasMoveAt>c__AnonStorey0::<>m__0(GamePiece)
extern "C"  bool U3CHasMoveAtU3Ec__AnonStorey0_U3CU3Em__0_m1200335706 (U3CHasMoveAtU3Ec__AnonStorey0_t2576215649 * __this, GamePiece_t2515063641 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CHasMoveAtU3Ec__AnonStorey0_U3CU3Em__0_m1200335706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GamePiece_t2515063641 * L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_matchValue_7();
		List_1_t3987138383 * L_2 = __this->get_matches_0();
		NullCheck(L_2);
		GamePiece_t2515063641 * L_3 = List_1_get_Item_m77600249(L_2, 0, /*hidden argument*/List_1_get_Item_m77600249_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_matchValue_7();
		return (bool)((((int32_t)L_1) == ((int32_t)L_4))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoardShuffler::.ctor()
extern "C"  void BoardShuffler__ctor_m706542113 (BoardShuffler_t56952400 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoardShuffler::start()
extern "C"  void BoardShuffler_start_m3580271351 (BoardShuffler_t56952400 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.Generic.List`1<GamePiece> BoardShuffler::RemoveNormalPieces(GamePiece[0...,0...])
extern "C"  List_1_t3987138383 * BoardShuffler_RemoveNormalPieces_m3486924482 (BoardShuffler_t56952400 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardShuffler_RemoveNormalPieces_m3486924482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3987138383 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Bomb_t3788669921 * V_5 = NULL;
	Collectible_t2768877883 * V_6 = NULL;
	{
		List_1_t3987138383 * L_0 = (List_1_t3987138383 *)il2cpp_codegen_object_new(List_1_t3987138383_il2cpp_TypeInfo_var);
		List_1__ctor_m1371417690(L_0, /*hidden argument*/List_1__ctor_m1371417690_RuntimeMethod_var);
		V_0 = L_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_1 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		int32_t L_2 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_1, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_3 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_3);
		int32_t L_4 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_3, 1, /*hidden argument*/NULL);
		V_2 = L_4;
		V_3 = 0;
		goto IL_009e;
	}

IL_001d:
	{
		V_4 = 0;
		goto IL_0092;
	}

IL_0025:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_5 = ___allPieces0;
		int32_t L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_5);
		GamePiece_t2515063641 * L_8 = (L_5)->GetAt(L_6, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_10 = ___allPieces0;
		int32_t L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_10);
		GamePiece_t2515063641 * L_13 = (L_10)->GetAt(L_11, L_12);
		NullCheck(L_13);
		Bomb_t3788669921 * L_14 = Component_GetComponent_TisBomb_t3788669921_m15523362(L_13, /*hidden argument*/Component_GetComponent_TisBomb_t3788669921_m15523362_RuntimeMethod_var);
		V_5 = L_14;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_15 = ___allPieces0;
		int32_t L_16 = V_3;
		int32_t L_17 = V_4;
		NullCheck(L_15);
		GamePiece_t2515063641 * L_18 = (L_15)->GetAt(L_16, L_17);
		NullCheck(L_18);
		Collectible_t2768877883 * L_19 = Component_GetComponent_TisCollectible_t2768877883_m916769468(L_18, /*hidden argument*/Component_GetComponent_TisCollectible_t2768877883_m916769468_RuntimeMethod_var);
		V_6 = L_19;
		Bomb_t3788669921 * L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		Collectible_t2768877883 * L_22 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_22, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_008c;
		}
	}
	{
		List_1_t3987138383 * L_24 = V_0;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_25 = ___allPieces0;
		int32_t L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_25);
		GamePiece_t2515063641 * L_28 = (L_25)->GetAt(L_26, L_27);
		NullCheck(L_24);
		List_1_Add_m2660902508(L_24, L_28, /*hidden argument*/List_1_Add_m2660902508_RuntimeMethod_var);
		GamePieceU5B0___U2C0___U5D_t3033866021* L_29 = ___allPieces0;
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		NullCheck(L_29);
		(L_29)->SetAt(L_30, L_31, (GamePiece_t2515063641 *)NULL);
	}

IL_008c:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_009e:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_001d;
		}
	}
	{
		List_1_t3987138383 * L_38 = V_0;
		return L_38;
	}
}
// System.Void BoardShuffler::ShuffleList(System.Collections.Generic.List`1<GamePiece>)
extern "C"  void BoardShuffler_ShuffleList_m2531927563 (BoardShuffler_t56952400 * __this, List_1_t3987138383 * ___piecesToShuffle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardShuffler_ShuffleList_m2531927563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GamePiece_t2515063641 * V_3 = NULL;
	{
		List_1_t3987138383 * L_0 = ___piecesToShuffle0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2409895218(L_0, /*hidden argument*/List_1_get_Count_m2409895218_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0044;
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = Random_Range_m4054026115(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0040;
	}

IL_0022:
	{
		List_1_t3987138383 * L_7 = ___piecesToShuffle0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		GamePiece_t2515063641 * L_9 = List_1_get_Item_m77600249(L_7, L_8, /*hidden argument*/List_1_get_Item_m77600249_RuntimeMethod_var);
		V_3 = L_9;
		List_1_t3987138383 * L_10 = ___piecesToShuffle0;
		int32_t L_11 = V_2;
		List_1_t3987138383 * L_12 = ___piecesToShuffle0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		GamePiece_t2515063641 * L_14 = List_1_get_Item_m77600249(L_12, L_13, /*hidden argument*/List_1_get_Item_m77600249_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_set_Item_m2419564865(L_10, L_11, L_14, /*hidden argument*/List_1_set_Item_m2419564865_RuntimeMethod_var);
		List_1_t3987138383 * L_15 = ___piecesToShuffle0;
		int32_t L_16 = V_1;
		GamePiece_t2515063641 * L_17 = V_3;
		NullCheck(L_15);
		List_1_set_Item_m2419564865(L_15, L_16, L_17, /*hidden argument*/List_1_set_Item_m2419564865_RuntimeMethod_var);
	}

IL_0040:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))))
		{
			goto IL_000e;
		}
	}
	{
		GameManager_t1536523654 * L_21 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
		NullCheck(L_21);
		GameManager_UpdateMoves_m2091666798(L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoardShuffler::MovePieces(GamePiece[0...,0...],System.Single)
extern "C"  void BoardShuffler_MovePieces_m4260695126 (BoardShuffler_t56952400 * __this, GamePieceU5B0___U2C0___U5D_t3033866021* ___allPieces0, float ___swapTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardShuffler_MovePieces_m4260695126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_0 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		GamePieceU5B0___U2C0___U5D_t3033866021* L_2 = ___allPieces0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		int32_t L_3 = Array_GetLength_m2178203778((RuntimeArray *)(RuntimeArray *)L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0050;
	}

IL_0017:
	{
		V_3 = 0;
		goto IL_0045;
	}

IL_001e:
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_4 = ___allPieces0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_4);
		GamePiece_t2515063641 * L_7 = (L_4)->GetAt(L_5, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		GamePieceU5B0___U2C0___U5D_t3033866021* L_9 = ___allPieces0;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_9);
		GamePiece_t2515063641 * L_12 = (L_9)->GetAt(L_10, L_11);
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		float L_15 = ___swapTime1;
		NullCheck(L_12);
		GamePiece_Move_m3643451982(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0041:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bomb::.ctor()
extern "C"  void Bomb__ctor_m1455338017 (Bomb_t3788669921 * __this, const RuntimeMethod* method)
{
	{
		GamePiece__ctor_m480520445(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Collectible::.ctor()
extern "C"  void Collectible__ctor_m3068155215 (Collectible_t2768877883 * __this, const RuntimeMethod* method)
{
	{
		__this->set_clearedAtBottom_11((bool)1);
		GamePiece__ctor_m480520445(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Collectible::Start()
extern "C"  void Collectible_Start_m646555175 (Collectible_t2768877883 * __this, const RuntimeMethod* method)
{
	{
		((GamePiece_t2515063641 *)__this)->set_matchValue_7(((int32_t)12));
		return;
	}
}
// System.Void Collectible::Update()
extern "C"  void Collectible_Update_m1472739266 (Collectible_t2768877883 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CollectionGoal::.ctor()
extern "C"  void CollectionGoal__ctor_m1900579845 (CollectionGoal_t2812378701 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numberToCollect_3(5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CollectionGoal::Start()
extern "C"  void CollectionGoal_Start_m830216171 (CollectionGoal_t2812378701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionGoal_Start_m830216171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GamePiece_t2515063641 * L_0 = __this->get_prefabToCollect_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GamePiece_t2515063641 * L_2 = __this->get_prefabToCollect_2();
		NullCheck(L_2);
		SpriteRenderer_t3235626157 * L_3 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_2, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_m_spriteRenderer_4(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Void CollectionGoal::CollectPiece(GamePiece)
extern "C"  void CollectionGoal_CollectPiece_m3234486425 (CollectionGoal_t2812378701 * __this, GamePiece_t2515063641 * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionGoal_CollectPiece_m3234486425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3235626157 * V_0 = NULL;
	{
		GamePiece_t2515063641 * L_0 = ___piece0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		GamePiece_t2515063641 * L_2 = ___piece0;
		NullCheck(L_2);
		SpriteRenderer_t3235626157 * L_3 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_2, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_0 = L_3;
		SpriteRenderer_t3235626157 * L_4 = __this->get_m_spriteRenderer_4();
		NullCheck(L_4);
		Sprite_t280657092 * L_5 = SpriteRenderer_get_sprite_m663386871(L_4, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_6 = V_0;
		NullCheck(L_6);
		Sprite_t280657092 * L_7 = SpriteRenderer_get_sprite_m663386871(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		GamePiece_t2515063641 * L_9 = __this->get_prefabToCollect_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_matchValue_7();
		GamePiece_t2515063641 * L_11 = ___piece0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_matchValue_7();
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = __this->get_numberToCollect_3();
		__this->set_numberToCollect_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = __this->get_numberToCollect_3();
		int32_t L_15 = __this->get_numberToCollect_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_16 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_14, 0, L_15, /*hidden argument*/NULL);
		__this->set_numberToCollect_3(L_16);
	}

IL_006a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FinishedGameMessageWindow::.ctor()
extern "C"  void FinishedGameMessageWindow__ctor_m2037412358 (FinishedGameMessageWindow_t436455232 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinishedGameMessageWindow::ShowMessage(UnityEngine.Sprite,System.String,System.String)
extern "C"  void FinishedGameMessageWindow_ShowMessage_m671491908 (FinishedGameMessageWindow_t436455232 * __this, Sprite_t280657092 * ___sprite0, String_t* ___message1, String_t* ___buttonMsg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinishedGameMessageWindow_ShowMessage_m671491908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_messageIcon_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Image_t2670269651 * L_2 = __this->get_messageIcon_2();
		Sprite_t280657092 * L_3 = ___sprite0;
		NullCheck(L_2);
		Image_set_sprite_m2369174689(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		Text_t1901882714 * L_4 = __this->get_messageText_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		Text_t1901882714 * L_6 = __this->get_messageText_3();
		String_t* L_7 = ___message1;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
	}

IL_003a:
	{
		Text_t1901882714 * L_8 = __this->get_buttonText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		Text_t1901882714 * L_10 = __this->get_buttonText_4();
		String_t* L_11 = ___buttonMsg2;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
	}

IL_0057:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_m180891015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m671125834(__this, /*hidden argument*/Singleton_1__ctor_m671125834_RuntimeMethod_var);
		return;
	}
}
// System.Boolean GameManager::get_IsGameOver()
extern "C"  bool GameManager_get_IsGameOver_m1911883697 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isGameOver_9();
		return L_0;
	}
}
// System.Void GameManager::set_IsGameOver(System.Boolean)
extern "C"  void GameManager_set_IsGameOver_m2594715649 (GameManager_t1536523654 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_isGameOver_9(L_0);
		return;
	}
}
// LevelGoalTimed GameManager::get_levelGoalTimed()
extern "C"  LevelGoalTimed_t3825364430 * GameManager_get_levelGoalTimed_m3381075194 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		LevelGoalTimed_t3825364430 * L_0 = __this->get_m_levelGoalTimed_21();
		return L_0;
	}
}
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m2466247815 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m2466247815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1_Awake_m2904899739(__this, /*hidden argument*/Singleton_1_Awake_m2904899739_RuntimeMethod_var);
		LevelGoal_t786700456 * L_0 = Component_GetComponent_TisLevelGoal_t786700456_m4187797462(__this, /*hidden argument*/Component_GetComponent_TisLevelGoal_t786700456_m4187797462_RuntimeMethod_var);
		__this->set_m_levelGoal_20(L_0);
		LevelGoalTimed_t3825364430 * L_1 = Component_GetComponent_TisLevelGoalTimed_t3825364430_m1931629761(__this, /*hidden argument*/Component_GetComponent_TisLevelGoalTimed_t3825364430_m1931629761_RuntimeMethod_var);
		__this->set_m_levelGoalTimed_21(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Board_t3688305287 * L_2 = Object_FindObjectOfType_TisBoard_t3688305287_m1871462073(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBoard_t3688305287_m1871462073_RuntimeMethod_var);
		NullCheck(L_2);
		Board_t3688305287 * L_3 = Component_GetComponent_TisBoard_t3688305287_m1597239221(L_2, /*hidden argument*/Component_GetComponent_TisBoard_t3688305287_m1597239221_RuntimeMethod_var);
		__this->set_m_board_19(L_3);
		return;
	}
}
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2734446095 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m2734446095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		ScoreMeter_t2365063754 * L_0 = __this->get_scoreMeter_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		ScoreMeter_t2365063754 * L_2 = __this->get_scoreMeter_15();
		LevelGoal_t786700456 * L_3 = __this->get_m_levelGoal_20();
		NullCheck(L_2);
		ScoreMeter_SetupStars_m1460901484(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		int32_t L_4 = SceneManager_get_sceneCount_m2961241469(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		Scene_t2348375561  L_5 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		Text_t1901882714 * L_6 = __this->get_levelNameText_4();
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		Text_t1901882714 * L_8 = __this->get_levelNameText_4();
		String_t* L_9 = Scene_get_name_m622963475((&V_1), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
	}

IL_0050:
	{
		LevelGoal_t786700456 * L_10 = __this->get_m_levelGoal_20();
		LevelGoal_t786700456 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_movesLeft_5();
		NullCheck(L_11);
		L_11->set_movesLeft_5(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		GameManager_UpdateMoves_m2091666798(__this, /*hidden argument*/NULL);
		RuntimeObject* L_13 = GameManager_ExecuteGameLoop_m3680256769(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::UpdateMoves()
extern "C"  void GameManager_UpdateMoves_m2091666798 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_UpdateMoves_m2091666798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LevelGoalTimed_t3825364430 * L_0 = __this->get_m_levelGoalTimed_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		LevelGoal_t786700456 * L_2 = __this->get_m_levelGoal_20();
		LevelGoal_t786700456 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_movesLeft_5();
		NullCheck(L_3);
		L_3->set_movesLeft_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		Text_t1901882714 * L_5 = __this->get_movesLeftText_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		Text_t1901882714 * L_7 = __this->get_movesLeftText_5();
		LevelGoal_t786700456 * L_8 = __this->get_m_levelGoal_20();
		NullCheck(L_8);
		int32_t* L_9 = L_8->get_address_of_movesLeft_5();
		String_t* L_10 = Int32_ToString_m141394615(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
	}

IL_0056:
	{
		goto IL_0089;
	}

IL_005b:
	{
		Text_t1901882714 * L_11 = __this->get_movesLeftText_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		Text_t1901882714 * L_13 = __this->get_movesLeftText_5();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral3452606898);
		Text_t1901882714 * L_14 = __this->get_movesLeftText_5();
		NullCheck(L_14);
		Text_set_fontSize_m3617617524(L_14, ((int32_t)70), /*hidden argument*/NULL);
	}

IL_0089:
	{
		return;
	}
}
// System.Collections.IEnumerator GameManager::ExecuteGameLoop()
extern "C"  RuntimeObject* GameManager_ExecuteGameLoop_m3680256769 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ExecuteGameLoop_m3680256769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * V_0 = NULL;
	{
		U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * L_0 = (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 *)il2cpp_codegen_object_new(U3CExecuteGameLoopU3Ec__Iterator0_t2406473199_il2cpp_TypeInfo_var);
		U3CExecuteGameLoopU3Ec__Iterator0__ctor_m384007181(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameManager::BeginGame()
extern "C"  void GameManager_BeginGame_m4029875115 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_isReadyToBegin_8((bool)1);
		return;
	}
}
// System.Collections.IEnumerator GameManager::StartGameRoutine()
extern "C"  RuntimeObject* GameManager_StartGameRoutine_m2945521251 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_StartGameRoutine_m2945521251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * V_0 = NULL;
	{
		U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * L_0 = (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 *)il2cpp_codegen_object_new(U3CStartGameRoutineU3Ec__Iterator1_t4159889866_il2cpp_TypeInfo_var);
		U3CStartGameRoutineU3Ec__Iterator1__ctor_m837716400(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator GameManager::PlayGameRoutine()
extern "C"  RuntimeObject* GameManager_PlayGameRoutine_m2950207403 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_PlayGameRoutine_m2950207403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * V_0 = NULL;
	{
		U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * L_0 = (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 *)il2cpp_codegen_object_new(U3CPlayGameRoutineU3Ec__Iterator2_t2151299077_il2cpp_TypeInfo_var);
		U3CPlayGameRoutineU3Ec__Iterator2__ctor_m4119556898(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator GameManager::WaitForBoardRoutine(System.Single)
extern "C"  RuntimeObject* GameManager_WaitForBoardRoutine_m902490950 (GameManager_t1536523654 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_WaitForBoardRoutine_m902490950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * V_0 = NULL;
	{
		U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * L_0 = (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 *)il2cpp_codegen_object_new(U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383_il2cpp_TypeInfo_var);
		U3CWaitForBoardRoutineU3Ec__Iterator3__ctor_m3944732490(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * L_1 = V_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->set_delay_0(L_2);
		U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameManager::EndGameRoutine()
extern "C"  RuntimeObject* GameManager_EndGameRoutine_m2161379414 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_EndGameRoutine_m2161379414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * V_0 = NULL;
	{
		U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * L_0 = (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 *)il2cpp_codegen_object_new(U3CEndGameRoutineU3Ec__Iterator4_t4094244610_il2cpp_TypeInfo_var);
		U3CEndGameRoutineU3Ec__Iterator4__ctor_m2445518961(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 GameManager::ChangeLevel(System.Int32,System.Int32)
extern "C"  int32_t GameManager_ChangeLevel_m941026445 (GameManager_t1536523654 * __this, int32_t ___activeScene0, int32_t ___amount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___activeScene0;
		int32_t L_1 = ___amount1;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void GameManager::ReloadScene()
extern "C"  void GameManager_ReloadScene_m3846423646 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_isReadyToReload_11((bool)1);
		return;
	}
}
// System.Void GameManager::ScorePoints(GamePiece,System.Int32,System.Int32)
extern "C"  void GameManager_ScorePoints_m1504656847 (GameManager_t1536523654 * __this, GamePiece_t2515063641 * ___piece0, int32_t ___multiplier1, int32_t ___bonus2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ScorePoints_m1504656847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ScoreManager_t3621325103 * L_0 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		ScoreManager_t3621325103 * L_2 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		GamePiece_t2515063641 * L_3 = ___piece0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_scoreValue_8();
		int32_t L_5 = ___multiplier1;
		int32_t L_6 = ___bonus2;
		NullCheck(L_2);
		ScoreManager_AddScore_m2139830493(L_2, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)), (int32_t)L_6)), /*hidden argument*/NULL);
		LevelGoal_t786700456 * L_7 = __this->get_m_levelGoal_20();
		ScoreManager_t3621325103 * L_8 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = ScoreManager_get_CurrentScore_m4017375753(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		LevelGoal_UpdateScoreStars_m2419828507(L_7, L_9, /*hidden argument*/NULL);
		ScoreMeter_t2365063754 * L_10 = __this->get_scoreMeter_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		ScoreMeter_t2365063754 * L_12 = __this->get_scoreMeter_15();
		ScoreManager_t3621325103 * L_13 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = ScoreManager_get_CurrentScore_m4017375753(L_13, /*hidden argument*/NULL);
		LevelGoal_t786700456 * L_15 = __this->get_m_levelGoal_20();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_scoreStars_3();
		NullCheck(L_12);
		ScoreMeter_UpdateScoreMeter_m3696812769(L_12, L_14, L_16, /*hidden argument*/NULL);
	}

IL_006a:
	{
		SoundManager_t2102329059 * L_17 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		GamePiece_t2515063641 * L_19 = ___piece0;
		NullCheck(L_19);
		AudioClip_t3680889665 * L_20 = L_19->get_clearSound_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b4;
		}
	}
	{
		SoundManager_t2102329059 * L_22 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		GamePiece_t2515063641 * L_23 = ___piece0;
		NullCheck(L_23);
		AudioClip_t3680889665 * L_24 = L_23->get_clearSound_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_25 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_25;
		Vector3_t3722313464  L_26 = Vector3_get_normalized_m2454957984((&V_0), /*hidden argument*/NULL);
		SoundManager_t2102329059 * L_27 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		NullCheck(L_27);
		float L_28 = L_27->get_fxVolume_8();
		NullCheck(L_22);
		SoundManager_PlayClipAtPoint_m1045118740(L_22, L_24, L_26, L_28, (bool)1, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void GameManager::AddTime(System.Int32)
extern "C"  void GameManager_AddTime_m868571206 (GameManager_t1536523654 * __this, int32_t ___timeValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_AddTime_m868571206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LevelGoalTimed_t3825364430 * L_0 = __this->get_m_levelGoalTimed_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		LevelGoalTimed_t3825364430 * L_2 = __this->get_m_levelGoalTimed_21();
		int32_t L_3 = ___timeValue0;
		NullCheck(L_2);
		LevelGoalTimed_AddTime_m2547915689(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<EndGameRoutine>c__Iterator4::.ctor()
extern "C"  void U3CEndGameRoutineU3Ec__Iterator4__ctor_m2445518961 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager/<EndGameRoutine>c__Iterator4::MoveNext()
extern "C"  bool U3CEndGameRoutineU3Ec__Iterator4_MoveNext_m472919038 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEndGameRoutineU3Ec__Iterator4_MoveNext_m472919038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_012c;
			}
			case 2:
			{
				goto IL_0172;
			}
			case 3:
			{
				goto IL_02be;
			}
		}
	}
	{
		goto IL_02f1;
	}

IL_0029:
	{
		GameManager_t1536523654 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		L_2->set_m_isReadyToReload_11((bool)0);
		GameManager_t1536523654 * L_3 = __this->get_U24this_0();
		NullCheck(L_3);
		bool L_4 = L_3->get_m_isWinner_10();
		if (!L_4)
		{
			goto IL_00b4;
		}
	}
	{
		GameManager_t1536523654 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		MessageWindow_t4170584992 * L_6 = L_5->get_messageWindow_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0095;
		}
	}
	{
		GameManager_t1536523654 * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		MessageWindow_t4170584992 * L_9 = L_8->get_messageWindow_6();
		NullCheck(L_9);
		RectXFormMover_t3830425495 * L_10 = Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199(L_9, /*hidden argument*/Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199_RuntimeMethod_var);
		NullCheck(L_10);
		RectXFormMover_MoveOn_m1152315647(L_10, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		MessageWindow_t4170584992 * L_12 = L_11->get_messageWindow_6();
		GameManager_t1536523654 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		Sprite_t280657092 * L_14 = L_13->get_winIcon_12();
		NullCheck(L_12);
		MessageWindow_ShowMessage_m381883926(L_12, L_14, _stringLiteral3147613217, _stringLiteral3457136609, /*hidden argument*/NULL);
	}

IL_0095:
	{
		SoundManager_t2102329059 * L_15 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00af;
		}
	}
	{
		SoundManager_t2102329059 * L_17 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		NullCheck(L_17);
		SoundManager_PlayWinSound_m2177567815(L_17, /*hidden argument*/NULL);
	}

IL_00af:
	{
		goto IL_0108;
	}

IL_00b4:
	{
		GameManager_t1536523654 * L_18 = __this->get_U24this_0();
		NullCheck(L_18);
		MessageWindow_t4170584992 * L_19 = L_18->get_messageWindow_6();
		NullCheck(L_19);
		RectXFormMover_t3830425495 * L_20 = Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199(L_19, /*hidden argument*/Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199_RuntimeMethod_var);
		NullCheck(L_20);
		RectXFormMover_MoveOn_m1152315647(L_20, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		MessageWindow_t4170584992 * L_22 = L_21->get_messageWindow_6();
		GameManager_t1536523654 * L_23 = __this->get_U24this_0();
		NullCheck(L_23);
		Sprite_t280657092 * L_24 = L_23->get_loseIcon_13();
		NullCheck(L_22);
		MessageWindow_ShowMessage_m381883926(L_22, L_24, _stringLiteral3724931758, _stringLiteral3457136609, /*hidden argument*/NULL);
		SoundManager_t2102329059 * L_25 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_25, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0108;
		}
	}
	{
		SoundManager_t2102329059 * L_27 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		NullCheck(L_27);
		SoundManager_PlayWinSound_m2177567815(L_27, /*hidden argument*/NULL);
	}

IL_0108:
	{
		WaitForSeconds_t1699091251 * L_28 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_28, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_28);
		bool L_29 = __this->get_U24disposing_2();
		if (L_29)
		{
			goto IL_0127;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0127:
	{
		goto IL_02f3;
	}

IL_012c:
	{
		GameManager_t1536523654 * L_30 = __this->get_U24this_0();
		NullCheck(L_30);
		ScreenFader_t840564778 * L_31 = L_30->get_screenFader_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_31, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0152;
		}
	}
	{
		GameManager_t1536523654 * L_33 = __this->get_U24this_0();
		NullCheck(L_33);
		ScreenFader_t840564778 * L_34 = L_33->get_screenFader_3();
		NullCheck(L_34);
		ScreenFader_FadeOn_m2182675462(L_34, /*hidden argument*/NULL);
	}

IL_0152:
	{
		goto IL_0172;
	}

IL_0157:
	{
		__this->set_U24current_1(NULL);
		bool L_35 = __this->get_U24disposing_2();
		if (L_35)
		{
			goto IL_016d;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_016d:
	{
		goto IL_02f3;
	}

IL_0172:
	{
		GameManager_t1536523654 * L_36 = __this->get_U24this_0();
		NullCheck(L_36);
		bool L_37 = L_36->get_m_isReadyToReload_11();
		if (!L_37)
		{
			goto IL_0157;
		}
	}
	{
		GameManager_t1536523654 * L_38 = __this->get_U24this_0();
		Scene_t2348375561  L_39 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_39;
		int32_t L_40 = Scene_get_buildIndex_m270272723((&V_1), /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_activeScene_16(L_40);
		GameManager_t1536523654 * L_41 = __this->get_U24this_0();
		int32_t L_42 = SceneManager_get_sceneCountInBuildSettings_m1247885472(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->set_sceneCount_17(L_42);
		GameManager_t1536523654 * L_43 = __this->get_U24this_0();
		GameManager_t1536523654 * L_44 = __this->get_U24this_0();
		GameManager_t1536523654 * L_45 = __this->get_U24this_0();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_activeScene_16();
		NullCheck(L_44);
		int32_t L_47 = GameManager_ChangeLevel_m941026445(L_44, L_46, 1, /*hidden argument*/NULL);
		NullCheck(L_43);
		L_43->set_nextLevel_18(L_47);
		GameManager_t1536523654 * L_48 = __this->get_U24this_0();
		NullCheck(L_48);
		bool L_49 = L_48->get_m_isWinner_10();
		if (L_49)
		{
			goto IL_01e7;
		}
	}
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		goto IL_02ea;
	}

IL_01e7:
	{
		GameManager_t1536523654 * L_50 = __this->get_U24this_0();
		NullCheck(L_50);
		int32_t L_51 = L_50->get_nextLevel_18();
		GameManager_t1536523654 * L_52 = __this->get_U24this_0();
		NullCheck(L_52);
		int32_t L_53 = L_52->get_sceneCount_17();
		if ((((int32_t)L_51) >= ((int32_t)L_53)))
		{
			goto IL_0217;
		}
	}
	{
		GameManager_t1536523654 * L_54 = __this->get_U24this_0();
		NullCheck(L_54);
		int32_t L_55 = L_54->get_nextLevel_18();
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		goto IL_02ea;
	}

IL_0217:
	{
		GameManager_t1536523654 * L_56 = __this->get_U24this_0();
		NullCheck(L_56);
		MessageWindow_t4170584992 * L_57 = L_56->get_messageWindow_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_57, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_02ea;
		}
	}
	{
		GameManager_t1536523654 * L_59 = __this->get_U24this_0();
		NullCheck(L_59);
		MessageWindow_t4170584992 * L_60 = L_59->get_messageWindow_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_61 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_60, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02ea;
		}
	}
	{
		GameManager_t1536523654 * L_62 = __this->get_U24this_0();
		NullCheck(L_62);
		MessageWindow_t4170584992 * L_63 = L_62->get_endLevelMessageWindow_7();
		NullCheck(L_63);
		RectXFormMover_t3830425495 * L_64 = Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199(L_63, /*hidden argument*/Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199_RuntimeMethod_var);
		NullCheck(L_64);
		RectXFormMover_MoveOn_m1152315647(L_64, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_65 = __this->get_U24this_0();
		NullCheck(L_65);
		MessageWindow_t4170584992 * L_66 = L_65->get_endLevelMessageWindow_7();
		GameManager_t1536523654 * L_67 = __this->get_U24this_0();
		NullCheck(L_67);
		Sprite_t280657092 * L_68 = L_67->get_goalIcon_14();
		ScoreManager_t3621325103 * L_69 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_69);
		int32_t L_70 = ScoreManager_get_CurrentScore_m4017375753(L_69, /*hidden argument*/NULL);
		V_2 = L_70;
		String_t* L_71 = Int32_ToString_m141394615((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2169307049, L_71, /*hidden argument*/NULL);
		NullCheck(L_66);
		MessageWindow_ShowMessage_m381883926(L_66, L_68, L_72, _stringLiteral43296185, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_73 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_73, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_73);
		bool L_74 = __this->get_U24disposing_2();
		if (L_74)
		{
			goto IL_02b9;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_02b9:
	{
		goto IL_02f3;
	}

IL_02be:
	{
		GameManager_t1536523654 * L_75 = __this->get_U24this_0();
		NullCheck(L_75);
		ScreenFader_t840564778 * L_76 = L_75->get_screenFader_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_77 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_76, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_02e4;
		}
	}
	{
		GameManager_t1536523654 * L_78 = __this->get_U24this_0();
		NullCheck(L_78);
		ScreenFader_t840564778 * L_79 = L_78->get_screenFader_3();
		NullCheck(L_79);
		ScreenFader_FadeOn_m2182675462(L_79, /*hidden argument*/NULL);
	}

IL_02e4:
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_02ea:
	{
		__this->set_U24PC_3((-1));
	}

IL_02f1:
	{
		return (bool)0;
	}

IL_02f3:
	{
		return (bool)1;
	}
}
// System.Object GameManager/<EndGameRoutine>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CEndGameRoutineU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2351057396 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object GameManager/<EndGameRoutine>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CEndGameRoutineU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m123232287 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void GameManager/<EndGameRoutine>c__Iterator4::Dispose()
extern "C"  void U3CEndGameRoutineU3Ec__Iterator4_Dispose_m2422750339 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void GameManager/<EndGameRoutine>c__Iterator4::Reset()
extern "C"  void U3CEndGameRoutineU3Ec__Iterator4_Reset_m3176011742 (U3CEndGameRoutineU3Ec__Iterator4_t4094244610 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEndGameRoutineU3Ec__Iterator4_Reset_m3176011742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<ExecuteGameLoop>c__Iterator0::.ctor()
extern "C"  void U3CExecuteGameLoopU3Ec__Iterator0__ctor_m384007181 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager/<ExecuteGameLoop>c__Iterator0::MoveNext()
extern "C"  bool U3CExecuteGameLoopU3Ec__Iterator0_MoveNext_m443753607 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExecuteGameLoopU3Ec__Iterator0_MoveNext_m443753607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_00b5;
			}
			case 4:
			{
				goto IL_00df;
			}
		}
	}
	{
		goto IL_00e6;
	}

IL_002d:
	{
		GameManager_t1536523654 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		Coroutine_t3829159415 * L_3 = MonoBehaviour_StartCoroutine_m2618285814(L_2, _stringLiteral1416634442, /*hidden argument*/NULL);
		__this->set_U24current_1(L_3);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0052:
	{
		goto IL_00e8;
	}

IL_0057:
	{
		GameManager_t1536523654 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		Coroutine_t3829159415 * L_6 = MonoBehaviour_StartCoroutine_m2618285814(L_5, _stringLiteral1420516232, /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_007c;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_007c:
	{
		goto IL_00e8;
	}

IL_0081:
	{
		GameManager_t1536523654 * L_8 = __this->get_U24this_0();
		float L_9 = (0.5f);
		RuntimeObject * L_10 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		Coroutine_t3829159415 * L_11 = MonoBehaviour_StartCoroutine_m1654577315(L_8, _stringLiteral1020219491, L_10, /*hidden argument*/NULL);
		__this->set_U24current_1(L_11);
		bool L_12 = __this->get_U24disposing_2();
		if (L_12)
		{
			goto IL_00b0;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00b0:
	{
		goto IL_00e8;
	}

IL_00b5:
	{
		GameManager_t1536523654 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		Coroutine_t3829159415 * L_14 = MonoBehaviour_StartCoroutine_m2618285814(L_13, _stringLiteral2170358864, /*hidden argument*/NULL);
		__this->set_U24current_1(L_14);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_00da;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_00da:
	{
		goto IL_00e8;
	}

IL_00df:
	{
		__this->set_U24PC_3((-1));
	}

IL_00e6:
	{
		return (bool)0;
	}

IL_00e8:
	{
		return (bool)1;
	}
}
// System.Object GameManager/<ExecuteGameLoop>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CExecuteGameLoopU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1317081753 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object GameManager/<ExecuteGameLoop>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CExecuteGameLoopU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2969652650 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void GameManager/<ExecuteGameLoop>c__Iterator0::Dispose()
extern "C"  void U3CExecuteGameLoopU3Ec__Iterator0_Dispose_m2759737908 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void GameManager/<ExecuteGameLoop>c__Iterator0::Reset()
extern "C"  void U3CExecuteGameLoopU3Ec__Iterator0_Reset_m1181204801 (U3CExecuteGameLoopU3Ec__Iterator0_t2406473199 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExecuteGameLoopU3Ec__Iterator0_Reset_m1181204801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<PlayGameRoutine>c__Iterator2::.ctor()
extern "C"  void U3CPlayGameRoutineU3Ec__Iterator2__ctor_m4119556898 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager/<PlayGameRoutine>c__Iterator2::MoveNext()
extern "C"  bool U3CPlayGameRoutineU3Ec__Iterator2_MoveNext_m3308786863 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayGameRoutineU3Ec__Iterator2_MoveNext_m3308786863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_00b4;
	}

IL_0021:
	{
		GameManager_t1536523654 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		LevelGoalTimed_t3825364430 * L_3 = L_2->get_m_levelGoalTimed_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		GameManager_t1536523654 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		LevelGoalTimed_t3825364430 * L_6 = L_5->get_m_levelGoalTimed_21();
		NullCheck(L_6);
		LevelGoalTimed_StartCountdown_m2269274181(L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		goto IL_009d;
	}

IL_004c:
	{
		GameManager_t1536523654 * L_7 = __this->get_U24this_0();
		GameManager_t1536523654 * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		LevelGoal_t786700456 * L_9 = L_8->get_m_levelGoal_20();
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean LevelGoal::IsGameOver() */, L_9);
		NullCheck(L_7);
		L_7->set_m_isGameOver_9(L_10);
		GameManager_t1536523654 * L_11 = __this->get_U24this_0();
		GameManager_t1536523654 * L_12 = __this->get_U24this_0();
		NullCheck(L_12);
		LevelGoal_t786700456 * L_13 = L_12->get_m_levelGoal_20();
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean LevelGoal::IsWinner() */, L_13);
		NullCheck(L_11);
		L_11->set_m_isWinner_10(L_14);
		__this->set_U24current_1(NULL);
		bool L_15 = __this->get_U24disposing_2();
		if (L_15)
		{
			goto IL_0098;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0098:
	{
		goto IL_00b6;
	}

IL_009d:
	{
		GameManager_t1536523654 * L_16 = __this->get_U24this_0();
		NullCheck(L_16);
		bool L_17 = L_16->get_m_isGameOver_9();
		if (!L_17)
		{
			goto IL_004c;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_00b4:
	{
		return (bool)0;
	}

IL_00b6:
	{
		return (bool)1;
	}
}
// System.Object GameManager/<PlayGameRoutine>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CPlayGameRoutineU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3489336916 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object GameManager/<PlayGameRoutine>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CPlayGameRoutineU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m317587814 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void GameManager/<PlayGameRoutine>c__Iterator2::Dispose()
extern "C"  void U3CPlayGameRoutineU3Ec__Iterator2_Dispose_m2905466673 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void GameManager/<PlayGameRoutine>c__Iterator2::Reset()
extern "C"  void U3CPlayGameRoutineU3Ec__Iterator2_Reset_m1287644634 (U3CPlayGameRoutineU3Ec__Iterator2_t2151299077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayGameRoutineU3Ec__Iterator2_Reset_m1287644634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<StartGameRoutine>c__Iterator1::.ctor()
extern "C"  void U3CStartGameRoutineU3Ec__Iterator1__ctor_m837716400 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager/<StartGameRoutine>c__Iterator1::MoveNext()
extern "C"  bool U3CStartGameRoutineU3Ec__Iterator1_MoveNext_m3444371051 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartGameRoutineU3Ec__Iterator1_MoveNext_m3444371051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_00bf;
			}
			case 2:
			{
				goto IL_00e3;
			}
			case 3:
			{
				goto IL_0149;
			}
		}
	}
	{
		goto IL_0176;
	}

IL_0029:
	{
		GameManager_t1536523654 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		MessageWindow_t4170584992 * L_3 = L_2->get_messageWindow_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_009f;
		}
	}
	{
		GameManager_t1536523654 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		MessageWindow_t4170584992 * L_6 = L_5->get_messageWindow_6();
		NullCheck(L_6);
		RectXFormMover_t3830425495 * L_7 = Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199(L_6, /*hidden argument*/Component_GetComponent_TisRectXFormMover_t3830425495_m1388095199_RuntimeMethod_var);
		NullCheck(L_7);
		RectXFormMover_MoveOn_m1152315647(L_7, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		MessageWindow_t4170584992 * L_9 = L_8->get_messageWindow_6();
		GameManager_t1536523654 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		Sprite_t280657092 * L_11 = L_10->get_goalIcon_14();
		GameManager_t1536523654 * L_12 = __this->get_U24this_0();
		NullCheck(L_12);
		LevelGoal_t786700456 * L_13 = L_12->get_m_levelGoal_20();
		NullCheck(L_13);
		Int32U5BU5D_t385246372* L_14 = L_13->get_scoreGoals_4();
		NullCheck(L_14);
		String_t* L_15 = Int32_ToString_m141394615(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1329904798, L_15, /*hidden argument*/NULL);
		NullCheck(L_9);
		MessageWindow_ShowMessage_m381883926(L_9, L_11, L_16, _stringLiteral2707269980, /*hidden argument*/NULL);
	}

IL_009f:
	{
		goto IL_00ef;
	}

IL_00a4:
	{
		__this->set_U24current_1(NULL);
		bool L_17 = __this->get_U24disposing_2();
		if (L_17)
		{
			goto IL_00ba;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00ba:
	{
		goto IL_0178;
	}

IL_00bf:
	{
		WaitForSeconds_t1699091251 * L_18 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_18, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_18);
		bool L_19 = __this->get_U24disposing_2();
		if (L_19)
		{
			goto IL_00de;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00de:
	{
		goto IL_0178;
	}

IL_00e3:
	{
		GameManager_t1536523654 * L_20 = __this->get_U24this_0();
		NullCheck(L_20);
		L_20->set_m_isReadyToBegin_8((bool)1);
	}

IL_00ef:
	{
		GameManager_t1536523654 * L_21 = __this->get_U24this_0();
		NullCheck(L_21);
		bool L_22 = L_21->get_m_isReadyToBegin_8();
		if (!L_22)
		{
			goto IL_00a4;
		}
	}
	{
		GameManager_t1536523654 * L_23 = __this->get_U24this_0();
		NullCheck(L_23);
		ScreenFader_t840564778 * L_24 = L_23->get_screenFader_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0125;
		}
	}
	{
		GameManager_t1536523654 * L_26 = __this->get_U24this_0();
		NullCheck(L_26);
		ScreenFader_t840564778 * L_27 = L_26->get_screenFader_3();
		NullCheck(L_27);
		ScreenFader_FadeOff_m3851179821(L_27, /*hidden argument*/NULL);
	}

IL_0125:
	{
		WaitForSeconds_t1699091251 * L_28 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_28, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_28);
		bool L_29 = __this->get_U24disposing_2();
		if (L_29)
		{
			goto IL_0144;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_0144:
	{
		goto IL_0178;
	}

IL_0149:
	{
		GameManager_t1536523654 * L_30 = __this->get_U24this_0();
		NullCheck(L_30);
		Board_t3688305287 * L_31 = L_30->get_m_board_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_31, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_016f;
		}
	}
	{
		GameManager_t1536523654 * L_33 = __this->get_U24this_0();
		NullCheck(L_33);
		Board_t3688305287 * L_34 = L_33->get_m_board_19();
		NullCheck(L_34);
		Board_SetupBoard_m1019592939(L_34, /*hidden argument*/NULL);
	}

IL_016f:
	{
		__this->set_U24PC_3((-1));
	}

IL_0176:
	{
		return (bool)0;
	}

IL_0178:
	{
		return (bool)1;
	}
}
// System.Object GameManager/<StartGameRoutine>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CStartGameRoutineU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m888317203 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object GameManager/<StartGameRoutine>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CStartGameRoutineU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m790053923 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void GameManager/<StartGameRoutine>c__Iterator1::Dispose()
extern "C"  void U3CStartGameRoutineU3Ec__Iterator1_Dispose_m1981841315 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void GameManager/<StartGameRoutine>c__Iterator1::Reset()
extern "C"  void U3CStartGameRoutineU3Ec__Iterator1_Reset_m2167390105 (U3CStartGameRoutineU3Ec__Iterator1_t4159889866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartGameRoutineU3Ec__Iterator1_Reset_m2167390105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<WaitForBoardRoutine>c__Iterator3::.ctor()
extern "C"  void U3CWaitForBoardRoutineU3Ec__Iterator3__ctor_m3944732490 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager/<WaitForBoardRoutine>c__Iterator3::MoveNext()
extern "C"  bool U3CWaitForBoardRoutineU3Ec__Iterator3_MoveNext_m3150632135 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForBoardRoutineU3Ec__Iterator3_MoveNext_m3150632135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00ea;
			}
			case 3:
			{
				goto IL_0124;
			}
		}
	}
	{
		goto IL_012b;
	}

IL_0029:
	{
		GameManager_t1536523654 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		LevelGoalTimed_t3825364430 * L_3 = L_2->get_m_levelGoalTimed_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0085;
		}
	}
	{
		GameManager_t1536523654 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		LevelGoalTimed_t3825364430 * L_6 = L_5->get_m_levelGoalTimed_21();
		NullCheck(L_6);
		Timer_t4185932343 * L_7 = L_6->get_timer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0085;
		}
	}
	{
		GameManager_t1536523654 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		LevelGoalTimed_t3825364430 * L_10 = L_9->get_m_levelGoalTimed_21();
		NullCheck(L_10);
		Timer_t4185932343 * L_11 = L_10->get_timer_7();
		NullCheck(L_11);
		Timer_FadeOff_m2085329431(L_11, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_12 = __this->get_U24this_1();
		NullCheck(L_12);
		LevelGoalTimed_t3825364430 * L_13 = L_12->get_m_levelGoalTimed_21();
		NullCheck(L_13);
		Timer_t4185932343 * L_14 = L_13->get_timer_7();
		NullCheck(L_14);
		L_14->set_paused_5((bool)1);
	}

IL_0085:
	{
		GameManager_t1536523654 * L_15 = __this->get_U24this_1();
		NullCheck(L_15);
		Board_t3688305287 * L_16 = L_15->get_m_board_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ff;
		}
	}
	{
		GameManager_t1536523654 * L_18 = __this->get_U24this_1();
		NullCheck(L_18);
		Board_t3688305287 * L_19 = L_18->get_m_board_19();
		NullCheck(L_19);
		float L_20 = L_19->get_swapTime_18();
		WaitForSeconds_t1699091251 * L_21 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_21, L_20, /*hidden argument*/NULL);
		__this->set_U24current_2(L_21);
		bool L_22 = __this->get_U24disposing_3();
		if (L_22)
		{
			goto IL_00c5;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00c5:
	{
		goto IL_012d;
	}

IL_00ca:
	{
		goto IL_00ea;
	}

IL_00cf:
	{
		__this->set_U24current_2(NULL);
		bool L_23 = __this->get_U24disposing_3();
		if (L_23)
		{
			goto IL_00e5;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_00e5:
	{
		goto IL_012d;
	}

IL_00ea:
	{
		GameManager_t1536523654 * L_24 = __this->get_U24this_1();
		NullCheck(L_24);
		Board_t3688305287 * L_25 = L_24->get_m_board_19();
		NullCheck(L_25);
		bool L_26 = L_25->get_isRefilling_30();
		if (L_26)
		{
			goto IL_00cf;
		}
	}

IL_00ff:
	{
		float L_27 = __this->get_delay_0();
		WaitForSeconds_t1699091251 * L_28 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_28, L_27, /*hidden argument*/NULL);
		__this->set_U24current_2(L_28);
		bool L_29 = __this->get_U24disposing_3();
		if (L_29)
		{
			goto IL_011f;
		}
	}
	{
		__this->set_U24PC_4(3);
	}

IL_011f:
	{
		goto IL_012d;
	}

IL_0124:
	{
		__this->set_U24PC_4((-1));
	}

IL_012b:
	{
		return (bool)0;
	}

IL_012d:
	{
		return (bool)1;
	}
}
// System.Object GameManager/<WaitForBoardRoutine>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CWaitForBoardRoutineU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3874315595 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object GameManager/<WaitForBoardRoutine>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CWaitForBoardRoutineU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m2720544003 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void GameManager/<WaitForBoardRoutine>c__Iterator3::Dispose()
extern "C"  void U3CWaitForBoardRoutineU3Ec__Iterator3_Dispose_m2710600579 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void GameManager/<WaitForBoardRoutine>c__Iterator3::Reset()
extern "C"  void U3CWaitForBoardRoutineU3Ec__Iterator3_Reset_m766874134 (U3CWaitForBoardRoutineU3Ec__Iterator3_t1359855383 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForBoardRoutineU3Ec__Iterator3_Reset_m766874134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePiece::.ctor()
extern "C"  void GamePiece__ctor_m480520445 (GamePiece_t2515063641 * __this, const RuntimeMethod* method)
{
	{
		__this->set_interpolation_6(4);
		__this->set_scoreValue_8(((int32_t)20));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePiece::Init(Board)
extern "C"  void GamePiece_Init_m2979619987 (GamePiece_t2515063641 * __this, Board_t3688305287 * ___board0, const RuntimeMethod* method)
{
	{
		Board_t3688305287 * L_0 = ___board0;
		__this->set_m_board_5(L_0);
		return;
	}
}
// System.Void GamePiece::Update()
extern "C"  void GamePiece_Update_m1284330219 (GamePiece_t2515063641 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GamePiece_Update_m1284330219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_y_2();
		GamePiece_Move_m3643451982(__this, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_3))), (int32_t)3)), (((int32_t)((int32_t)L_6))), (0.5f), /*hidden argument*/NULL);
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_x_1();
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = (&V_3)->get_y_2();
		GamePiece_Move_m3643451982(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)L_10))), (int32_t)3)), (((int32_t)((int32_t)L_13))), (0.5f), /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void GamePiece::SetCoordinates(System.Int32,System.Int32)
extern "C"  void GamePiece_SetCoordinates_m696969722 (GamePiece_t2515063641 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_xIndex_2(L_0);
		int32_t L_1 = ___y1;
		__this->set_yIndex_3(L_1);
		return;
	}
}
// System.Void GamePiece::Move(System.Int32,System.Int32,System.Single)
extern "C"  void GamePiece_Move_m3643451982 (GamePiece_t2515063641 * __this, int32_t ___destX0, int32_t ___destY1, float ___timeToMove2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isMoving_4();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = ___destX0;
		int32_t L_2 = ___destY1;
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (((float)((float)L_1))), (((float)((float)L_2))), (0.0f), /*hidden argument*/NULL);
		float L_4 = ___timeToMove2;
		RuntimeObject* L_5 = GamePiece_MoveRoutine_m2722760447(__this, L_3, L_4, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Collections.IEnumerator GamePiece::MoveRoutine(UnityEngine.Vector3,System.Single)
extern "C"  RuntimeObject* GamePiece_MoveRoutine_m2722760447 (GamePiece_t2515063641 * __this, Vector3_t3722313464  ___destination0, float ___timeToMove1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GamePiece_MoveRoutine_m2722760447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveRoutineU3Ec__Iterator0_t3429612721 * V_0 = NULL;
	{
		U3CMoveRoutineU3Ec__Iterator0_t3429612721 * L_0 = (U3CMoveRoutineU3Ec__Iterator0_t3429612721 *)il2cpp_codegen_object_new(U3CMoveRoutineU3Ec__Iterator0_t3429612721_il2cpp_TypeInfo_var);
		U3CMoveRoutineU3Ec__Iterator0__ctor_m1297760928(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMoveRoutineU3Ec__Iterator0_t3429612721 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___destination0;
		NullCheck(L_1);
		L_1->set_destination_3(L_2);
		U3CMoveRoutineU3Ec__Iterator0_t3429612721 * L_3 = V_0;
		float L_4 = ___timeToMove1;
		NullCheck(L_3);
		L_3->set_timeToMove_4(L_4);
		U3CMoveRoutineU3Ec__Iterator0_t3429612721 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_6(__this);
		U3CMoveRoutineU3Ec__Iterator0_t3429612721 * L_6 = V_0;
		return L_6;
	}
}
// System.Void GamePiece::ChangeColor(GamePiece)
extern "C"  void GamePiece_ChangeColor_m2323782627 (GamePiece_t2515063641 * __this, GamePiece_t2515063641 * ___pieceToMatch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GamePiece_ChangeColor_m2323782627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3235626157 * V_0 = NULL;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SpriteRenderer_t3235626157 * V_2 = NULL;
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_0 = L_0;
		Color_t2555686324  L_1 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		GamePiece_t2515063641 * L_2 = ___pieceToMatch0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		GamePiece_t2515063641 * L_4 = ___pieceToMatch0;
		NullCheck(L_4);
		SpriteRenderer_t3235626157 * L_5 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_4, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_2 = L_5;
		SpriteRenderer_t3235626157 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_10 = V_0;
		SpriteRenderer_t3235626157 * L_11 = V_2;
		NullCheck(L_11);
		Color_t2555686324  L_12 = SpriteRenderer_get_color_m904197748(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		SpriteRenderer_set_color_m3056777566(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0044:
	{
		GamePiece_t2515063641 * L_13 = ___pieceToMatch0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_matchValue_7();
		__this->set_matchValue_7(L_14);
	}

IL_0050:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePiece/<MoveRoutine>c__Iterator0::.ctor()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0__ctor_m1297760928 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GamePiece/<MoveRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CMoveRoutineU3Ec__Iterator0_MoveNext_m2150343102 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveRoutineU3Ec__Iterator0_MoveNext_m2150343102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_023c;
			}
		}
	}
	{
		goto IL_025a;
	}

IL_0021:
	{
		GamePiece_t2515063641 * L_2 = __this->get_U24this_6();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		__this->set_U3CstartPositionU3E__0_0(L_4);
		__this->set_U3CreachedDestinationU3E__0_1((bool)0);
		__this->set_U3CelapsedTimeU3E__0_2((0.0f));
		GamePiece_t2515063641 * L_5 = __this->get_U24this_6();
		NullCheck(L_5);
		L_5->set_m_isMoving_4((bool)1);
		goto IL_023c;
	}

IL_005a:
	{
		GamePiece_t2515063641 * L_6 = __this->get_U24this_6();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = __this->get_destination_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_10 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)(0.01f)))))
		{
			goto IL_00cf;
		}
	}
	{
		__this->set_U3CreachedDestinationU3E__0_1((bool)1);
		GamePiece_t2515063641 * L_11 = __this->get_U24this_6();
		NullCheck(L_11);
		Board_t3688305287 * L_12 = L_11->get_m_board_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		GamePiece_t2515063641 * L_14 = __this->get_U24this_6();
		NullCheck(L_14);
		Board_t3688305287 * L_15 = L_14->get_m_board_5();
		GamePiece_t2515063641 * L_16 = __this->get_U24this_6();
		Vector3_t3722313464 * L_17 = __this->get_address_of_destination_3();
		float L_18 = L_17->get_x_1();
		Vector3_t3722313464 * L_19 = __this->get_address_of_destination_3();
		float L_20 = L_19->get_y_2();
		NullCheck(L_15);
		Board_PlaceGamePiece_m976255011(L_15, L_16, (((int32_t)((int32_t)L_18))), (((int32_t)((int32_t)L_20))), /*hidden argument*/NULL);
	}

IL_00ca:
	{
		goto IL_0247;
	}

IL_00cf:
	{
		float L_21 = __this->get_U3CelapsedTimeU3E__0_2();
		float L_22 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E__0_2(((float)il2cpp_codegen_add((float)L_21, (float)L_22)));
		float L_23 = __this->get_U3CelapsedTimeU3E__0_2();
		float L_24 = __this->get_timeToMove_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)L_23/(float)L_24)), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_U3CtU3E__1_5(L_25);
		GamePiece_t2515063641 * L_26 = __this->get_U24this_6();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_interpolation_6();
		V_1 = L_27;
		int32_t L_28 = V_1;
		switch (L_28)
		{
			case 0:
			{
				goto IL_012e;
			}
			case 1:
			{
				goto IL_0146;
			}
			case 2:
			{
				goto IL_0168;
			}
			case 3:
			{
				goto IL_0190;
			}
			case 4:
			{
				goto IL_01bb;
			}
		}
	}
	{
		goto IL_01fa;
	}

IL_012e:
	{
		float L_29 = __this->get_U3CtU3E__1_5();
		float L_30 = __this->get_U3CtU3E__1_5();
		__this->set_U3CtU3E__1_5(((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)));
		goto IL_01fa;
	}

IL_0146:
	{
		float L_31 = __this->get_U3CtU3E__1_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_32 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)(3.14159274f))), (float)(0.5f))));
		__this->set_U3CtU3E__1_5(L_32);
		goto IL_01fa;
	}

IL_0168:
	{
		float L_33 = __this->get_U3CtU3E__1_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_34 = cosf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_33, (float)(3.14159274f))), (float)(0.5f))));
		__this->set_U3CtU3E__1_5(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_34)));
		goto IL_01fa;
	}

IL_0190:
	{
		float L_35 = __this->get_U3CtU3E__1_5();
		float L_36 = __this->get_U3CtU3E__1_5();
		float L_37 = __this->get_U3CtU3E__1_5();
		__this->set_U3CtU3E__1_5(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), (float)((float)il2cpp_codegen_subtract((float)(3.0f), (float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_37)))))));
		goto IL_01fa;
	}

IL_01bb:
	{
		float L_38 = __this->get_U3CtU3E__1_5();
		float L_39 = __this->get_U3CtU3E__1_5();
		float L_40 = __this->get_U3CtU3E__1_5();
		float L_41 = __this->get_U3CtU3E__1_5();
		float L_42 = __this->get_U3CtU3E__1_5();
		__this->set_U3CtU3E__1_5(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), (float)L_40)), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_41, (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_42, (float)(6.0f))), (float)(15.0f))))), (float)(10.0f))))));
		goto IL_01fa;
	}

IL_01fa:
	{
		GamePiece_t2515063641 * L_43 = __this->get_U24this_6();
		NullCheck(L_43);
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(L_43, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = __this->get_U3CstartPositionU3E__0_0();
		Vector3_t3722313464  L_46 = __this->get_destination_3();
		float L_47 = __this->get_U3CtU3E__1_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_48 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_45, L_46, L_47, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_m3387557959(L_44, L_48, /*hidden argument*/NULL);
		__this->set_U24current_7(NULL);
		bool L_49 = __this->get_U24disposing_8();
		if (L_49)
		{
			goto IL_0237;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_0237:
	{
		goto IL_025c;
	}

IL_023c:
	{
		bool L_50 = __this->get_U3CreachedDestinationU3E__0_1();
		if (!L_50)
		{
			goto IL_005a;
		}
	}

IL_0247:
	{
		GamePiece_t2515063641 * L_51 = __this->get_U24this_6();
		NullCheck(L_51);
		L_51->set_m_isMoving_4((bool)0);
		__this->set_U24PC_9((-1));
	}

IL_025a:
	{
		return (bool)0;
	}

IL_025c:
	{
		return (bool)1;
	}
}
// System.Object GamePiece/<MoveRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CMoveRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1013875220 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object GamePiece/<MoveRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CMoveRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2039540432 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void GamePiece/<MoveRoutine>c__Iterator0::Dispose()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0_Dispose_m1593320243 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void GamePiece/<MoveRoutine>c__Iterator0::Reset()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0_Reset_m29717128 (U3CMoveRoutineU3Ec__Iterator0_t3429612721 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveRoutineU3Ec__Iterator0_Reset_m29717128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelGoal::.ctor()
extern "C"  void LevelGoal__ctor_m2738173615 (LevelGoal_t786700456 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoal__ctor_m2738173615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2DD432972D09D92F62ECF1A2E7F2A6CE502476A646_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		__this->set_scoreGoals_4(L_0);
		__this->set_movesLeft_5(((int32_t)30));
		__this->set_timeLeft_6(((int32_t)60));
		Singleton_1__ctor_m799740360(__this, /*hidden argument*/Singleton_1__ctor_m799740360_RuntimeMethod_var);
		return;
	}
}
// System.Void LevelGoal::Start()
extern "C"  void LevelGoal_Start_m630965541 (LevelGoal_t786700456 * __this, const RuntimeMethod* method)
{
	{
		LevelGoal_Init_m1323533292(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelGoal::Init()
extern "C"  void LevelGoal_Init_m1323533292 (LevelGoal_t786700456 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoal_Init_m1323533292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set_scoreStars_3(0);
		V_0 = 1;
		goto IL_0033;
	}

IL_000e:
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_scoreGoals_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t385246372* L_4 = __this->get_scoreGoals_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) >= ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1703760606, /*hidden argument*/NULL);
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		Int32U5BU5D_t385246372* L_10 = __this->get_scoreGoals_4();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Int32 LevelGoal::UpdateScore(System.Int32)
extern "C"  int32_t LevelGoal_UpdateScore_m3990050120 (LevelGoal_t786700456 * __this, int32_t ___score0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0007:
	{
		int32_t L_0 = ___score0;
		Int32U5BU5D_t385246372* L_1 = __this->get_scoreGoals_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_0) >= ((int32_t)L_4)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0017:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		Int32U5BU5D_t385246372* L_8 = __this->get_scoreGoals_4();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		Int32U5BU5D_t385246372* L_9 = __this->get_scoreGoals_4();
		NullCheck(L_9);
		return (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))));
	}
}
// System.Void LevelGoal::UpdateScoreStars(System.Int32)
extern "C"  void LevelGoal_UpdateScoreStars_m2419828507 (LevelGoal_t786700456 * __this, int32_t ___score0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___score0;
		int32_t L_1 = LevelGoal_UpdateScore_m3990050120(__this, L_0, /*hidden argument*/NULL);
		__this->set_scoreStars_3(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelGoalCollected::.ctor()
extern "C"  void LevelGoalCollected__ctor_m4268221876 (LevelGoalCollected_t1758280699 * __this, const RuntimeMethod* method)
{
	{
		LevelGoal__ctor_m2738173615(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean LevelGoalCollected::IsGameOver()
extern "C"  bool LevelGoalCollected_IsGameOver_m1694789712 (LevelGoalCollected_t1758280699 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean LevelGoalCollected::IsWinner()
extern "C"  bool LevelGoalCollected_IsWinner_m3150664154 (LevelGoalCollected_t1758280699 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelGoalScored::.ctor()
extern "C"  void LevelGoalScored__ctor_m1021083534 (LevelGoalScored_t1233295862 * __this, const RuntimeMethod* method)
{
	{
		LevelGoal__ctor_m2738173615(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean LevelGoalScored::IsWinner()
extern "C"  bool LevelGoalScored_IsWinner_m2530798907 (LevelGoalScored_t1233295862 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalScored_IsWinner_m2530798907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScoreManager_t3621325103 * L_0 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		ScoreManager_t3621325103 * L_2 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = ScoreManager_get_CurrentScore_m4017375753(L_2, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_4 = ((LevelGoal_t786700456 *)__this)->get_scoreGoals_4();
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean LevelGoalScored::IsGameOver()
extern "C"  bool LevelGoalScored_IsGameOver_m2671981916 (LevelGoalScored_t1233295862 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalScored_IsGameOver_m2671981916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t385246372* L_0 = ((LevelGoal_t786700456 *)__this)->get_scoreGoals_4();
		Int32U5BU5D_t385246372* L_1 = ((LevelGoal_t786700456 *)__this)->get_scoreGoals_4();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ScoreManager_t3621325103 * L_4 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = ScoreManager_get_CurrentScore_m4017375753(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		int32_t L_7 = ((LevelGoal_t786700456 *)__this)->get_movesLeft_5();
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelGoalTimed::.ctor()
extern "C"  void LevelGoalTimed__ctor_m1372173929 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method)
{
	{
		LevelGoal__ctor_m2738173615(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelGoalTimed::start()
extern "C"  void LevelGoalTimed_start_m16563371 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalTimed_start_m16563371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Timer_t4185932343 * L_0 = __this->get_timer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Timer_t4185932343 * L_2 = __this->get_timer_7();
		int32_t L_3 = ((LevelGoal_t786700456 *)__this)->get_timeLeft_6();
		NullCheck(L_2);
		Timer_InitTimer_m536240261(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		int32_t L_4 = ((LevelGoal_t786700456 *)__this)->get_timeLeft_6();
		__this->set_m_maxTime_8(L_4);
		return;
	}
}
// System.Void LevelGoalTimed::StartCountdown()
extern "C"  void LevelGoalTimed_StartCountdown_m2269274181 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = LevelGoalTimed_CountDownRoutine_m599542716(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator LevelGoalTimed::CountDownRoutine()
extern "C"  RuntimeObject* LevelGoalTimed_CountDownRoutine_m599542716 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalTimed_CountDownRoutine_m599542716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * V_0 = NULL;
	{
		U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * L_0 = (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 *)il2cpp_codegen_object_new(U3CCountDownRoutineU3Ec__Iterator0_t1611850947_il2cpp_TypeInfo_var);
		U3CCountDownRoutineU3Ec__Iterator0__ctor_m2653225981(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean LevelGoalTimed::IsWinner()
extern "C"  bool LevelGoalTimed_IsWinner_m2078003671 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalTimed_IsWinner_m2078003671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScoreManager_t3621325103 * L_0 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		ScoreManager_t3621325103 * L_2 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = ScoreManager_get_CurrentScore_m4017375753(L_2, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_4 = ((LevelGoal_t786700456 *)__this)->get_scoreGoals_4();
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean LevelGoalTimed::IsGameOver()
extern "C"  bool LevelGoalTimed_IsGameOver_m2274330261 (LevelGoalTimed_t3825364430 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalTimed_IsGameOver_m2274330261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t385246372* L_0 = ((LevelGoal_t786700456 *)__this)->get_scoreGoals_4();
		Int32U5BU5D_t385246372* L_1 = ((LevelGoal_t786700456 *)__this)->get_scoreGoals_4();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ScoreManager_t3621325103 * L_4 = Singleton_1_get_Instance_m1225640580(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1225640580_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = ScoreManager_get_CurrentScore_m4017375753(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		int32_t L_7 = ((LevelGoal_t786700456 *)__this)->get_timeLeft_6();
		return (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void LevelGoalTimed::AddTime(System.Int32)
extern "C"  void LevelGoalTimed_AddTime_m2547915689 (LevelGoalTimed_t3825364430 * __this, int32_t ___timeValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelGoalTimed_AddTime_m2547915689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((LevelGoal_t786700456 *)__this)->get_timeLeft_6();
		int32_t L_1 = ___timeValue0;
		((LevelGoal_t786700456 *)__this)->set_timeLeft_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = ((LevelGoal_t786700456 *)__this)->get_timeLeft_6();
		int32_t L_3 = __this->get_m_maxTime_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		((LevelGoal_t786700456 *)__this)->set_timeLeft_6(L_4);
		Timer_t4185932343 * L_5 = __this->get_timer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Timer_t4185932343 * L_7 = __this->get_timer_7();
		int32_t L_8 = ((LevelGoal_t786700456 *)__this)->get_timeLeft_6();
		NullCheck(L_7);
		Timer_UpdateTimer_m3105605545(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelGoalTimed/<CountDownRoutine>c__Iterator0::.ctor()
extern "C"  void U3CCountDownRoutineU3Ec__Iterator0__ctor_m2653225981 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean LevelGoalTimed/<CountDownRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CCountDownRoutineU3Ec__Iterator0_MoveNext_m3742334545 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountDownRoutineU3Ec__Iterator0_MoveNext_m3742334545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_00a6;
	}

IL_0021:
	{
		goto IL_008e;
	}

IL_0026:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0045:
	{
		goto IL_00a8;
	}

IL_004a:
	{
		LevelGoalTimed_t3825364430 * L_4 = __this->get_U24this_0();
		LevelGoalTimed_t3825364430 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = ((LevelGoal_t786700456 *)L_5)->get_timeLeft_6();
		NullCheck(L_5);
		((LevelGoal_t786700456 *)L_5)->set_timeLeft_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		LevelGoalTimed_t3825364430 * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		Timer_t4185932343 * L_8 = L_7->get_timer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		LevelGoalTimed_t3825364430 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		Timer_t4185932343 * L_11 = L_10->get_timer_7();
		LevelGoalTimed_t3825364430 * L_12 = __this->get_U24this_0();
		NullCheck(L_12);
		int32_t L_13 = ((LevelGoal_t786700456 *)L_12)->get_timeLeft_6();
		NullCheck(L_11);
		Timer_UpdateTimer_m3105605545(L_11, L_13, /*hidden argument*/NULL);
	}

IL_008e:
	{
		LevelGoalTimed_t3825364430 * L_14 = __this->get_U24this_0();
		NullCheck(L_14);
		int32_t L_15 = ((LevelGoal_t786700456 *)L_14)->get_timeLeft_6();
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_3((-1));
	}

IL_00a6:
	{
		return (bool)0;
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// System.Object LevelGoalTimed/<CountDownRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CCountDownRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3753949728 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object LevelGoalTimed/<CountDownRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CCountDownRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3966673815 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void LevelGoalTimed/<CountDownRoutine>c__Iterator0::Dispose()
extern "C"  void U3CCountDownRoutineU3Ec__Iterator0_Dispose_m3552525279 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void LevelGoalTimed/<CountDownRoutine>c__Iterator0::Reset()
extern "C"  void U3CCountDownRoutineU3Ec__Iterator0_Reset_m561203093 (U3CCountDownRoutineU3Ec__Iterator0_t1611850947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountDownRoutineU3Ec__Iterator0_Reset_m561203093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MessageWindow::.ctor()
extern "C"  void MessageWindow__ctor_m1375884683 (MessageWindow_t4170584992 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MessageWindow::ShowMessage(UnityEngine.Sprite,System.String,System.String)
extern "C"  void MessageWindow_ShowMessage_m381883926 (MessageWindow_t4170584992 * __this, Sprite_t280657092 * ___sprite0, String_t* ___message1, String_t* ___buttonMsg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageWindow_ShowMessage_m381883926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_messageIcon_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Image_t2670269651 * L_2 = __this->get_messageIcon_2();
		Sprite_t280657092 * L_3 = ___sprite0;
		NullCheck(L_2);
		Image_set_sprite_m2369174689(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		Text_t1901882714 * L_4 = __this->get_messageText_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		Text_t1901882714 * L_6 = __this->get_messageText_3();
		String_t* L_7 = ___message1;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
	}

IL_003a:
	{
		Text_t1901882714 * L_8 = __this->get_buttonText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		Text_t1901882714 * L_10 = __this->get_buttonText_4();
		String_t* L_11 = ___buttonMsg2;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
	}

IL_0057:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParticleManager::.ctor()
extern "C"  void ParticleManager__ctor_m510968389 (ParticleManager_t4052332083 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParticleManager::ClearPieceFXAt(System.Int32,System.Int32,System.Int32)
extern "C"  void ParticleManager_ClearPieceFXAt_m644113273 (ParticleManager_t4052332083 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticleManager_ClearPieceFXAt_m644113273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	ParticlePlayer_t339043229 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_clearFXPrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_clearFXPrefab_2();
		int32_t L_3 = ___x0;
		int32_t L_4 = ___y1;
		int32_t L_5 = ___z2;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (((float)((float)L_3))), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_7 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_8 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_2, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_8;
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		ParticlePlayer_t339043229 * L_10 = GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024(L_9, /*hidden argument*/GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024_RuntimeMethod_var);
		V_1 = L_10;
		ParticlePlayer_t339043229 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		ParticlePlayer_t339043229 * L_13 = V_1;
		NullCheck(L_13);
		ParticlePlayer_Play_m1704575969(L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void ParticleManager::BreakTileFXAt(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void ParticleManager_BreakTileFXAt_m1617400814 (ParticleManager_t4052332083 * __this, int32_t ___breakableValue0, int32_t ___x1, int32_t ___y2, int32_t ___z3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticleManager_BreakTileFXAt_m1617400814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	ParticlePlayer_t339043229 * V_1 = NULL;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		V_1 = (ParticlePlayer_t339043229 *)NULL;
		int32_t L_0 = ___breakableValue0;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		GameObject_t1113636619 * L_1 = __this->get_doubleBreakFXPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_doubleBreakFXPrefab_4();
		int32_t L_4 = ___x1;
		int32_t L_5 = ___y2;
		int32_t L_6 = ___z3;
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (((float)((float)L_4))), (((float)((float)L_5))), (((float)((float)L_6))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_3, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0039:
	{
		goto IL_006c;
	}

IL_003e:
	{
		GameObject_t1113636619 * L_10 = __this->get_breakFXPrefab_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		GameObject_t1113636619 * L_12 = __this->get_breakFXPrefab_3();
		int32_t L_13 = ___x1;
		int32_t L_14 = ___y2;
		int32_t L_15 = ___z3;
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), (((float)((float)L_13))), (((float)((float)L_14))), (((float)((float)L_15))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_18 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_12, L_16, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_18;
	}

IL_006c:
	{
		GameObject_t1113636619 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		GameObject_t1113636619 * L_21 = V_0;
		NullCheck(L_21);
		ParticlePlayer_t339043229 * L_22 = GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024(L_21, /*hidden argument*/GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024_RuntimeMethod_var);
		V_1 = L_22;
		ParticlePlayer_t339043229 * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0091;
		}
	}
	{
		ParticlePlayer_t339043229 * L_25 = V_1;
		NullCheck(L_25);
		ParticlePlayer_Play_m1704575969(L_25, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void ParticleManager::BombFXAt(System.Int32,System.Int32,System.Int32)
extern "C"  void ParticleManager_BombFXAt_m3785780858 (ParticleManager_t4052332083 * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticleManager_BombFXAt_m3785780858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	ParticlePlayer_t339043229 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_bombFXPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_bombFXPrefab_5();
		int32_t L_3 = ___x0;
		int32_t L_4 = ___y1;
		int32_t L_5 = ___z2;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (((float)((float)L_3))), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_7 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_8 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_2, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_8;
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		ParticlePlayer_t339043229 * L_10 = GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024(L_9, /*hidden argument*/GameObject_GetComponent_TisParticlePlayer_t339043229_m316270024_RuntimeMethod_var);
		V_1 = L_10;
		ParticlePlayer_t339043229 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		ParticlePlayer_t339043229 * L_13 = V_1;
		NullCheck(L_13);
		ParticlePlayer_Play_m1704575969(L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParticlePlayer::.ctor()
extern "C"  void ParticlePlayer__ctor_m4204470275 (ParticlePlayer_t339043229 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lifetime_3((1.0f));
		__this->set_destroyImmediately_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ParticlePlayer::Start()
extern "C"  void ParticlePlayer_Start_m2665624159 (ParticlePlayer_t339043229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticlePlayer_Start_m2665624159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParticleSystemU5BU5D_t3089334924* L_0 = Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m796275405(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t1800779281_m796275405_RuntimeMethod_var);
		__this->set_allParticles_2(L_0);
		bool L_1 = __this->get_destroyImmediately_4();
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		float L_3 = __this->get_lifetime_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void ParticlePlayer::Play()
extern "C"  void ParticlePlayer_Play_m1704575969 (ParticlePlayer_t339043229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParticlePlayer_Play_m1704575969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_t1800779281 * V_0 = NULL;
	ParticleSystemU5BU5D_t3089334924* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ParticleSystemU5BU5D_t3089334924* L_0 = __this->get_allParticles_2();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0022;
	}

IL_000e:
	{
		ParticleSystemU5BU5D_t3089334924* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ParticleSystem_t1800779281 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		ParticleSystem_t1800779281 * L_5 = V_0;
		NullCheck(L_5);
		ParticleSystem_Play_m882713458(L_5, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_6 = V_0;
		NullCheck(L_6);
		ParticleSystem_Stop_m3125854227(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_8 = V_2;
		ParticleSystemU5BU5D_t3089334924* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		float L_11 = __this->get_lifetime_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RectXFormMover::.ctor()
extern "C"  void RectXFormMover__ctor_m544438856 (RectXFormMover_t3830425495 * __this, const RuntimeMethod* method)
{
	{
		__this->set_timeToMove_5((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RectXFormMover::Awake()
extern "C"  void RectXFormMover_Awake_m1486824141 (RectXFormMover_t3830425495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectXFormMover_Awake_m1486824141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_m_rectXForm_6(L_0);
		return;
	}
}
// System.Void RectXFormMover::Move(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void RectXFormMover_Move_m2266801239 (RectXFormMover_t3830425495 * __this, Vector3_t3722313464  ___startPos0, Vector3_t3722313464  ___endPos1, float ___timeToMove2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isMoving_7();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Vector3_t3722313464  L_1 = ___startPos0;
		Vector3_t3722313464  L_2 = ___endPos1;
		float L_3 = ___timeToMove2;
		RuntimeObject* L_4 = RectXFormMover_MoveRoutine_m3279753072(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Collections.IEnumerator RectXFormMover::MoveRoutine(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  RuntimeObject* RectXFormMover_MoveRoutine_m3279753072 (RectXFormMover_t3830425495 * __this, Vector3_t3722313464  ___startPos0, Vector3_t3722313464  ___endPos1, float ___timeToMove2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectXFormMover_MoveRoutine_m3279753072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveRoutineU3Ec__Iterator0_t2853335681 * V_0 = NULL;
	{
		U3CMoveRoutineU3Ec__Iterator0_t2853335681 * L_0 = (U3CMoveRoutineU3Ec__Iterator0_t2853335681 *)il2cpp_codegen_object_new(U3CMoveRoutineU3Ec__Iterator0_t2853335681_il2cpp_TypeInfo_var);
		U3CMoveRoutineU3Ec__Iterator0__ctor_m1019061308(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMoveRoutineU3Ec__Iterator0_t2853335681 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___startPos0;
		NullCheck(L_1);
		L_1->set_startPos_0(L_2);
		U3CMoveRoutineU3Ec__Iterator0_t2853335681 * L_3 = V_0;
		Vector3_t3722313464  L_4 = ___endPos1;
		NullCheck(L_3);
		L_3->set_endPos_3(L_4);
		U3CMoveRoutineU3Ec__Iterator0_t2853335681 * L_5 = V_0;
		float L_6 = ___timeToMove2;
		NullCheck(L_5);
		L_5->set_timeToMove_4(L_6);
		U3CMoveRoutineU3Ec__Iterator0_t2853335681 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_U24this_6(__this);
		U3CMoveRoutineU3Ec__Iterator0_t2853335681 * L_8 = V_0;
		return L_8;
	}
}
// System.Void RectXFormMover::MoveOn()
extern "C"  void RectXFormMover_MoveOn_m1152315647 (RectXFormMover_t3830425495 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_startPosition_2();
		Vector3_t3722313464  L_1 = __this->get_onScreenPosition_3();
		float L_2 = __this->get_timeToMove_5();
		RectXFormMover_Move_m2266801239(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RectXFormMover::MoveOff()
extern "C"  void RectXFormMover_MoveOff_m2805428095 (RectXFormMover_t3830425495 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_onScreenPosition_3();
		Vector3_t3722313464  L_1 = __this->get_endPosition_4();
		float L_2 = __this->get_timeToMove_5();
		RectXFormMover_Move_m2266801239(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RectXFormMover/<MoveRoutine>c__Iterator0::.ctor()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0__ctor_m1019061308 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RectXFormMover/<MoveRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CMoveRoutineU3Ec__Iterator0_MoveNext_m2504048908 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveRoutineU3Ec__Iterator0_MoveNext_m2504048908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0176;
			}
		}
	}
	{
		goto IL_0194;
	}

IL_0021:
	{
		RectXFormMover_t3830425495 * L_2 = __this->get_U24this_6();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = L_2->get_m_rectXForm_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		RectXFormMover_t3830425495 * L_5 = __this->get_U24this_6();
		NullCheck(L_5);
		RectTransform_t3704657025 * L_6 = L_5->get_m_rectXForm_6();
		Vector3_t3722313464  L_7 = __this->get_startPos_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_set_anchoredPosition_m4126691837(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		__this->set_U3CreachedDestinationU3E__0_1((bool)0);
		__this->set_U3CelapsedTimeU3E__0_2((0.0f));
		RectXFormMover_t3830425495 * L_9 = __this->get_U24this_6();
		NullCheck(L_9);
		L_9->set_m_isMoving_7((bool)0);
		goto IL_0176;
	}

IL_0075:
	{
		RectXFormMover_t3830425495 * L_10 = __this->get_U24this_6();
		NullCheck(L_10);
		RectTransform_t3704657025 * L_11 = L_10->get_m_rectXForm_6();
		NullCheck(L_11);
		Vector2_t2156229523  L_12 = RectTransform_get_anchoredPosition_m1813443094(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = __this->get_endPos_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_15 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = ((Mathf_t3464937446_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t3464937446_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_U3CreachedDestinationU3E__0_1((bool)1);
		goto IL_0181;
	}

IL_00ab:
	{
		float L_17 = __this->get_U3CelapsedTimeU3E__0_2();
		float L_18 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E__0_2(((float)il2cpp_codegen_add((float)L_17, (float)L_18)));
		float L_19 = __this->get_U3CelapsedTimeU3E__0_2();
		float L_20 = __this->get_timeToMove_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)L_19/(float)L_20)), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_U3CtU3E__1_5(L_21);
		float L_22 = __this->get_U3CtU3E__1_5();
		float L_23 = __this->get_U3CtU3E__1_5();
		float L_24 = __this->get_U3CtU3E__1_5();
		float L_25 = __this->get_U3CtU3E__1_5();
		float L_26 = __this->get_U3CtU3E__1_5();
		__this->set_U3CtU3E__1_5(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), (float)L_24)), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_25, (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_26, (float)(6.0f))), (float)(15.0f))))), (float)(10.0f))))));
		RectXFormMover_t3830425495 * L_27 = __this->get_U24this_6();
		NullCheck(L_27);
		RectTransform_t3704657025 * L_28 = L_27->get_m_rectXForm_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_28, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_015b;
		}
	}
	{
		RectXFormMover_t3830425495 * L_30 = __this->get_U24this_6();
		NullCheck(L_30);
		RectTransform_t3704657025 * L_31 = L_30->get_m_rectXForm_6();
		Vector3_t3722313464  L_32 = __this->get_startPos_0();
		Vector3_t3722313464  L_33 = __this->get_endPos_3();
		float L_34 = __this->get_U3CtU3E__1_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_35 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_32, L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_36 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		RectTransform_set_anchoredPosition_m4126691837(L_31, L_36, /*hidden argument*/NULL);
	}

IL_015b:
	{
		__this->set_U24current_7(NULL);
		bool L_37 = __this->get_U24disposing_8();
		if (L_37)
		{
			goto IL_0171;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_0171:
	{
		goto IL_0196;
	}

IL_0176:
	{
		bool L_38 = __this->get_U3CreachedDestinationU3E__0_1();
		if (!L_38)
		{
			goto IL_0075;
		}
	}

IL_0181:
	{
		RectXFormMover_t3830425495 * L_39 = __this->get_U24this_6();
		NullCheck(L_39);
		L_39->set_m_isMoving_7((bool)0);
		__this->set_U24PC_9((-1));
	}

IL_0194:
	{
		return (bool)0;
	}

IL_0196:
	{
		return (bool)1;
	}
}
// System.Object RectXFormMover/<MoveRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CMoveRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2784400397 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object RectXFormMover/<MoveRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CMoveRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3091374954 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void RectXFormMover/<MoveRoutine>c__Iterator0::Dispose()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0_Dispose_m4090787473 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void RectXFormMover/<MoveRoutine>c__Iterator0::Reset()
extern "C"  void U3CMoveRoutineU3Ec__Iterator0_Reset_m2625270631 (U3CMoveRoutineU3Ec__Iterator0_t2853335681 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveRoutineU3Ec__Iterator0_Reset_m2625270631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreManager::.ctor()
extern "C"  void ScoreManager__ctor_m1352454192 (ScoreManager_t3621325103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager__ctor_m1352454192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_increment_5(5);
		__this->set_countTime_7((1.0f));
		Singleton_1__ctor_m476637395(__this, /*hidden argument*/Singleton_1__ctor_m476637395_RuntimeMethod_var);
		return;
	}
}
// System.Int32 ScoreManager::get_CurrentScore()
extern "C"  int32_t ScoreManager_get_CurrentScore_m4017375753 (ScoreManager_t3621325103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_currentScore_3();
		return L_0;
	}
}
// System.Void ScoreManager::Start()
extern "C"  void ScoreManager_Start_m1380787396 (ScoreManager_t3621325103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_currentScore_3();
		ScoreManager_UpdateScoreText_m1234541438(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreManager::UpdateScoreText(System.Int32)
extern "C"  void ScoreManager_UpdateScoreText_m1234541438 (ScoreManager_t3621325103 * __this, int32_t ___scoreValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_UpdateScoreText_m1234541438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_scoreText_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		Text_t1901882714 * L_2 = __this->get_scoreText_6();
		String_t* L_3 = Int32_ToString_m141394615((&___scoreValue0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void ScoreManager::AddScore(System.Int32)
extern "C"  void ScoreManager_AddScore_m2139830493 (ScoreManager_t3621325103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_currentScore_3();
		int32_t L_1 = ___value0;
		__this->set_m_currentScore_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		RuntimeObject* L_2 = ScoreManager_CountScoreRoutine_m2953619159(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScoreManager::CountScoreRoutine()
extern "C"  RuntimeObject* ScoreManager_CountScoreRoutine_m2953619159 (ScoreManager_t3621325103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_CountScoreRoutine_m2953619159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * V_0 = NULL;
	{
		U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * L_0 = (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 *)il2cpp_codegen_object_new(U3CCountScoreRoutineU3Ec__Iterator0_t796815392_il2cpp_TypeInfo_var);
		U3CCountScoreRoutineU3Ec__Iterator0__ctor_m1563709736(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreManager/<CountScoreRoutine>c__Iterator0::.ctor()
extern "C"  void U3CCountScoreRoutineU3Ec__Iterator0__ctor_m1563709736 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ScoreManager/<CountScoreRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CCountScoreRoutineU3Ec__Iterator0_MoveNext_m461926074 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_00e7;
	}

IL_0021:
	{
		__this->set_U3CiterationsU3E__0_0(0);
		goto IL_0089;
	}

IL_002d:
	{
		ScoreManager_t3621325103 * L_2 = __this->get_U24this_1();
		ScoreManager_t3621325103 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_m_counterValue_4();
		ScoreManager_t3621325103 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_m_increment_5();
		NullCheck(L_3);
		L_3->set_m_counterValue_4(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6)));
		ScoreManager_t3621325103 * L_7 = __this->get_U24this_1();
		ScoreManager_t3621325103 * L_8 = __this->get_U24this_1();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_m_counterValue_4();
		NullCheck(L_7);
		ScoreManager_UpdateScoreText_m1234541438(L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_U3CiterationsU3E__0_0();
		__this->set_U3CiterationsU3E__0_0(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		__this->set_U24current_2(NULL);
		bool L_11 = __this->get_U24disposing_3();
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0084:
	{
		goto IL_00e9;
	}

IL_0089:
	{
		ScoreManager_t3621325103 * L_12 = __this->get_U24this_1();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_m_counterValue_4();
		ScoreManager_t3621325103 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_m_currentScore_3();
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_16 = __this->get_U3CiterationsU3E__0_0();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)10000))))
		{
			goto IL_002d;
		}
	}

IL_00b4:
	{
		ScoreManager_t3621325103 * L_17 = __this->get_U24this_1();
		ScoreManager_t3621325103 * L_18 = __this->get_U24this_1();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_m_currentScore_3();
		NullCheck(L_17);
		L_17->set_m_counterValue_4(L_19);
		ScoreManager_t3621325103 * L_20 = __this->get_U24this_1();
		ScoreManager_t3621325103 * L_21 = __this->get_U24this_1();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_m_currentScore_3();
		NullCheck(L_20);
		ScoreManager_UpdateScoreText_m1234541438(L_20, L_22, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00e7:
	{
		return (bool)0;
	}

IL_00e9:
	{
		return (bool)1;
	}
}
// System.Object ScoreManager/<CountScoreRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CCountScoreRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3167900642 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object ScoreManager/<CountScoreRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CCountScoreRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1686912390 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void ScoreManager/<CountScoreRoutine>c__Iterator0::Dispose()
extern "C"  void U3CCountScoreRoutineU3Ec__Iterator0_Dispose_m2662396150 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void ScoreManager/<CountScoreRoutine>c__Iterator0::Reset()
extern "C"  void U3CCountScoreRoutineU3Ec__Iterator0_Reset_m886833585 (U3CCountScoreRoutineU3Ec__Iterator0_t796815392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountScoreRoutineU3Ec__Iterator0_Reset_m886833585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreMeter::.ctor()
extern "C"  void ScoreMeter__ctor_m2221649792 (ScoreMeter_t2365063754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreMeter__ctor_m2221649792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_scoreStars_3(((ScoreStarU5BU5D_t2250574351*)SZArrayNew(ScoreStarU5BU5D_t2250574351_il2cpp_TypeInfo_var, (uint32_t)3)));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreMeter::Awake()
extern "C"  void ScoreMeter_Awake_m3871264745 (ScoreMeter_t2365063754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreMeter_Awake_m3871264745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Slider_t3903728902 * L_0 = Component_GetComponent_TisSlider_t3903728902_m2161493141(__this, /*hidden argument*/Component_GetComponent_TisSlider_t3903728902_m2161493141_RuntimeMethod_var);
		__this->set_slider_2(L_0);
		return;
	}
}
// System.Void ScoreMeter::SetupStars(LevelGoal)
extern "C"  void ScoreMeter_SetupStars_m1460901484 (ScoreMeter_t2365063754 * __this, LevelGoal_t786700456 * ___levelGoal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreMeter_SetupStars_m1460901484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	RectTransform_t3704657025 * V_4 = NULL;
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		LevelGoal_t786700456 * L_0 = ___levelGoal0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral2260155623, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		LevelGoal_t786700456 * L_2 = ___levelGoal0;
		__this->set_m_levelGoal_4(L_2);
		LevelGoal_t786700456 * L_3 = __this->get_m_levelGoal_4();
		NullCheck(L_3);
		Int32U5BU5D_t385246372* L_4 = L_3->get_scoreGoals_4();
		LevelGoal_t786700456 * L_5 = __this->get_m_levelGoal_4();
		NullCheck(L_5);
		Int32U5BU5D_t385246372* L_6 = L_5->get_scoreGoals_4();
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)1));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_m_maxScore_5(L_8);
		Slider_t3903728902 * L_9 = __this->get_slider_2();
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_9, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		NullCheck(L_10);
		Rect_t2360479859  L_11 = RectTransform_get_rect_m574169965(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = Rect_get_width_m3421484486((&V_1), /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = __this->get_m_maxScore_5();
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		V_2 = 0;
		goto IL_00d7;
	}

IL_006b:
	{
		ScoreStarU5BU5D_t2250574351* L_14 = __this->get_scoreStars_3();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ScoreStar_t1530904714 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d3;
		}
	}
	{
		float L_19 = V_0;
		LevelGoal_t786700456 * L_20 = ___levelGoal0;
		NullCheck(L_20);
		Int32U5BU5D_t385246372* L_21 = L_20->get_scoreGoals_4();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = __this->get_m_maxScore_5();
		float L_26 = V_0;
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_19, (float)(((float)((float)L_24)))))/(float)(((float)((float)L_25))))), (float)((float)il2cpp_codegen_multiply((float)L_26, (float)(0.5f)))));
		ScoreStarU5BU5D_t2250574351* L_27 = __this->get_scoreStars_3();
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		ScoreStar_t1530904714 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		RectTransform_t3704657025 * L_31 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_30, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		V_4 = L_31;
		RectTransform_t3704657025 * L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_32, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		RectTransform_t3704657025 * L_34 = V_4;
		float L_35 = V_3;
		RectTransform_t3704657025 * L_36 = V_4;
		NullCheck(L_36);
		Vector2_t2156229523  L_37 = RectTransform_get_anchoredPosition_m1813443094(L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		float L_38 = (&V_5)->get_y_1();
		Vector2_t2156229523  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector2__ctor_m3970636864((&L_39), L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_34);
		RectTransform_set_anchoredPosition_m4126691837(L_34, L_39, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00d7:
	{
		int32_t L_41 = V_2;
		LevelGoal_t786700456 * L_42 = ___levelGoal0;
		NullCheck(L_42);
		Int32U5BU5D_t385246372* L_43 = L_42->get_scoreGoals_4();
		NullCheck(L_43);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_006b;
		}
	}

IL_00e5:
	{
		return;
	}
}
// System.Void ScoreMeter::UpdateScoreMeter(System.Int32,System.Int32)
extern "C"  void ScoreMeter_UpdateScoreMeter_m3696812769 (ScoreMeter_t2365063754 * __this, int32_t ___score0, int32_t ___starCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreMeter_UpdateScoreMeter_m3696812769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		LevelGoal_t786700456 * L_0 = __this->get_m_levelGoal_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Slider_t3903728902 * L_2 = __this->get_slider_2();
		int32_t L_3 = ___score0;
		int32_t L_4 = __this->get_m_maxScore_5();
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)((float)(((float)((float)L_3)))/(float)(((float)((float)L_4))))));
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0051;
	}

IL_002d:
	{
		ScoreStarU5BU5D_t2250574351* L_5 = __this->get_scoreStars_3();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ScoreStar_t1530904714 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		ScoreStarU5BU5D_t2250574351* L_10 = __this->get_scoreStars_3();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ScoreStar_t1530904714 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		ScoreStar_Activate_m2924319444(L_13, /*hidden argument*/NULL);
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___starCount1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreStar::.ctor()
extern "C"  void ScoreStar__ctor_m1716507073 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method)
{
	{
		__this->set_delay_4((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreStar::Start()
extern "C"  void ScoreStar_Start_m335292301 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method)
{
	{
		ScoreStar_SetActive_m4188645778(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreStar::SetActive(System.Boolean)
extern "C"  void ScoreStar_SetActive_m4188645778 (ScoreStar_t1530904714 * __this, bool ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreStar_SetActive_m4188645778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_star_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Image_t2670269651 * L_2 = __this->get_star_2();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		bool L_4 = ___state0;
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void ScoreStar::Activate()
extern "C"  void ScoreStar_Activate_m2924319444 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_activated_6();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		RuntimeObject* L_1 = ScoreStar_ActivateRoutine_m3514958748(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator ScoreStar::ActivateRoutine()
extern "C"  RuntimeObject* ScoreStar_ActivateRoutine_m3514958748 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreStar_ActivateRoutine_m3514958748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CActivateRoutineU3Ec__Iterator0_t3188531504 * V_0 = NULL;
	{
		U3CActivateRoutineU3Ec__Iterator0_t3188531504 * L_0 = (U3CActivateRoutineU3Ec__Iterator0_t3188531504 *)il2cpp_codegen_object_new(U3CActivateRoutineU3Ec__Iterator0_t3188531504_il2cpp_TypeInfo_var);
		U3CActivateRoutineU3Ec__Iterator0__ctor_m2903826167(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CActivateRoutineU3Ec__Iterator0_t3188531504 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CActivateRoutineU3Ec__Iterator0_t3188531504 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator ScoreStar::TestRoutine()
extern "C"  RuntimeObject* ScoreStar_TestRoutine_m1045298798 (ScoreStar_t1530904714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreStar_TestRoutine_m1045298798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTestRoutineU3Ec__Iterator1_t3179073790 * V_0 = NULL;
	{
		U3CTestRoutineU3Ec__Iterator1_t3179073790 * L_0 = (U3CTestRoutineU3Ec__Iterator1_t3179073790 *)il2cpp_codegen_object_new(U3CTestRoutineU3Ec__Iterator1_t3179073790_il2cpp_TypeInfo_var);
		U3CTestRoutineU3Ec__Iterator1__ctor_m737039290(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTestRoutineU3Ec__Iterator1_t3179073790 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CTestRoutineU3Ec__Iterator1_t3179073790 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreStar/<ActivateRoutine>c__Iterator0::.ctor()
extern "C"  void U3CActivateRoutineU3Ec__Iterator0__ctor_m2903826167 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ScoreStar/<ActivateRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CActivateRoutineU3Ec__Iterator0_MoveNext_m3305822105 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CActivateRoutineU3Ec__Iterator0_MoveNext_m3305822105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00c9;
			}
		}
	}
	{
		goto IL_00dc;
	}

IL_0021:
	{
		ScoreStar_t1530904714 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		L_2->set_activated_6((bool)1);
		ScoreStar_t1530904714 * L_3 = __this->get_U24this_0();
		NullCheck(L_3);
		ParticlePlayer_t339043229 * L_4 = L_3->get_starFX_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		ScoreStar_t1530904714 * L_6 = __this->get_U24this_0();
		NullCheck(L_6);
		ParticlePlayer_t339043229 * L_7 = L_6->get_starFX_3();
		NullCheck(L_7);
		ParticlePlayer_Play_m1704575969(L_7, /*hidden argument*/NULL);
	}

IL_0053:
	{
		SoundManager_t2102329059 * L_8 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		ScoreStar_t1530904714 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		AudioClip_t3680889665 * L_11 = L_10->get_starSound_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		SoundManager_t2102329059 * L_13 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		ScoreStar_t1530904714 * L_14 = __this->get_U24this_0();
		NullCheck(L_14);
		AudioClip_t3680889665 * L_15 = L_14->get_starSound_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		SoundManager_t2102329059 * L_17 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18 = L_17->get_fxVolume_8();
		NullCheck(L_13);
		SoundManager_PlayClipAtPoint_m1045118740(L_13, L_15, L_16, L_18, (bool)1, /*hidden argument*/NULL);
	}

IL_009f:
	{
		ScoreStar_t1530904714 * L_19 = __this->get_U24this_0();
		NullCheck(L_19);
		float L_20 = L_19->get_delay_4();
		WaitForSeconds_t1699091251 * L_21 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_21, L_20, /*hidden argument*/NULL);
		__this->set_U24current_1(L_21);
		bool L_22 = __this->get_U24disposing_2();
		if (L_22)
		{
			goto IL_00c4;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00c4:
	{
		goto IL_00de;
	}

IL_00c9:
	{
		ScoreStar_t1530904714 * L_23 = __this->get_U24this_0();
		NullCheck(L_23);
		ScoreStar_SetActive_m4188645778(L_23, (bool)1, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_00dc:
	{
		return (bool)0;
	}

IL_00de:
	{
		return (bool)1;
	}
}
// System.Object ScoreStar/<ActivateRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CActivateRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3748611267 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ScoreStar/<ActivateRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CActivateRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1200011478 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void ScoreStar/<ActivateRoutine>c__Iterator0::Dispose()
extern "C"  void U3CActivateRoutineU3Ec__Iterator0_Dispose_m2514848544 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void ScoreStar/<ActivateRoutine>c__Iterator0::Reset()
extern "C"  void U3CActivateRoutineU3Ec__Iterator0_Reset_m2734288627 (U3CActivateRoutineU3Ec__Iterator0_t3188531504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CActivateRoutineU3Ec__Iterator0_Reset_m2734288627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreStar/<TestRoutine>c__Iterator1::.ctor()
extern "C"  void U3CTestRoutineU3Ec__Iterator1__ctor_m737039290 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ScoreStar/<TestRoutine>c__Iterator1::MoveNext()
extern "C"  bool U3CTestRoutineU3Ec__Iterator1_MoveNext_m2966838035 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTestRoutineU3Ec__Iterator1_MoveNext_m2966838035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_0059;
	}

IL_0045:
	{
		ScoreStar_t1530904714 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		ScoreStar_Activate_m2924319444(L_4, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0057:
	{
		return (bool)0;
	}

IL_0059:
	{
		return (bool)1;
	}
}
// System.Object ScoreStar/<TestRoutine>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CTestRoutineU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1335109927 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ScoreStar/<TestRoutine>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CTestRoutineU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1446255688 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void ScoreStar/<TestRoutine>c__Iterator1::Dispose()
extern "C"  void U3CTestRoutineU3Ec__Iterator1_Dispose_m449110238 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void ScoreStar/<TestRoutine>c__Iterator1::Reset()
extern "C"  void U3CTestRoutineU3Ec__Iterator1_Reset_m1916017142 (U3CTestRoutineU3Ec__Iterator1_t3179073790 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTestRoutineU3Ec__Iterator1_Reset_m1916017142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScreenFader::.ctor()
extern "C"  void ScreenFader__ctor_m862250762 (ScreenFader_t840564778 * __this, const RuntimeMethod* method)
{
	{
		__this->set_solidAlpha_2((1.0f));
		__this->set_timeToFade_5((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenFader::Start()
extern "C"  void ScreenFader_Start_m3491382492 (ScreenFader_t840564778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenFader_Start_m3491382492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MaskableGraphic_t3839221559 * L_0 = Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343(__this, /*hidden argument*/Component_GetComponent_TisMaskableGraphic_t3839221559_m1169390343_RuntimeMethod_var);
		__this->set_m_graphic_6(L_0);
		return;
	}
}
// System.Collections.IEnumerator ScreenFader::FadeRoutine(System.Single)
extern "C"  RuntimeObject* ScreenFader_FadeRoutine_m2641814482 (ScreenFader_t840564778 * __this, float ___alpha0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenFader_FadeRoutine_m2641814482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeRoutineU3Ec__Iterator0_t3686739037 * V_0 = NULL;
	{
		U3CFadeRoutineU3Ec__Iterator0_t3686739037 * L_0 = (U3CFadeRoutineU3Ec__Iterator0_t3686739037 *)il2cpp_codegen_object_new(U3CFadeRoutineU3Ec__Iterator0_t3686739037_il2cpp_TypeInfo_var);
		U3CFadeRoutineU3Ec__Iterator0__ctor_m2326256812(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeRoutineU3Ec__Iterator0_t3686739037 * L_1 = V_0;
		float L_2 = ___alpha0;
		NullCheck(L_1);
		L_1->set_alpha_0(L_2);
		U3CFadeRoutineU3Ec__Iterator0_t3686739037 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CFadeRoutineU3Ec__Iterator0_t3686739037 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ScreenFader::FadeOn()
extern "C"  void ScreenFader_FadeOn_m2182675462 (ScreenFader_t840564778 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_solidAlpha_2();
		RuntimeObject* L_1 = ScreenFader_FadeRoutine_m2641814482(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenFader::FadeOff()
extern "C"  void ScreenFader_FadeOff_m3851179821 (ScreenFader_t840564778 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_clearAlpha_3();
		RuntimeObject* L_1 = ScreenFader_FadeRoutine_m2641814482(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScreenFader/<FadeRoutine>c__Iterator0::.ctor()
extern "C"  void U3CFadeRoutineU3Ec__Iterator0__ctor_m2326256812 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ScreenFader/<FadeRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CFadeRoutineU3Ec__Iterator0_MoveNext_m3382141493 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeRoutineU3Ec__Iterator0_MoveNext_m3382141493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0074;
	}

IL_0021:
	{
		ScreenFader_t840564778 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		float L_3 = L_2->get_delay_4();
		WaitForSeconds_t1699091251 * L_4 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_2(L_4);
		bool L_5 = __this->get_U24disposing_3();
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0046:
	{
		goto IL_0076;
	}

IL_004b:
	{
		ScreenFader_t840564778 * L_6 = __this->get_U24this_1();
		NullCheck(L_6);
		MaskableGraphic_t3839221559 * L_7 = L_6->get_m_graphic_6();
		float L_8 = __this->get_alpha_0();
		ScreenFader_t840564778 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		float L_10 = L_9->get_timeToFade_5();
		NullCheck(L_7);
		VirtActionInvoker3< float, float, bool >::Invoke(48 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_7, L_8, L_10, (bool)1);
		__this->set_U24PC_4((-1));
	}

IL_0074:
	{
		return (bool)0;
	}

IL_0076:
	{
		return (bool)1;
	}
}
// System.Object ScreenFader/<FadeRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CFadeRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m851014751 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object ScreenFader/<FadeRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CFadeRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4126803819 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void ScreenFader/<FadeRoutine>c__Iterator0::Dispose()
extern "C"  void U3CFadeRoutineU3Ec__Iterator0_Dispose_m1246113964 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void ScreenFader/<FadeRoutine>c__Iterator0::Reset()
extern "C"  void U3CFadeRoutineU3Ec__Iterator0_Reset_m1192370228 (U3CFadeRoutineU3Ec__Iterator0_t3686739037 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeRoutineU3Ec__Iterator0_Reset_m1192370228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m1311707663 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager__ctor_m1311707663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_musicVolume_7((0.4f));
		__this->set_fxVolume_8((0.8f));
		__this->set_lowPitch_9((0.95f));
		__this->set_highPitch_10((1.05f));
		Singleton_1__ctor_m1284254857(__this, /*hidden argument*/Singleton_1__ctor_m1284254857_RuntimeMethod_var);
		return;
	}
}
// System.Void SoundManager::Start()
extern "C"  void SoundManager_Start_m2990335043 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		SoundManager_PlayMusic_m3316504667(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AudioSource SoundManager::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  AudioSource_t3935305588 * SoundManager_PlayClipAtPoint_m1045118740 (SoundManager_t2102329059 * __this, AudioClip_t3680889665 * ___clip0, Vector3_t3722313464  ___position1, float ___volume2, bool ___randomizePitch3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayClipAtPoint_m1045118740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	AudioSource_t3935305588 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		AudioClip_t3680889665 * L_0 = ___clip0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0077;
		}
	}
	{
		AudioClip_t3680889665 * L_2 = ___clip0;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral574698398, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = ___position1;
		NullCheck(L_7);
		Transform_set_position_m3387557959(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		AudioSource_t3935305588 * L_10 = GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(L_9, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var);
		V_1 = L_10;
		AudioSource_t3935305588 * L_11 = V_1;
		AudioClip_t3680889665 * L_12 = ___clip0;
		NullCheck(L_11);
		AudioSource_set_clip_m31653938(L_11, L_12, /*hidden argument*/NULL);
		bool L_13 = ___randomizePitch3;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		float L_14 = __this->get_lowPitch_9();
		float L_15 = __this->get_highPitch_10();
		float L_16 = Random_Range_m2202990745(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		AudioSource_t3935305588 * L_17 = V_1;
		float L_18 = V_2;
		NullCheck(L_17);
		AudioSource_set_pitch_m2413801168(L_17, L_18, /*hidden argument*/NULL);
	}

IL_005c:
	{
		AudioSource_t3935305588 * L_19 = V_1;
		float L_20 = ___volume2;
		NullCheck(L_19);
		AudioSource_set_volume_m1273312851(L_19, L_20, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_21 = V_1;
		NullCheck(L_21);
		AudioSource_Play_m48294159(L_21, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_22 = V_0;
		AudioClip_t3680889665 * L_23 = ___clip0;
		NullCheck(L_23);
		float L_24 = AudioClip_get_length_m4269890037(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_25 = V_1;
		return L_25;
	}

IL_0077:
	{
		return (AudioSource_t3935305588 *)NULL;
	}
}
// UnityEngine.AudioSource SoundManager::PlayRandom(UnityEngine.AudioClip[],UnityEngine.Vector3,System.Single)
extern "C"  AudioSource_t3935305588 * SoundManager_PlayRandom_m2395206716 (SoundManager_t2102329059 * __this, AudioClipU5BU5D_t143221404* ___clips0, Vector3_t3722313464  ___position1, float ___volume2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayRandom_m2395206716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioSource_t3935305588 * V_1 = NULL;
	{
		AudioClipU5BU5D_t143221404* L_0 = ___clips0;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		AudioClipU5BU5D_t143221404* L_1 = ___clips0;
		NullCheck(L_1);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		AudioClipU5BU5D_t143221404* L_2 = ___clips0;
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_3;
		AudioClipU5BU5D_t143221404* L_4 = ___clips0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AudioClip_t3680889665 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		AudioClipU5BU5D_t143221404* L_9 = ___clips0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AudioClip_t3680889665 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t3722313464  L_13 = ___position1;
		float L_14 = ___volume2;
		AudioSource_t3935305588 * L_15 = SoundManager_PlayClipAtPoint_m1045118740(__this, L_12, L_13, L_14, (bool)1, /*hidden argument*/NULL);
		V_1 = L_15;
		AudioSource_t3935305588 * L_16 = V_1;
		return L_16;
	}

IL_0035:
	{
		return (AudioSource_t3935305588 *)NULL;
	}
}
// System.Void SoundManager::PlayMusic()
extern "C"  void SoundManager_PlayMusic_m3316504667 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayMusic_m3316504667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioClipU5BU5D_t143221404* L_0 = __this->get_musicClips_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_musicVolume_7();
		SoundManager_PlayRandom_m2395206716(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlayWinSound()
extern "C"  void SoundManager_PlayWinSound_m2177567815 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayWinSound_m2177567815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioClipU5BU5D_t143221404* L_0 = __this->get_winClips_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_fxVolume_8();
		SoundManager_PlayRandom_m2395206716(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlayLoseSound()
extern "C"  void SoundManager_PlayLoseSound_m3382266869 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayLoseSound_m3382266869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioClipU5BU5D_t143221404* L_0 = __this->get_loseClips_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_fxVolume_8();
		SoundManager_PlayRandom_m2395206716(__this, L_0, L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)(0.5f))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlayBonusSound()
extern "C"  void SoundManager_PlayBonusSound_m614453595 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_PlayBonusSound_m614453595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioClipU5BU5D_t143221404* L_0 = __this->get_bonusClips_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_fxVolume_8();
		SoundManager_PlayRandom_m2395206716(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tile::.ctor()
extern "C"  void Tile__ctor_m989844465 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tile::Awake()
extern "C"  void Tile_Awake_m4045536830 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_Awake_m4045536830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_m_spriteRenderer_6(L_0);
		return;
	}
}
// System.Void Tile::Init(System.Int32,System.Int32,Board)
extern "C"  void Tile_Init_m600517075 (Tile_t2634157908 * __this, int32_t ___x0, int32_t ___y1, Board_t3688305287 * ___board2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_Init_m600517075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		__this->set_xIndex_2(L_0);
		int32_t L_1 = ___y1;
		__this->set_yIndex_3(L_1);
		Board_t3688305287 * L_2 = ___board2;
		__this->set_m_board_5(L_2);
		int32_t L_3 = __this->get_tileType_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		SpriteU5BU5D_t2581906349* L_4 = __this->get_breakableSprites_9();
		int32_t L_5 = __this->get_breakableValue_8();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Sprite_t280657092 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_9 = __this->get_m_spriteRenderer_6();
		SpriteU5BU5D_t2581906349* L_10 = __this->get_breakableSprites_9();
		int32_t L_11 = __this->get_breakableValue_8();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Sprite_t280657092 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		SpriteRenderer_set_sprite_m1286893786(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void Tile::OnMouseDown()
extern "C"  void Tile_OnMouseDown_m10387067 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnMouseDown_m10387067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Board_t3688305287 * L_0 = __this->get_m_board_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Board_t3688305287 * L_2 = __this->get_m_board_5();
		NullCheck(L_2);
		Board_ClickTile_m1521009140(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Tile::OnMouseEnter()
extern "C"  void Tile_OnMouseEnter_m114354976 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnMouseEnter_m114354976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Board_t3688305287 * L_0 = __this->get_m_board_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Board_t3688305287 * L_2 = __this->get_m_board_5();
		NullCheck(L_2);
		Board_DragToTile_m2909868625(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Tile::OnMouseUp()
extern "C"  void Tile_OnMouseUp_m1061959776 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnMouseUp_m1061959776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Board_t3688305287 * L_0 = __this->get_m_board_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Board_t3688305287 * L_2 = __this->get_m_board_5();
		NullCheck(L_2);
		Board_ReleaseTile_m2927120086(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Tile::BreakTile()
extern "C"  void Tile_BreakTile_m1777725321 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_tileType_4();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		RuntimeObject* L_1 = Tile_BreakTileRoutine_m4187600944(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Tile::BreakTileRoutine()
extern "C"  RuntimeObject* Tile_BreakTileRoutine_m4187600944 (Tile_t2634157908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile_BreakTileRoutine_m4187600944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * V_0 = NULL;
	{
		U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * L_0 = (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 *)il2cpp_codegen_object_new(U3CBreakTileRoutineU3Ec__Iterator0_t2156931628_il2cpp_TypeInfo_var);
		U3CBreakTileRoutineU3Ec__Iterator0__ctor_m1234500558(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tile/<BreakTileRoutine>c__Iterator0::.ctor()
extern "C"  void U3CBreakTileRoutineU3Ec__Iterator0__ctor_m1234500558 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Tile/<BreakTileRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CBreakTileRoutineU3Ec__Iterator0_MoveNext_m2823459467 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBreakTileRoutineU3Ec__Iterator0_MoveNext_m2823459467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_011b;
	}

IL_0021:
	{
		Tile_t2634157908 * L_2 = __this->get_U24this_0();
		Tile_t2634157908 * L_3 = __this->get_U24this_0();
		Tile_t2634157908 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_breakableValue_8();
		int32_t L_6 = L_5;
		V_1 = L_6;
		NullCheck(L_4);
		L_4->set_breakableValue_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = V_1;
		Tile_t2634157908 * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_breakableValue_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_7, 0, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_breakableValue_8(L_10);
		WaitForSeconds_t1699091251 * L_11 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_11, (0.25f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_11);
		bool L_12 = __this->get_U24disposing_2();
		if (L_12)
		{
			goto IL_0072;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0072:
	{
		goto IL_011d;
	}

IL_0077:
	{
		Tile_t2634157908 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_breakableValue_8();
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		Tile_t2634157908 * L_15 = __this->get_U24this_0();
		NullCheck(L_15);
		L_15->set_breakableValue_8(0);
	}

IL_0094:
	{
		Tile_t2634157908 * L_16 = __this->get_U24this_0();
		NullCheck(L_16);
		SpriteU5BU5D_t2581906349* L_17 = L_16->get_breakableSprites_9();
		Tile_t2634157908 * L_18 = __this->get_U24this_0();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_breakableValue_8();
		NullCheck(L_17);
		int32_t L_20 = L_19;
		Sprite_t280657092 * L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_21, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00dd;
		}
	}
	{
		Tile_t2634157908 * L_23 = __this->get_U24this_0();
		NullCheck(L_23);
		SpriteRenderer_t3235626157 * L_24 = L_23->get_m_spriteRenderer_6();
		Tile_t2634157908 * L_25 = __this->get_U24this_0();
		NullCheck(L_25);
		SpriteU5BU5D_t2581906349* L_26 = L_25->get_breakableSprites_9();
		Tile_t2634157908 * L_27 = __this->get_U24this_0();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_breakableValue_8();
		NullCheck(L_26);
		int32_t L_29 = L_28;
		Sprite_t280657092 * L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_24);
		SpriteRenderer_set_sprite_m1286893786(L_24, L_30, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		Tile_t2634157908 * L_31 = __this->get_U24this_0();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_breakableValue_8();
		if (L_32)
		{
			goto IL_0114;
		}
	}
	{
		Tile_t2634157908 * L_33 = __this->get_U24this_0();
		NullCheck(L_33);
		L_33->set_tileType_4(2);
		Tile_t2634157908 * L_34 = __this->get_U24this_0();
		NullCheck(L_34);
		SpriteRenderer_t3235626157 * L_35 = L_34->get_m_spriteRenderer_6();
		Tile_t2634157908 * L_36 = __this->get_U24this_0();
		NullCheck(L_36);
		Color_t2555686324  L_37 = L_36->get_normalColor_7();
		NullCheck(L_35);
		SpriteRenderer_set_color_m3056777566(L_35, L_37, /*hidden argument*/NULL);
	}

IL_0114:
	{
		__this->set_U24PC_3((-1));
	}

IL_011b:
	{
		return (bool)0;
	}

IL_011d:
	{
		return (bool)1;
	}
}
// System.Object Tile/<BreakTileRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CBreakTileRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2807646955 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Tile/<BreakTileRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CBreakTileRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3162402196 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Tile/<BreakTileRoutine>c__Iterator0::Dispose()
extern "C"  void U3CBreakTileRoutineU3Ec__Iterator0_Dispose_m2558459434 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Tile/<BreakTileRoutine>c__Iterator0::Reset()
extern "C"  void U3CBreakTileRoutineU3Ec__Iterator0_Reset_m3209178042 (U3CBreakTileRoutineU3Ec__Iterator0_t2156931628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBreakTileRoutineU3Ec__Iterator0_Reset_m3209178042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeBonus::.ctor()
extern "C"  void TimeBonus__ctor_m2689292950 (TimeBonus_t1511394491 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bonusValue_2(5);
		__this->set_chanceForBonus_3((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimeBonus::Start()
extern "C"  void TimeBonus_Start_m3288207402 (TimeBonus_t1511394491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeBonus_Start_m3288207402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Random_Range_m2202990745(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = __this->get_chanceForBonus_3();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		__this->set_bonusValue_2(0);
	}

IL_0023:
	{
		GameManager_t1536523654 * L_3 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		GameManager_t1536523654 * L_5 = Singleton_1_get_Instance_m1826857602(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1826857602_RuntimeMethod_var);
		NullCheck(L_5);
		LevelGoalTimed_t3825364430 * L_6 = GameManager_get_levelGoalTimed_m3381075194(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		__this->set_bonusValue_2(0);
	}

IL_004f:
	{
		int32_t L_8 = __this->get_bonusValue_2();
		TimeBonus_SetActive_m2925298885(__this, (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_bonusValue_2();
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = __this->get_bonusValue_2();
		GameObject_t1113636619 * L_11 = __this->get_bonusGlow_4();
		TimeBonus_SetupMaterial_m1094608083(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), L_11, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void TimeBonus::SetActive(System.Boolean)
extern "C"  void TimeBonus_SetActive_m2925298885 (TimeBonus_t1511394491 * __this, bool ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeBonus_SetActive_m2925298885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_bonusGlow_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_bonusGlow_4();
		bool L_3 = ___state0;
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		GameObject_t1113636619 * L_4 = __this->get_ringGlow_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get_ringGlow_5();
		bool L_7 = ___state0;
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void TimeBonus::SetupMaterial(System.Int32,UnityEngine.GameObject)
extern "C"  void TimeBonus_SetupMaterial_m1094608083 (TimeBonus_t1511394491 * __this, int32_t ___value0, GameObject_t1113636619 * ___bonusGlow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeBonus_SetupMaterial_m1094608083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleSystemRenderer_t2065813411 * V_1 = NULL;
	{
		int32_t L_0 = ___value0;
		MaterialU5BU5D_t561872642* L_1 = __this->get_bonusMaterials_6();
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_0, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		MaterialU5BU5D_t561872642* L_3 = __this->get_bonusMaterials_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Material_t340375123 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t1113636619 * L_8 = ___bonusGlow1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t1113636619 * L_10 = ___bonusGlow1;
		NullCheck(L_10);
		ParticleSystemRenderer_t2065813411 * L_11 = GameObject_GetComponent_TisParticleSystemRenderer_t2065813411_m4196326112(L_10, /*hidden argument*/GameObject_GetComponent_TisParticleSystemRenderer_t2065813411_m4196326112_RuntimeMethod_var);
		V_1 = L_11;
		ParticleSystemRenderer_t2065813411 * L_12 = V_1;
		MaterialU5BU5D_t561872642* L_13 = __this->get_bonusMaterials_6();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Material_t340375123 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		Renderer_set_material_m1157964140(L_12, L_16, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m1596977667 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_maxTime_4(((int32_t)60));
		__this->set_flashTimerLimit_6(((int32_t)10));
		__this->set_flashInterval_8((1.0f));
		Color_t2555686324  L_0 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_flashColor_9(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::InitTimer(System.Int32)
extern "C"  void Timer_InitTimer_m536240261 (Timer_t4185932343 * __this, int32_t ___maxTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_InitTimer_m536240261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___maxTime0;
		__this->set_m_maxTime_4(L_0);
		Image_t2670269651 * L_1 = __this->get_clockImage_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Image_t2670269651 * L_3 = __this->get_clockImage_3();
		NullCheck(L_3);
		Image_set_type_m2038193736(L_3, 3, /*hidden argument*/NULL);
		Image_t2670269651 * L_4 = __this->get_clockImage_3();
		NullCheck(L_4);
		Image_set_fillMethod_m872357774(L_4, 4, /*hidden argument*/NULL);
		Image_t2670269651 * L_5 = __this->get_clockImage_3();
		NullCheck(L_5);
		Image_set_fillOrigin_m469806249(L_5, 2, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Text_t1901882714 * L_6 = __this->get_timeLeftText_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		Text_t1901882714 * L_8 = __this->get_timeLeftText_2();
		String_t* L_9 = Int32_ToString_m141394615((&___maxTime0), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
	}

IL_0065:
	{
		return;
	}
}
// System.Void Timer::UpdateTimer(System.Int32)
extern "C"  void Timer_UpdateTimer_m3105605545 (Timer_t4185932343 * __this, int32_t ___currentTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_UpdateTimer_m3105605545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_paused_5();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Image_t2670269651 * L_1 = __this->get_clockImage_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00ab;
		}
	}
	{
		Image_t2670269651 * L_3 = __this->get_clockImage_3();
		int32_t L_4 = ___currentTime0;
		int32_t L_5 = __this->get_m_maxTime_4();
		NullCheck(L_3);
		Image_set_fillAmount_m3737925590(L_3, ((float)((float)(((float)((float)L_4)))/(float)(((float)((float)L_5))))), /*hidden argument*/NULL);
		int32_t L_6 = ___currentTime0;
		int32_t L_7 = __this->get_flashTimerLimit_6();
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_00ab;
		}
	}
	{
		Image_t2670269651 * L_8 = __this->get_clockImage_3();
		Color_t2555686324  L_9 = __this->get_flashColor_9();
		float L_10 = __this->get_flashInterval_8();
		RuntimeObject* L_11 = Timer_FlashRoutine_m1870750396(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_flashRoutine_10(L_11);
		RuntimeObject* L_12 = __this->get_m_flashRoutine_10();
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_12, /*hidden argument*/NULL);
		SoundManager_t2102329059 * L_13 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		AudioClip_t3680889665 * L_15 = __this->get_flashBeep_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ab;
		}
	}
	{
		SoundManager_t2102329059 * L_17 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		AudioClip_t3680889665 * L_18 = __this->get_flashBeep_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_19 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		SoundManager_t2102329059 * L_20 = Singleton_1_get_Instance_m3757570477(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3757570477_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = L_20->get_fxVolume_8();
		NullCheck(L_17);
		SoundManager_PlayClipAtPoint_m1045118740(L_17, L_18, L_19, L_21, (bool)0, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		Text_t1901882714 * L_22 = __this->get_timeLeftText_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_22, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d4;
		}
	}
	{
		Text_t1901882714 * L_24 = __this->get_timeLeftText_2();
		String_t* L_25 = Int32_ToString_m141394615((&___currentTime0), /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_25);
	}

IL_00d4:
	{
		return;
	}
}
// System.Collections.IEnumerator Timer::FlashRoutine(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern "C"  RuntimeObject* Timer_FlashRoutine_m1870750396 (Timer_t4185932343 * __this, Image_t2670269651 * ___image0, Color_t2555686324  ___targetColor1, float ___interval2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_FlashRoutine_m1870750396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFlashRoutineU3Ec__Iterator0_t808325431 * V_0 = NULL;
	{
		U3CFlashRoutineU3Ec__Iterator0_t808325431 * L_0 = (U3CFlashRoutineU3Ec__Iterator0_t808325431 *)il2cpp_codegen_object_new(U3CFlashRoutineU3Ec__Iterator0_t808325431_il2cpp_TypeInfo_var);
		U3CFlashRoutineU3Ec__Iterator0__ctor_m403712195(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFlashRoutineU3Ec__Iterator0_t808325431 * L_1 = V_0;
		Image_t2670269651 * L_2 = ___image0;
		NullCheck(L_1);
		L_1->set_image_0(L_2);
		U3CFlashRoutineU3Ec__Iterator0_t808325431 * L_3 = V_0;
		Color_t2555686324  L_4 = ___targetColor1;
		NullCheck(L_3);
		L_3->set_targetColor_2(L_4);
		U3CFlashRoutineU3Ec__Iterator0_t808325431 * L_5 = V_0;
		float L_6 = ___interval2;
		NullCheck(L_5);
		L_5->set_interval_3(L_6);
		U3CFlashRoutineU3Ec__Iterator0_t808325431 * L_7 = V_0;
		return L_7;
	}
}
// System.Void Timer::FadeOff()
extern "C"  void Timer_FadeOff_m2085329431 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Timer_FadeOff_m2085329431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScreenFaderU5BU5D_t291289071* V_0 = NULL;
	ScreenFader_t840564778 * V_1 = NULL;
	ScreenFaderU5BU5D_t291289071* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject* L_0 = __this->get_m_flashRoutine_10();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_m_flashRoutine_10();
		MonoBehaviour_StopCoroutine_m615723318(__this, L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ScreenFaderU5BU5D_t291289071* L_2 = Component_GetComponentsInChildren_TisScreenFader_t840564778_m2539201835(__this, /*hidden argument*/Component_GetComponentsInChildren_TisScreenFader_t840564778_m2539201835_RuntimeMethod_var);
		V_0 = L_2;
		ScreenFaderU5BU5D_t291289071* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0035;
	}

IL_0027:
	{
		ScreenFaderU5BU5D_t291289071* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ScreenFader_t840564778 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		ScreenFader_t840564778 * L_8 = V_1;
		NullCheck(L_8);
		ScreenFader_FadeOff_m3851179821(L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_10 = V_3;
		ScreenFaderU5BU5D_t291289071* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer/<FlashRoutine>c__Iterator0::.ctor()
extern "C"  void U3CFlashRoutineU3Ec__Iterator0__ctor_m403712195 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Timer/<FlashRoutine>c__Iterator0::MoveNext()
extern "C"  bool U3CFlashRoutineU3Ec__Iterator0_MoveNext_m1015291647 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFlashRoutineU3Ec__Iterator0_MoveNext_m1015291647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0091;
			}
			case 2:
			{
				goto IL_00db;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_0025:
	{
		Image_t2670269651 * L_2 = __this->get_image_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00db;
		}
	}
	{
		Image_t2670269651 * L_4 = __this->get_image_0();
		NullCheck(L_4);
		Color_t2555686324  L_5 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->set_U3CoriginalColorU3E__1_1(L_5);
		Image_t2670269651 * L_6 = __this->get_image_0();
		Color_t2555686324  L_7 = __this->get_targetColor_2();
		float L_8 = __this->get_interval_3();
		NullCheck(L_6);
		VirtActionInvoker4< Color_t2555686324 , float, bool, bool >::Invoke(46 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_6, L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)(0.3f))), (bool)1, (bool)1);
		float L_9 = __this->get_interval_3();
		WaitForSeconds_t1699091251 * L_10 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_10, ((float)il2cpp_codegen_multiply((float)L_9, (float)(0.5f))), /*hidden argument*/NULL);
		__this->set_U24current_4(L_10);
		bool L_11 = __this->get_U24disposing_5();
		if (L_11)
		{
			goto IL_008c;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_008c:
	{
		goto IL_00e4;
	}

IL_0091:
	{
		Image_t2670269651 * L_12 = __this->get_image_0();
		Color_t2555686324  L_13 = __this->get_U3CoriginalColorU3E__1_1();
		float L_14 = __this->get_interval_3();
		NullCheck(L_12);
		VirtActionInvoker4< Color_t2555686324 , float, bool, bool >::Invoke(46 /* System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean) */, L_12, L_13, ((float)il2cpp_codegen_multiply((float)L_14, (float)(0.5f))), (bool)1, (bool)1);
		float L_15 = __this->get_interval_3();
		WaitForSeconds_t1699091251 * L_16 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_16, ((float)il2cpp_codegen_multiply((float)L_15, (float)(0.5f))), /*hidden argument*/NULL);
		__this->set_U24current_4(L_16);
		bool L_17 = __this->get_U24disposing_5();
		if (L_17)
		{
			goto IL_00d6;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_00d6:
	{
		goto IL_00e4;
	}

IL_00db:
	{
		__this->set_U24PC_6((-1));
	}

IL_00e2:
	{
		return (bool)0;
	}

IL_00e4:
	{
		return (bool)1;
	}
}
// System.Object Timer/<FlashRoutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CFlashRoutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m703107554 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object Timer/<FlashRoutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CFlashRoutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m910660419 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void Timer/<FlashRoutine>c__Iterator0::Dispose()
extern "C"  void U3CFlashRoutineU3Ec__Iterator0_Dispose_m1293102359 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void Timer/<FlashRoutine>c__Iterator0::Reset()
extern "C"  void U3CFlashRoutineU3Ec__Iterator0_Reset_m3905301688 (U3CFlashRoutineU3Ec__Iterator0_t808325431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFlashRoutineU3Ec__Iterator0_Reset_m3905301688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
