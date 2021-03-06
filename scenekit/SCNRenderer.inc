{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNRenderer.h }

{ Types from SCNRenderer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SCNRendererPtr = ^SCNRenderer;
{$endif}

{$ifdef CLASSES}

type
  SCNRenderer = objcclass external (NSObject, SCNSceneRendererProtocol, SCNTechniqueSupportProtocol)
  public
    {$if defined(SCN_ENABLE_OPENGL)}
    class function rendererWithContext_options (context: CGLContextObj; options: NSDictionary): id; message 'rendererWithContext:options:';
    {$endif}
    class function rendererWithDevice_options (device: MTLDeviceProtocol; options: NSDictionary): id; message 'rendererWithDevice:options:'; { available in macos , ios  }
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure renderAtTime_viewport_commandBuffer_passDescriptor (time: CFTimeInterval; viewport: CGRect; commandBuffer: MTLCommandBufferProtocol; renderPassDescriptor: MTLRenderPassDescriptor); message 'renderAtTime:viewport:commandBuffer:passDescriptor:'; { available in macos , ios  }
    procedure renderAtTime (time: CFTimeInterval); message 'renderAtTime:'; { available in macos  }
    procedure updateAtTime (time: CFTimeInterval); message 'updateAtTime:'; { available in macos , ios , tvos , watchos  }
    procedure renderWithViewport_commandBuffer_passDescriptor (viewport: CGRect; commandBuffer: MTLCommandBufferProtocol; renderPassDescriptor: MTLRenderPassDescriptor); message 'renderWithViewport:commandBuffer:passDescriptor:'; { available in macos , ios , tvos , watchos  }
    function nextFrameTime: CFTimeInterval; message 'nextFrameTime'; { available in macos  }
    function snapshotAtTime_withSize_antialiasingMode (time: CFTimeInterval; size: CGSize; antialiasingMode: SCNAntialiasingMode): NSImage; message 'snapshotAtTime:withSize:antialiasingMode:'; { available in macos , ios , tvos  }
    procedure updateProbes_atTime (lightProbes: NSArray; time: CFTimeInterval); message 'updateProbes:atTime:'; { available in macos , ios , tvos  }

    { Adopted protocols }
    function audioEngine: AVAudioEngine; message 'audioEngine'; { available in macos , ios  }
    function audioEnvironmentNode: AVAudioEnvironmentNode; message 'audioEnvironmentNode'; { unavailable in watchos }
    function audioListener: SCNNode; message 'audioListener'; { available in macos , ios  }
    function autoenablesDefaultLighting: objcbool; message 'autoenablesDefaultLighting';
    function colorPixelFormat: MTLPixelFormat; message 'colorPixelFormat'; { available in macos , ios  }
    function commandQueue: MTLCommandQueueProtocol; message 'commandQueue'; { available in macos , ios  }
    function context: pointer; message 'context';
    function currentRenderCommandEncoder: MTLRenderCommandEncoderProtocol; message 'currentRenderCommandEncoder'; { available in macos , ios  }
    function currentRenderPassDescriptor: MTLRenderPassDescriptor; message 'currentRenderPassDescriptor'; { unavailable in watchos }
    function currentTime: NSTimeInterval; message 'currentTime'; { unavailable in ios, tvos, watchos, macCatalyst }
    function currentViewport: CGRect; message 'currentViewport'; { available in macos , ios , tvos , watchos  }
    function debugOptions: SCNDebugOptions; message 'debugOptions'; { available in macos , ios  }
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function depthPixelFormat: MTLPixelFormat; message 'depthPixelFormat'; { available in macos , ios  }
    function device: MTLDeviceProtocol; message 'device'; { available in macos , ios  }
    function hitTest_options (point: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isJitteringEnabled: objcbool; message 'isJitteringEnabled';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): objcbool; message 'isNodeInsideFrustum:withPointOfView:'; { available in macos  }
    function isPlaying: objcbool; message 'isPlaying';
    function isTemporalAntialiasingEnabled: objcbool; message 'isTemporalAntialiasingEnabled'; { available in macos , ios , tvos , watchos  }
    function loops: objcbool; message 'loops';
    function nodesInsideFrustumWithPointOfView (pointOfView: SCNNode): NSArray; message 'nodesInsideFrustumWithPointOfView:'; { available in macos , ios  }
    function overlaySKScene: SKScene; message 'overlaySKScene'; { available in macos  }
    function pointOfView: SCNNode; message 'pointOfView';
    function prepareObject_shouldAbortBlock (object_: id; block: SCNSceneRendererPrepareObjectCallback): objcbool; message 'prepareObject:shouldAbortBlock:'; { available in macos  }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: SCNSceneRendererPrepareObjectsCallback); message 'prepareObjects:withCompletionHandler:'; { available in macos  }
    procedure presentScene_withTransition_incomingPointOfView_completionHandler (scene_: SCNScene; transition: SKTransition; pointOfView: SCNNode; completionHandler: SCNSceneRendererPresentSceneCallback); message 'presentScene:withTransition:incomingPointOfView:completionHandler:'; { available in macos , ios  }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in macos  }
    function renderingAPI: SCNRenderingAPI; message 'renderingAPI'; { available in macos , ios  }
    function scene_: SCNScene; message 'scene';
    function sceneTime: NSTimeInterval; message 'sceneTime'; { available in macos  }
    procedure setAudioListener (newValue: SCNNode); message 'setAudioListener:'; { available in macos , ios  }
    procedure setAutoenablesDefaultLighting (newValue: objcbool); message 'setAutoenablesDefaultLighting:';
    procedure setCurrentTime (newValue: NSTimeInterval); message 'setCurrentTime:'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure setDebugOptions (newValue: SCNDebugOptions); message 'setDebugOptions:'; { available in macos , ios  }
    procedure setDelegate (newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    procedure setJitteringEnabled (newValue: objcbool); message 'setJitteringEnabled:';
    procedure setLoops (newValue: objcbool); message 'setLoops:';
    procedure setOverlaySKScene (newValue: SKScene); message 'setOverlaySKScene:'; { available in macos  }
    procedure setPlaying (newValue: objcbool); message 'setPlaying:';
    procedure setPointOfView (newValue: SCNNode); message 'setPointOfView:';
    procedure setScene_ (newValue: SCNScene); message 'setScene:';
    procedure setSceneTime (newValue: NSTimeInterval); message 'setSceneTime:'; { available in macos  }
    procedure setShowsStatistics (newValue: objcbool); message 'setShowsStatistics:'; { available in macos  }
    procedure setTechnique (newValue: SCNTechnique); message 'setTechnique:'; { available in macos  }
    procedure setTemporalAntialiasingEnabled (newValue: objcbool); message 'setTemporalAntialiasingEnabled:'; { available in macos , ios , tvos , watchos  }
    procedure setUsesReverseZ (newValue: objcbool); message 'setUsesReverseZ:'; { available in macos , ios , tvos , watchos  }
    function showsStatistics: objcbool; message 'showsStatistics'; { available in macos  }
    function stencilPixelFormat: MTLPixelFormat; message 'stencilPixelFormat'; { available in macos , ios  }
    function technique: SCNTechnique; message 'technique'; { available in macos  }
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in macos  }
    function usesReverseZ: objcbool; message 'usesReverseZ'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

