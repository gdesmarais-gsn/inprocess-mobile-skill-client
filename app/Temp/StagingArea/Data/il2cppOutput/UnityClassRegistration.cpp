template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; template <> void RegisterClass<LensFlare>();
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; template <> void RegisterClass<Projector>();
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class Terrain; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; 
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>();
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>();
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>();
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; template <> void RegisterClass<AssetBundle>();
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterClass<AudioMixer>();
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>();
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>();
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class BillboardAsset; 
class ComputeShader; 
class Flare; template <> void RegisterClass<Flare>();
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>();
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; template <> void RegisterClass<ShaderVariantCollection>();
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; template <> void RegisterClass<CGProgram>();
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; 
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; 
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 94 non stripped classes
	//0. AssetBundle
	RegisterClass<AssetBundle>();
	//1. NamedObject
	RegisterClass<NamedObject>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Behaviour
	RegisterClass<Behaviour>();
	//4. Unity::Component
	RegisterClass<Unity::Component>();
	//5. Camera
	RegisterClass<Camera>();
	//6. GameObject
	RegisterClass<GameObject>();
	//7. RenderSettings
	RegisterClass<RenderSettings>();
	//8. LevelGameManager
	RegisterClass<LevelGameManager>();
	//9. GameManager
	RegisterClass<GameManager>();
	//10. MeshFilter
	RegisterClass<MeshFilter>();
	//11. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//12. Renderer
	RegisterClass<Renderer>();
	//13. Projector
	RegisterClass<Projector>();
	//14. Skybox
	RegisterClass<Skybox>();
	//15. GUILayer
	RegisterClass<GUILayer>();
	//16. Mesh
	RegisterClass<Mesh>();
	//17. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//18. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//19. Transform
	RegisterClass<Transform>();
	//20. Shader
	RegisterClass<Shader>();
	//21. Material
	RegisterClass<Material>();
	//22. ShaderVariantCollection
	RegisterClass<ShaderVariantCollection>();
	//23. Sprite
	RegisterClass<Sprite>();
	//24. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//25. TextAsset
	RegisterClass<TextAsset>();
	//26. Texture
	RegisterClass<Texture>();
	//27. Texture2D
	RegisterClass<Texture2D>();
	//28. RenderTexture
	RegisterClass<RenderTexture>();
	//29. ParticleSystem
	RegisterClass<ParticleSystem>();
	//30. Rigidbody
	RegisterClass<Rigidbody>();
	//31. Collider
	RegisterClass<Collider>();
	//32. BoxCollider
	RegisterClass<BoxCollider>();
	//33. SphereCollider
	RegisterClass<SphereCollider>();
	//34. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//35. CharacterController
	RegisterClass<CharacterController>();
	//36. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//37. AudioClip
	RegisterClass<AudioClip>();
	//38. SampleClip
	RegisterClass<SampleClip>();
	//39. AudioSource
	RegisterClass<AudioSource>();
	//40. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//41. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>();
	//42. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//43. Animator
	RegisterClass<Animator>();
	//44. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//45. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//46. UI::Canvas
	RegisterClass<UI::Canvas>();
	//47. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//48. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//49. MeshRenderer
	RegisterClass<MeshRenderer>();
	//50. AnimationClip
	RegisterClass<AnimationClip>();
	//51. Motion
	RegisterClass<Motion>();
	//52. Collider2D
	RegisterClass<Collider2D>();
	//53. PreloadData
	RegisterClass<PreloadData>();
	//54. Cubemap
	RegisterClass<Cubemap>();
	//55. Texture3D
	RegisterClass<Texture3D>();
	//56. Texture2DArray
	RegisterClass<Texture2DArray>();
	//57. TimeManager
	RegisterClass<TimeManager>();
	//58. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//59. AudioManager
	RegisterClass<AudioManager>();
	//60. InputManager
	RegisterClass<InputManager>();
	//61. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//62. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//63. QualitySettings
	RegisterClass<QualitySettings>();
	//64. PhysicsManager
	RegisterClass<PhysicsManager>();
	//65. TagManager
	RegisterClass<TagManager>();
	//66. ScriptMapper
	RegisterClass<ScriptMapper>();
	//67. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//68. MonoScript
	RegisterClass<MonoScript>();
	//69. MonoManager
	RegisterClass<MonoManager>();
	//70. PlayerSettings
	RegisterClass<PlayerSettings>();
	//71. BuildSettings
	RegisterClass<BuildSettings>();
	//72. ResourceManager
	RegisterClass<ResourceManager>();
	//73. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//74. ParticleAnimator
	RegisterClass<ParticleAnimator>();
	//75. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>();
	//76. ParticleEmitter
	RegisterClass<ParticleEmitter>();
	//77. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//78. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//79. AudioListener
	RegisterClass<AudioListener>();
	//80. Avatar
	RegisterClass<Avatar>();
	//81. AnimatorController
	RegisterClass<AnimatorController>();
	//82. CGProgram
	RegisterClass<CGProgram>();
	//83. Animation
	RegisterClass<Animation>();
	//84. Flare
	RegisterClass<Flare>();
	//85. LensFlare
	RegisterClass<LensFlare>();
	//86. FlareLayer
	RegisterClass<FlareLayer>();
	//87. LightmapSettings
	RegisterClass<LightmapSettings>();
	//88. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//89. AudioMixer
	RegisterClass<AudioMixer>();
	//90. LightProbes
	RegisterClass<LightProbes>();
	//91. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>();
	//92. AudioMixerGroup
	RegisterClass<AudioMixerGroup>();
	//93. Light
	RegisterClass<Light>();

}
