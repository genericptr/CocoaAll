{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIImageProcessor.h }

{ Types from CIImageProcessorKernel }
{$ifdef TYPES}



{$endif}


{ Types from CIImageProcessorInputProtocol }
{$ifdef TYPES}

{$endif}


{ Types from CIImageProcessorOutputProtocol }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  CIImageProcessorKernelPtr = ^CIImageProcessorKernel;
  CIImageProcessorInputProtocolPtr = ^CIImageProcessorInputProtocol;
  CIImageProcessorOutputProtocolPtr = ^CIImageProcessorOutputProtocol;
{$endif}

{$ifdef CLASSES}

type
  CIImageProcessorKernel = objcclass external (NSObject)
  public
    class function processWithInputs_arguments_output_error (inputs: NSArray; arguments: NSDictionary; output: id; error: NSErrorPtr): objcbool; message 'processWithInputs:arguments:output:error:';
    class function roiForInput_arguments_outputRect (input: cint; arguments: NSDictionary; outputRect: CGRect): CGRect; message 'roiForInput:arguments:outputRect:';
    class function formatForInputAtIndex (input: cint): CIFormat; message 'formatForInputAtIndex:';
    {$if defined(__has_feature)}
    class function outputFormat: CIFormat; message 'outputFormat';
    {$else}
    class function outputFormat: CIFormat; message 'outputFormat';
    {$endif}
    {$if defined(__has_feature)}
    class function outputIsOpaque: cbool; message 'outputIsOpaque'; { available in 10_13, 11_0 }
    {$else}
    class function outputIsOpaque: cbool; message 'outputIsOpaque'; { available in 10_13, 11_0 }
    {$endif}
    {$if defined(__has_feature)}
    class function synchronizeInputs: cbool; message 'synchronizeInputs';
    {$else}
    class function synchronizeInputs: cbool; message 'synchronizeInputs';
    {$endif}
    class function applyWithExtent_inputs_arguments_error (extent: CGRect; inputs: NSArray; args: NSDictionary; error: NSErrorPtr): CIImage; message 'applyWithExtent:inputs:arguments:error:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CIImageProcessorInputProtocol = objcprotocol external name 'CIImageProcessorInput'
    function region: CGRect; message 'region';
    function bytesPerRow: size_t; message 'bytesPerRow';
    function format: CIFormat; message 'format';
    function baseAddress: pointer; message 'baseAddress';
    {$if defined(COREIMAGE_SUPPORTS_IOSURFACE)}
    function surface: IOSurfaceRef; message 'surface';
    {$endif}
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer';
    function metalTexture: id; message 'metalTexture';
  end;

type
  CIImageProcessorOutputProtocol = objcprotocol external name 'CIImageProcessorOutput'
    function region: CGRect; message 'region';
    function bytesPerRow: size_t; message 'bytesPerRow';
    function format: CIFormat; message 'format';
    function baseAddress: pointer; message 'baseAddress';
    {$if defined(COREIMAGE_SUPPORTS_IOSURFACE)}
    function surface: IOSurfaceRef; message 'surface';
    {$endif}
    function pixelBuffer: CVPixelBufferRef; message 'pixelBuffer';
    function metalTexture: id; message 'metalTexture';
    function metalCommandBuffer: id; message 'metalCommandBuffer';
  end;
{$endif}
